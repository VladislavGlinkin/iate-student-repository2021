/*
* ������ 4-1. ������������ ������� ������� ��������.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int arr[10];
	int a, b, t;

	// �������� ������ ���������� �������.

	srand(time(0));

	for (t = 0; t < 10; t++)
		arr[t] = rand() % 100;

	// ������� �� ����� �������� ������

	cout << "�������� ������: \n";

	for (t = 0; t < 10; t++) {
		cout << arr[t] << " ";
	}

	// ����������� ��������������
	cout << "\n";
	cout << "��������������� ������:\n";

	for (a = 0; a < 10; a++) {
		for (b = 0; b < 9; b++) {
			if (arr[b + 1] < arr[b]) {
				t = arr[b + 1];
				arr[b + 1] = arr[b];
				arr[b] = t;
			}
		}
	}

	for (t = 0; t < 10; t++) {
		cout << arr[t] << " ";
	}
}
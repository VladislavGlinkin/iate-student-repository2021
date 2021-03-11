#include <iostream>

int GCD(int a, int b) {
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	if (a >= b)
		return GCD(a % b, b);
	if (a <= b)
		return GCD(a, b % a);
}

int main() {
	int a, b;

	std::cin >> a >> b;

	std::cout << GCD(a, b);
}
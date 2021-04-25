#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

const int LEFT = -1;
const int POINT = 0;
const int RIGHT = 1;

struct Point {
	int x;
	int type;
	int index;

	Point(const int x, const int type, const int index) :
		x(x), type(type), index(index)
	{}
};

int main() {
	int nRanges, nPoints;
	cin >> nRanges >> nPoints;

	vector<Point> Points;
	for (int i = 0; i < nRanges; i++) {
		int a, b;
		cin >> a >> b;
		Points.push_back(Point(min(a, b), LEFT, -1));
		Points.push_back(Point(max(a, b), RIGHT, -1));
	}

	vector<int> answer(nPoints);

	for (int i = 0; i < nPoints; i++) {
		int x;
		cin >> x;
		Points.push_back(Point(x, POINT, i));
	}
	sort(Points.begin(), Points.end(), [](const Point& left, const Point& right) {
		if (left.x != right.x) {
			return left.x < right.x;
		}
		else {
			return left.type < right.type;
		}
		});

	int count = 0;
	for (auto p : Points) {
		if (p.type == LEFT) {
			count++;
		}
		else if (p.type == RIGHT) {
			count--;
		}
		else if (p.type == POINT) {
			answer[p.index] = count;
		}
		else
			throw 1;
	}

	for (int i = 0; i < nPoints; i++) {
		if (i > 0) {
			printf(" ");
		}
		printf("%d", answer[i]);
	}
}
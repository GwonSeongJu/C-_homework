#include <iostream>

using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	void init(int x, int y) {
		xpos = x;
		ypos = y;
	}

	int GetX() {
		return xpos;
	}

	int GetY() {
		return ypos;
	}
	void ShowPonitInfo() const{
		cout << "[" << ypos << "," << xpos << "]" << endl;
	}
};

class Circle {
private:
	Point pos;
	double r_len;
public:
	void Init(int x, int y, int r) {
		pos.init(x, y);
		r_len = r;
	}

	int GetX() {
		return pos.GetX();
	}
	int GetY() {
		return pos.GetY();
	}

	double GetR() {
		return r_len;
	}
};

class Ring {
private:
	Circle c1;
	Circle c2;
public:
	void init(int x1, int y1, int r1, int x2, int y2, int r2) {
		c1.Init(x1, y1, r1);
		c2.Init(x2, y2, r2);
	}

	void ShowRingInfo() {
		std::cout << "1: " << endl << "[" << c1.GetX() << ", " << c1.GetY() << "," << c1.GetR() << "]" << endl;
		std::cout << "2: " << endl << "[" << c2.GetX() << ", " << c2.GetY() << "," << c2.GetR() << "]" << endl;
	}
};

void A04_2() {
	Ring ring;
	ring.init(1, 2, 3, 4, 5, 6);
	ring.ShowRingInfo();
}
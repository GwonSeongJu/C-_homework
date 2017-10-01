#include <iostream>


struct Point {
	int xpos;
	int ypos;
	
	Point(int x,int y) {
		this->xpos = x;
		this->ypos = y;
	}

	void MovePos(int x, int y) {
		this->xpos += x;
		this->ypos += y;
	}

	void AddPoint(const Point &pos) {
		this->xpos += pos.xpos;
		this->ypos += pos.ypos;
	}

	void showPosition() {
		std::cout << "x: " << this->xpos << "\ty: " << this->ypos << std::endl;
	}
};

void A03_1() {
	Point *a = new Point(2, 3);
	Point *b = new Point(3, 4);

	a->showPosition();
	a->AddPoint(*b);
	a->MovePos(3, 4);
}

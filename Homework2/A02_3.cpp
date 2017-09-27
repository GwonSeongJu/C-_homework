#include <iostream>
typedef struct __Point {
	int xpos;
	int ypos;
} Point ;

Point& PntAdder(const Point &p1, const Point &p2) {

	Point *result = new Point();
	result->xpos = p1.xpos + p2.xpos;
	result->ypos = p1.ypos + p2.ypos;
	return *result;
}

void A02_3() {
	Point *p1, *p2;
	p1 = new Point();
	p2 = new Point();

	p1->xpos = 10;
	p1->ypos = 20;
	p2->xpos = 30;
	p2->ypos = 40;

	Point &rP= PntAdder(*p1, *p2);

	std::cout << "x,y �� ��" << rP.xpos << ", " << rP.ypos << "�Դϴ� " << std::endl;
	std::cout << "1�� ��: p1�� �����ͱ⿡ ���� ������� �����ش�.\n2�� �� : �ش纯���� �ϴ� �����ͷ� ������ ���Ͻ� ������� �������ش�." << std::endl;

	delete(&rP);
	delete(p1);
	delete(p2);

}
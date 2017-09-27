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

	std::cout << "x,y 의 값" << rP.xpos << ", " << rP.ypos << "입니다 " << std::endl;
	std::cout << "1번 답: p1은 포인터기에 그의 결과값을 보내준다.\n2번 답 : 해당변수를 일단 포인터로 선언후 리턴시 결과값을 리턴해준다." << std::endl;

	delete(&rP);
	delete(p1);
	delete(p2);

}
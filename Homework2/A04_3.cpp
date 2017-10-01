#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	Point(int x, int y) {
		xpos = x;
		ypos = y;
	}


	int GetX() {
		return xpos;
	}

	int GetY() {
		return ypos;
	}
	void ShowPonitInfo() const {
		cout << "[" << ypos << "," << xpos << "]" << endl;
	}
};

class Circle {
private:
	Point pos;
	int r_len;
public:
	Circle(int x, int y, int r):pos(x,y) {
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
	Ring(int x1,int y1, int r1,int x2,int y2,int r2): c1(x1,y1,r1),c2(x2,y2,r2){}
	void ShowRingInfo() {
		std::cout << "1: " << endl << "[" << c1.GetX() << ", " << c1.GetY() << "," << c1.GetR() << "]" << endl;
		std::cout << "2: " << endl << "[" << c2.GetX() << ", " << c2.GetY() << "," << c2.GetR() << "]" << endl;
	}
};

void A04_3_1() {
	Ring ring(1, 2, 3, 4, 5, 6);
	ring.ShowRingInfo();
}

namespace a04_3 {
	enum {
		CLERK,SENIOR,ASSIST,MANAGER
	};
}

using namespace a04_3;

class nameCard {
private:
	char *Name;
	char *Company;
	char *Phone;
	int E_s;
public:
	nameCard(char *name, char *company, char *phone, int e_s) {
		E_s = e_s;
		Name = new char[strlen(name) + 1];
		Company = new char[strlen(company) + 1];
		Phone = new char[strlen(phone) + 1];
		strcpy(Name, name);
		strcpy(Company, company);
		strcpy(Phone, phone);
	}

	void show_data() {
		cout << "이름: " << Name << endl;
		cout << "회사: " << Company << endl;
		cout << "전화번호: " << Phone << endl;
		cout << "직급: ";
		switch (E_s) {
		case CLERK:
			std::cout << "사원" << endl;
			break;
		case SENIOR:
			std::cout << "주임" << endl;
			break;
		case ASSIST: 
			std::cout << "대리" << endl;
			break;
		case MANAGER:
			std::cout << "과장" << endl;
			break;
		default:
			break;
		}
	}
	~nameCard() {
		delete[] Name;
		delete[] Company;
		delete[] Phone;
	}

};
void A04_3_2() {
	nameCard manClerk("LEE", "ABCEng", "010-1111-2222", CLERK);
	nameCard manSenior("HONG", "OrangeEng", "010-3333-4444", SENIOR);
	nameCard manAssist("KIM", "soGoodComp", "010-5555-6666", ASSIST);

	manClerk.show_data();
	manSenior.show_data();
	manAssist.show_data();
}
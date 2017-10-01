#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

class Calculator {
private:
	int add_N;
	int sub_N;
	int mul_N;
	int div_N;

public:
	Calculator() {
		add_N = 0;
		sub_N = 0;
		mul_N = 0;
		div_N = 0;
	}
	double add(double a, double b) {
		this->add_N += 1;
		return a + b;
	}
	double sub(double a, double b) {
		this->sub_N += 1;
		return a - b;
	}
	double mul(double a, double b) {
		this->mul_N += 1;
		return a*b;
	}
	double div(double a, double b) {
		this->div_N += 1;
		return a / b;
	}

	void show_number(){
		std::cout << "ADD: " << this->add_N << "\tSUB: " << this->sub_N << "\nMUL: " << this->mul_N << "\tDIV: " << this->div_N;
	}

};

void A03_2_1() {
	Calculator *ca = new Calculator();
	std::cout << ca->add(1, 2);
	std::cout << ca->sub(3, 2);
	std::cout << ca->mul(1, 2);
	std::cout << ca->div(10, 2);
	ca->show_number();
}

class Printer {
private:
	char std[50];
public:
	void setString(char *_std) {
		strcpy(std, _std);
	}
	void showString() {
		std::cout << std << std::endl;
	}
};

void A03_2_2() {
	Printer *pr = new Printer();
	pr->setString("IDW다냐냐냐냐ㅑ");
	pr->showString();
}
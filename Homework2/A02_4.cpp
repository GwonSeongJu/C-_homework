#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include <cstring>	//q1

#include <ctime>	//q2
#include <cstdlib>

void A02_4_1() {
	char input_value[20];
	char input_value2[20];
	char value[40];
	std::cout << "�ƹ� ���ڿ��� 2�� �Է����ּ���" << std::endl;
	std::cin >> input_value;
	std::cin >> input_value2;

	if (strcmp(input_value, input_value2)) {
		std::cout << "�ΰ��� �����ϴ� " << std::endl;
	}
	else {
		std::cout << "�����ʽ��ϴ�" << std::endl;
	}

	std::cout << "�ΰ��� ��ġ��";
	strcpy(value, input_value);
	strcat(value, input_value2);
	std::cout << value << "�Դϴ� " << std::endl;

	if (strlen(value) % 2 == 1) {
		std::cout << "�׸��� Ȧ���� �Դϴ�" << std::endl;
	}
	else {
		std::cout << "¦���� �Դϴ� ." << std::endl;
	}
}

void A02_4_2() {
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 5; i++) {
		std::cout << rand() % 100 << std::endl;
	}
}


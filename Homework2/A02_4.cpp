#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include <cstring>	//q1

#include <ctime>	//q2
#include <cstdlib>

void A02_4_1() {
	char input_value[20];
	char input_value2[20];
	char value[40];
	std::cout << "아무 문자열을 2번 입력해주세요" << std::endl;
	std::cin >> input_value;
	std::cin >> input_value2;

	if (strcmp(input_value, input_value2)) {
		std::cout << "두개는 같습니다 " << std::endl;
	}
	else {
		std::cout << "같지않습니다" << std::endl;
	}

	std::cout << "두개를 합치면";
	strcpy(value, input_value);
	strcat(value, input_value2);
	std::cout << value << "입니다 " << std::endl;

	if (strlen(value) % 2 == 1) {
		std::cout << "그리고 홀수개 입니다" << std::endl;
	}
	else {
		std::cout << "짝수개 입니다 ." << std::endl;
	}
}

void A02_4_2() {
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 5; i++) {
		std::cout << rand() % 100 << std::endl;
	}
}


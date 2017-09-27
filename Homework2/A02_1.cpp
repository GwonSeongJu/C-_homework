#include "ManageWord.h"
#include <iostream>
using namespace std;
void upFunction(int& num) {	// A02_1_1 's function
	num++;
}

void changeFunction(int& num) {	//A02_1_1 's function
	num > 0 ? num = num : num = -num;
}


	void A02_1_1() {
		int tmp;

		cout << "아무 정수나 입력해주세요:  ";
		cin >> tmp;
		cout << "변경전: " << tmp << endl;
		upFunction(tmp);
		cout << "1up후:" << tmp << endl;
		changeFunction(tmp);
		cout << "부호체인지후: " << tmp << endl;

		
	}




	void A02_1_2() {
		cout << "왜냐하면 상수를 넘겨줬기 떄문이다.\t참조자는 변수를 참조하는것이지 상수를 참조하는것이 아니기 떄문이다\t상수를 참조할려면 const를 붙여야한다." << endl;
	}

	void A02_1_3() {
		
		cout << "void SwapPointer(int *a, int *b) {\n\tint tmp = *a;\n\t*a = *b;\n\t*b = tmp;\n}\n";

		
	}


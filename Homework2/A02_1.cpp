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

		cout << "�ƹ� ������ �Է����ּ���:  ";
		cin >> tmp;
		cout << "������: " << tmp << endl;
		upFunction(tmp);
		cout << "1up��:" << tmp << endl;
		changeFunction(tmp);
		cout << "��ȣü������: " << tmp << endl;

		
	}




	void A02_1_2() {
		cout << "�ֳ��ϸ� ����� �Ѱ���� �����̴�.\t�����ڴ� ������ �����ϴ°����� ����� �����ϴ°��� �ƴϱ� �����̴�\t����� �����ҷ��� const�� �ٿ����Ѵ�." << endl;
	}

	void A02_1_3() {
		
		cout << "void SwapPointer(int *a, int *b) {\n\tint tmp = *a;\n\t*a = *b;\n\t*b = tmp;\n}\n";

		
	}


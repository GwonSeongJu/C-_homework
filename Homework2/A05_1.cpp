#pragma warning(disable:4996)
#include <iostream>

namespace a04_3 {
	enum {
		CLERK, SENIOR, ASSIST, MANAGER
	};
}
using namespace std;
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
	nameCard(const nameCard &copy) {
		E_s = copy.E_s;
		Name = new char[strlen(copy.Name) + 1];
		Company = new char[strlen(copy.Company) + 1];
		Phone = new char[strlen(copy.Phone) + 1];
		strcpy(Name, copy.Name);
		strcpy(Company, copy.Company);
		strcpy(Phone, copy.Phone);
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

int main() {
	nameCard manClerk("LEE", "ABCEng", "010-1111-2222", CLERK);
	nameCard copy1 = manClerk;
	nameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", SENIOR);
	nameCard copy2 = manSENIOR;
	copy1.show_data();
	copy2.show_data();
	return 1;
}
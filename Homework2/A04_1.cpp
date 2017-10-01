#include <iostream>

using namespace std;

class FruitSeller {
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;
public:
	void InitMembers(const int price, const int num, const int money) {
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}

	int SaleApples(int &money) {
		if (money <= 0) {
			std::cout << "�̵����� ����ִ°� ����" << endl;
			return 0;
		}
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		if (numOfApples < 0) {
			std::cout << "�̾������� ��� �����ϱ��� " << endl;
			return 0;
		}
		myMoney += money;
		money = num * APPLE_PRICE;
		return num;
	}
	void ShowSaleResult() {
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl;
	}
};

class FruitBuyer {
	int myMoney;
	int numOfApples;
public:
	void InitMembers(const int money) {
		myMoney = money;
		numOfApples = 0;
	}
	void BuyApples(FruitSeller &seller, int money) {
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}

	void ShowBuyResult() {
		cout << "���� �ܾ�: " << myMoney << endl;
		cout << "��� ����: " << numOfApples << endl;
	}
};

void A04_1() {
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);

	FruitBuyer buyer;
	buyer.InitMembers(5000);

	buyer.BuyApples(seller, 2000);

	cout << "�Ǹ���" << endl;
	seller.ShowSaleResult();
	cout << "������" << endl;
	buyer.ShowBuyResult();
}
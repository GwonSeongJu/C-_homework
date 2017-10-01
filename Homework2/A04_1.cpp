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
			std::cout << "이돈으로 살수있는건 없음" << endl;
			return 0;
		}
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		if (numOfApples < 0) {
			std::cout << "미안하지만 재고가 부족하구먼 " << endl;
			return 0;
		}
		myMoney += money;
		money = num * APPLE_PRICE;
		return num;
	}
	void ShowSaleResult() {
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매 수익: " << myMoney << endl;
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
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 갯수: " << numOfApples << endl;
	}
};

void A04_1() {
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);

	FruitBuyer buyer;
	buyer.InitMembers(5000);

	buyer.BuyApples(seller, 2000);

	cout << "판매자" << endl;
	seller.ShowSaleResult();
	cout << "구매자" << endl;
	buyer.ShowBuyResult();
}
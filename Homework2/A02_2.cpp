#include <iostream>

using namespace std;
void A02_2() {
	const int num = 12;
	const int *num_p = &num;
	const int &num_r = *num_p;

	cout << "const int num = " << num << endl;
	cout << "const int *num_p = " << *(num_p) << endl;
	cout << "const int &num_r = " << num_r << endl;

}
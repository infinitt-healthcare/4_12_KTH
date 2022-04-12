#include <iostream>
using namespace std;

double divCalc(double a, double b) {
	return a / b;
}

int main() {
	double a, b;

	while (1) {
	cout << "정수 A와 B 입력 >>> ";
	cin >> a >> b;
	if (cin.fail()) {
		cout << "다시 입력해주세요" << endl;
		cin.clear();
		cin.ignore(1024, '\n');
		continue;
	}
	if (b == 0) {
		cout << "다시 입력해주세요" << endl;
		continue;
	}
	cout << "출력: " << divCalc(a,b)<< endl;
	break;
	}

	return 0;
}
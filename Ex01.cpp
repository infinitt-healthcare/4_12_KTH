#include <iostream>
using namespace std;

double divCalc(double a, double b) {
	return a / b;
}

int main() {
	double a, b;

	while (1) {
	cout << "���� A�� B �Է� >>> ";
	cin >> a >> b;
	if (cin.fail()) {
		cout << "�ٽ� �Է����ּ���" << endl;
		cin.clear();
		cin.ignore(1024, '\n');
		continue;
	}
	if (b == 0) {
		cout << "�ٽ� �Է����ּ���" << endl;
		continue;
	}
	cout << "���: " << divCalc(a,b)<< endl;
	break;
	}

	return 0;
}
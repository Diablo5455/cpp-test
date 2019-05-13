#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(0,"");
	int a;
	cout << "World" << endl;
	cout << "1 = +" << endl;
	cout << "2 = -" << endl;
	cout << "3 = *" << endl;
	cout << "4 = /" << endl;
	cin >> a;
	if ( a <= 1) {
	int b, c;
	cout << "num 1";
	cin >> b;
	cout << "num 2";
	cin >> c;
	int d = b + c;
	cout << "sum: " << d << endl;
	} else if ( a <= 2) {
	int b, c;
	cout << "num 1";
	cin >> b;
	cout << "num 2";
	cin >> c;
	int d = b - c;
	cout << "sum: " << d << endl;
	} else if ( a <= 3) {
	int b, c;
	cout << "num 1";
	cin >> b;
	cout << "num 2";
	cin >> c;
	int d = b * c;
	cout << "sum: " << d << endl;
	} else if ( a <= 4) {
	int b, c;
	cout << "num 1";
	cin >> b;
	cout << "num 2";
	cin >> c;
	int d = b + c;
	cout << "sum: " << d << endl;
	} {
	setlocale (0, "");
	double d;
	int f = d / 2;
	if (d < 2){
	cout << "yes" << endl;
	} else {
	cout << "no" << endl;
	}
	}
	return 0;
}

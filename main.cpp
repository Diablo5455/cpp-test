#include <iostream>
#include <cstdlib>
#include <string>

int add(int a, int b) {
	return a + b;
}

int minus(int a, int b) {
	return a - b;
}

int multiply(int a, int b) {
	return a * b;
}

int divide(int a, int b) {
	return a / b;
}

int read_num() {
	int num;
	std::cout << "Input number: ";
	std::cin >> num;
	return num;
}

int op_minus() {

	int b, c;
	b = read_num();
	c = read_num();
	int d = minus(b, c);
	std::cout << "sum: " << d << std::endl;
	return d;
}

int op_add() {
	int b, c;
	b = read_num();
	c = read_num();
	int d = add(b, c);
	std::cout << "Result: " << d << std::endl;
	return d;
}

int op_multiply() {

	int b, c;
	b = read_num();
	c = read_num();
	int d = multiply(b, c);
	std::cout << "sum: " << d << std::endl;
	return d;
}


int op_divide() {

	int b, c;
	b = read_num();
	c = read_num();
	int d = divide(b, c);
	std::cout << "sum: " << d << std::endl;
	return d;
}



int main()
{
	setlocale(0,"");
	int a;
	std::cout << "World" << std::endl;
	std::cout << "1 = +" << std::endl;
	std::cout << "2 = -" << std::endl;
	std::cout << "3 = *" << std::endl;
	std::cout << "4 = /" << std::endl;
	std::cin >> a;
	if ( a <= 1) {
		op_add();
	} else if ( a <= 2) {
		op_minus();
	} else if ( a <= 3) {
		op_multiply();
	} else if ( a <= 4) {
		op_divide();
	} {
	setlocale (0, "");
	double d;
	int f = d / 2;
	if (d < 2){
	std::cout << "yes" << std::endl;
	} else {
	std::cout << "no" << std::endl;
	}
	}
	return 0;
}

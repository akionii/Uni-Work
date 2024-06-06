#include<iostream>

using namespace std;

int main() {
	//int algo = 10;
	//int& ref = algo;
	//
	//cout << algo << endl;
	//cout << ref << endl;
	//
	//ref = 700;
	//
	//cout << algo << endl;
	//cout << ref << endl;
	//
	//return 0;
	
	int algo = 3;
	int *p = &algo;
	
	cout << algo << endl;
	cout << &algo << endl;
	cout << p << endl;
	cout << *p << endl;
	
	return 0;
}
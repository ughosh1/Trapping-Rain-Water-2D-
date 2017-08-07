#include<iostream>
using namespace std;

int findArea(int [], int);

void test1() {
		int arr[] = { 8,0,5,0,0,7,0,0,2,0,5,0,1,0,7,0 };
	int a = findArea(arr, 16);
	cout << "\nTest 1 : ";
	if (a == 71)
		cout << " Passed.." << endl;
	else
		cout << " Failed.." << endl;
}

void test2() {
	int arr[] = { 0,0,4,0,6,0,2,0,0,0,9,0,0,3,0,7,0,0,1,4 };
	int a = findArea(arr, 20);
	cout << "\nTest 2 : ";
	if (a == 68)
		cout << "  Passed.." << endl;
	else
		cout << "  Failed.." << endl;
}

void test3() {
	int arr[] = { 0,0,0,0,0,0,0,0,0,0,9,0,0,0,0,0,0,0,0,0 };
	int a = findArea(arr, 20);
	cout << "\nTest3 : ";
	if (a == 0)
		cout << "  Passed.." << endl;
	else
		cout << "  Failed.." << endl;
}

void test4() {
	int arr[] = { 0,0,2,4,5,7,9,10,13,16,18,15,12,9,8,5,2,0,0,0 };
	int a = findArea(arr, 20);
	cout << "\nTest4 : ";
	if (a == 0)
		cout << "  Passed.." << endl;
	else
		cout << "  Failed.." << endl;
}

void test() {
	test1();
	test2();
	test3();
	test4();
}

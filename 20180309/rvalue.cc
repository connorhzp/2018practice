 ///
 /// @file    rvalue.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-03-09 22:47:00
 ///
 
#include <iostream>
using std::cout;
using std::endl;



int main() {
	constexpr int a = 1;

	cout << "&a :" << &a << endl;;
	cout << "&a :" << &a << endl;;
	cout << "&a :" << &a << endl;;
	cout << "&a :" << &a << endl;;
	cout << "&a :" << &a << endl;;
	cout << "&a :" << &a << endl;;
	cout << "&a :" << &a << endl;;
	cout << "&a :" << &a << endl;;
	cout << "&a :" << &a << endl;;
	
	const int b = a;
	cout << "&b: " << &b << endl;
	cout << "&b: " << &b << endl;
	cout << "&b: " << &b << endl;
	cout << "&b: " << &b << endl;
	cout << "&b: " << &b << endl;
	cout << "&b: " << &b << endl;
	cout << "&b: " << &b << endl;
	cout << "&b: " << &b << endl;
	cout << "&b: " << &b << endl;
	cout << "&b: " << &b << endl;
}

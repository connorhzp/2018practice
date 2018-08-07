 ///
 /// @file    rvalue2.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-03-09 23:43:02
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int main() {
	int&& a = 1;

	cout << "&a:" << &a << endl;
	cout << "&a:" << &a << endl;
	cout << "&a:" << &a << endl;
	cout << "&a:" << &a << endl;
	cout << "&a:" << &a << endl;
	cout << "&a:" << &a << endl;
	cout << "&a:" << &a << endl;
	cout << "&a:" << &a << endl;
	cout << "&a:" << &a << endl;
	cout << "&a:" << &a << endl;
}

 ///
 /// @file    rvalue3.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-03-09 23:50:19
 ///
 
#define a 1;
#include <iostream>
using std::cout;
using std::endl;


const int b = 2;


int main() {

	cout << "&a:" << &a << endl;
	cout << "&a:" << &1 << endl;
	cout << "&b:" << &b << endl;


}





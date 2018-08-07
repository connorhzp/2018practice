 ///
 /// @file    main.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-03-02 21:35:00
 ///

#include "MyString.h"
#include <iostream>
using std::cout;
using std::endl;

int main() {
	String s;
	String s1("hello");
	cout << "s1.refcount():" << s1.refcount() << endl;
	String s2(s1);
	cout << "s1.refcount():" << s1.refcount() << endl;
	s =s2;
	cout << "s1.refcount():" << s1.refcount() << endl;
	cout << "s:" << s << endl;
	cout << "s1:" << s1 << endl;
	cout << "s2:" << s2 << endl;
	cout << "s[1]:" << s[1] << endl;
	cout << "s.refcount():" << s.refcount() << endl;
	s[1] = 'H';
	cout << "s[1]:" << s[1] << endl;
	cout << "s:" << s << endl;
	cout << "s.refcount():" << s.refcount() << endl;
}

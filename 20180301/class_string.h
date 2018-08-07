 ///
 /// @file    class_string.h
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-03-01 22:45:08
 ///

#ifndef __hzp_class_string_h__
#define __hzp_class_string_h__

#include <iostream>
using std::cout;
using std::endl;

class String{
public:
	String();
	String(const char* rhs);
	String(const String& rhs);
	String& operator=(const String& rhs);
	~String();

	void print()const; 
private:
	char* _pstr;
};












#endif

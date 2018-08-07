 ///
 /// @file    pchar.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-02-23 17:05:59
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int main(){

	const char& ch    ='a';


	(char*)&& p2 []= &"hehe";

	const (char*)& p3 []= "hello"；


	
	return 0;
}

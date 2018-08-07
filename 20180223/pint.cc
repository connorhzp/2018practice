 ///
 /// @file    p.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-02-22 21:52:55
 ///
#include <stdio.h> 
#include <iostream>
using std::cout;
using std::endl;

int func(){
	const int ifunc= 12;
	printf("ifunc:%p\n",&ifunc);

	return 9;
}

int main(){

	int i=10;
	const int iconst =11;
	
	func();
	printf("i:%p\n",&i);
	printf("iconst:%p\n",&iconst);
//	printf("func:%p\n",&func());
	char* charp=&"hello";
	printf("hello:%p\n", charp);




	return 0;
}

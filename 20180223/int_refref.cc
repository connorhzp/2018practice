 ///
 /// @file    const_string2.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-02-23 12:05:39
 ///
 
#include <iostream>
using std::cout;
using std::endl;


int main(){
	/*
	int* p1= &3;
	cout<<&4<<endl;
	printf("&5:  %p",&5);
*/

	int i=10;
	const int & p2= 5;
	const int & p3= i;
	int && p4= 5;
//	int && p5= i;
	i=11;
//	p3=12;


	cout<<i<<endl;
	cout<<p3<<endl;

	return 0;
}

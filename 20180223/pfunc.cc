 ///
 /// @file    const_string.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-02-23 08:58:27
 ///
#include<stdio.h> 
#include <iostream>
using std::cout;
using std::endl;

	void func(int a,int b){}
int main(){


	func(2,3)	;


(	&func)(2,3);
(	*func)(2,3);

(	**func)(2,3);


(	**************************************func)(2,3);
(	&func)(2,3);
	void (*pfunc)(int,int)=func;
(	pfunc)(2,3);


//(	&pfunc)(2,3);
	

	return 0;
}

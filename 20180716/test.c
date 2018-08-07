 ///
 /// @file    test.c
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-16 11:59:53
 ///
 
#include <stdio.h>

int main() {

	struct {
		int a;
		char b;
	} a;

	a.a = 1;
	a.b = 'a';

	printf("%d%c\n", a.a, a.b);



	return 0;
}

 ///
 /// @file    main.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-08 18:48:23
 ///
 
#include "func.h"

#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;



int main() {
	pStu plisthead = NULL, plisttail = NULL;

	int num;
	while(scanf("%d", &num) != -1) {
		list_sort_insert(&plisthead, &plisttail, num);
	}


	list_print(plisthead);

	return 0;
}

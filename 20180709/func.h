 ///
 /// @file    func.h
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-09 10:54:35
 ///
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100000000
#define SWAP(a,b) {int tmp; tmp = a; a = b; b = tmp;}
void print(int*);

void arr_bubble(int*);
void arr_select(int*);
void arr_insert(int*);
void arr_quick(int*, int, int);
void arr_heap(int*);
int compare(const void*, const void*);

 ///
 /// @file    func.h
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-08 14:13:31
 ///

#include <stdlib.h>
typedef struct student {
	int num;
	float score;
	struct student* pnext;
} Stu, *pStu;

void list_head_insert(pStu* pphead, pStu* pptail, int i);
void list_tail_insert(pStu* pphead, pStu* pptail, int i);
void list_sort_insert(pStu* pphead, pStu* pptail, int i);
void list_delete(pStu* pphead, pStu* pptail, int i);
void list_modify(pStu phead, int i, float score);
void list_print(pStu phead);

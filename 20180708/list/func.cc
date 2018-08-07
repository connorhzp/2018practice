 ///
 /// @file    func.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-08 14:13:39
 ///
 
#include "func.h"
#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;



void list_head_insert(pStu* pphead, pStu* pptail, int i) {

	pStu pnew = (pStu)calloc(1, sizeof(Stu));
	pnew->num = i;

	if(*pphead == NULL) {
		*pphead = *pptail = pnew;
		return;
	}
	pnew->pnext = *pphead;
	*pphead = pnew;
}

void list_tail_insert(pStu* pphead, pStu* pptail, int i) {
	pStu pnew = (pStu)calloc(1, sizeof(Stu));
	pnew->num = i;

	if(*pphead == NULL) {
		*pphead = *pptail = pnew;
		return;
	}

	(*pptail)->pnext = pnew;
	*pptail = pnew;
}


void list_sort_insert(pStu* pphead, pStu* pptail, int i) {
	pStu pnew = (pStu)calloc(1, sizeof(Stu));
	pnew->num = i;

	if(*pphead == NULL) {
		*pphead = *pptail = pnew;
		return;
	}
	for(pStu pcur = *pphead, ppre = *pphead; pcur; ppre = pcur, pcur = pcur->pnext) {
		if(pcur->num >= pnew->num) {
			if(pcur == ppre) {
				pnew->pnext = pcur;
				*pphead = pnew;
				return;
			}
			pnew->pnext = pcur;
			ppre->pnext = pnew;
			return;
		}
	}
	(*pptail)->pnext = pnew;
	*pptail = pnew;
}

void list_delete(pStu* pphead, pStu* pptail, int i) {
	pStu pcur = *pphead, ppre = *pphead;
	if(pcur == NULL) {
		printf("list is empty\n");
		return;
	}
	if(pcur->num == i) {
		free(pcur);
		*pphead = *pptail = NULL;
		return;
	}
	while(pcur) {
		if(pcur->num == i) {
	//		if(pcur == *pptail)
	//			ppre->pnext = NULL, *pptail = ppre, free(pcur);
			ppre->pnext = pcur->pnext;
			free(pcur);
			break;
		}
		ppre = pcur;
		pcur = pcur->pnext;
	}
	if(pcur == *pptail)
		*pptail = ppre;

	return;
}

void list_modify(pStu phead, int i, float score) {

	while(phead) {
		if(phead->num == i) {
			phead->score = score;
			break;
		}
		phead = phead->pnext;
	}
	if(phead == NULL) 
		printf("%d not found in list\n", i);
}

void list_print(pStu phead) {
	while(phead) {
		printf("num:%d, score:%f\n", phead->num, phead->score);
		phead = phead->pnext;
	}

}
			



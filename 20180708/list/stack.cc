 ///
 /// @file    main.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-07-08 09:44:33
 ///
 

#include <strings.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;

typedef struct tag{
	int val;
	struct tag* pNext;
}Node, *pNode;

typedef struct{
	pNode phead;
	int size;
}Stack, *pStack;



void push (pStack pstack, int val) {
	pNode pnew = (pNode)calloc(1,sizeof(Node));
	pnew->val = val;
	if(NULL == pstack->phead) {
		pstack->phead = pnew;
	} else {
		pnew->pNext = pstack->phead;
		pstack->phead = pnew;
	}
	pstack->size++;

}


void pop(pStack p) {
	pNode pcur;
	if(NULL == p->phead) {
		printf("stack is empty\n");
		return;
	}
	pcur = p->phead;
	p->phead = pcur->pNext;
	--p->size;
	free(pcur);
	pcur = NULL;
}

int size(pStack p) {
	return p->size;
}

int main() {
	Stack s;
	int i = 0;

	bzero(&s, sizeof(s));
	while(scanf("%d", &i) != -1) {
		push(&s, i);
	}

	pop(&s);
	printf("stack_size = %d\n", size(&s));


	return 0;
}

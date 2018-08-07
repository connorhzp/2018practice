 ///
 /// @file    list.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-05-21 11:05:44
 ///
 
#include <iostream>
#include <assert.h>
using std::cout;
using std::endl;

class List {

	typedef	struct _Node {
			struct _Node* pHead;
			int data;
			struct _Node* pTail;

			_Node()
			:pHead(NULL)
			,data(0)
			,pTail(NULL) {
			}

			} Node, *pNode;

	List()
	:pListHead(NULL)
	,pListTail(NULL) {
	}
	
	~List() {
		if(pListHead == NULL) {
		}
		else {
			while(pListHead != NULL) {
			pNode temp_pNode = pListHead->pTail;
				delete pListHead;
				pListHead = temp_pNode;
			}
			pListTail = NULL;
				
		}

	}
	
	void insertNodeInTail(const int& rhs);
	void deleteNode(const  rhs);



private:
	pNode pListHead;
	pNode pListTail;
};




void List::insertNodeInTail(const int& rhs) {

	pNode temp_pNode = new Node(rhs);
	if(pListHead == NULL) {
		pListHead = temp_pNode;
		pListTail = temp_pNode;
		return;
	}	
	pListTail = temp_pNode;





}

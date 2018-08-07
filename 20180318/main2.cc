 ///
 /// @file    main.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-03-19 00:11:41
 ///

#include "MutexLock.h"
#include "Condition.h"

#include <iostream>
using std::cout;
using std::endl;
	

MutexLock mutex;
Condition condition;
bool flag = false;
int number = 0;

void* threadfunc1(void* arg) {
	int cnt = 10;
	while(cnt--) {
		MutexLockRef mutexRef(mutex);

		if(!flag) {
			mutex.unlock();
			mutex.lock();

		}

		++number;
		cout << "threadfunc1: number = " << number << endl;
		
		flag = !flag;
	}
	return NULL;
}






void* threadfunc2(void* arg) {
	int cnt = 10;
	while(cnt--) {
		MutexLockRef mutexRef(mutex);

		if(flag) {
			mutex.unlock();
			mutex.lock();
		}


		++number;
		cout << "threadfunc2: number = " << number << endl;
		
		flag = !flag;
	}
	return NULL;
}





int main() {
	pthread_t pth1;
	pthread_t pth2;

	pthread_create(&pth1, NULL, threadfunc1, NULL);
	pthread_create(&pth2, NULL, threadfunc2, NULL);

	pthread_join(pth1, NULL);
	pthread_join(pth2, NULL);

	return 0;
}

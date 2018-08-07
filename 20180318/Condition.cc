 ///
 /// @file    Condition.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-03-18 23:57:10
 ///
 


#include "Condition.h"

#include "MutexLock.h"

Condition::Condition() {
	pthread_cond_init(&_cond, NULL);
}

Condition::~Condition() {
	pthread_cond_destroy(&_cond);
}

void Condition::wait(MutexLock& mutex) {
	pthread_cond_wait(&_cond, mutex.getMutexLockPtr());
}

void Condition::notify() {
	pthread_cond_signal(&_cond);
}

void Condition::notifyall() {
	pthread_cond_broadcast(&_cond);
}

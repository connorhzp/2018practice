 ///
 /// @file    MutexLock.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-03-18 20:50:34
 ///

#include "MutexLock.h"



MutexLock::MutexLock()
: _isLocking(false) {
	pthread_mutex_init(&_mutex,NULL);
}

MutexLock::~MutexLock() {
	pthread_mutex_destroy(&_mutex);
}

pthread_mutex_t* MutexLock::getMutexLockPtr() {
	return &_mutex;
}

void MutexLock::lock() {
	pthread_mutex_lock(&_mutex);
	_isLocking = true;
}

void MutexLock::unlock() {
	pthread_mutex_unlock(&_mutex);
	_isLocking = false;
}

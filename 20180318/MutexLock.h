 ///
 /// @file    MutexLock.h
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-03-18 20:01:24
 ///

#ifndef __HZP_MUTEXLOCK_H__
#define __HZP_MUTEXLOCK_H__

#include <pthread.h>
class MutexLock 
{
public:
	MutexLock();
	~MutexLock();

	MutexLock(const MutexLock&) = delete;
	MutexLock& operator=(const MutexLock&) = delete;

	
	pthread_mutex_t* getMutexLockPtr();
	void lock();
	void unlock();

private:
	pthread_mutex_t _mutex;
	bool _isLocking;
};


#endif


class MutexLockRef
{
public:
	MutexLockRef(MutexLock& mutex)
	: _mutex(mutex)
	{
		_mutex.lock();
	}
	~MutexLockRef()
	{
		_mutex.unlock();
	}

private:
	MutexLock& _mutex;

};

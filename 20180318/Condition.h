 ///
 /// @file    Condition.h
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-03-18 21:05:48
 ///
 
#ifndef __HZP_CONDITION_H__
#define __HZP_CONDITION_H__


#include <pthread.h>

class MutexLock;

class Condition {
public:
	Condition();
	~Condition();

	void wait(MutexLock& mutex);
	void notify();
	void notifyall();
private:
	pthread_cond_t _cond;
};




#endif

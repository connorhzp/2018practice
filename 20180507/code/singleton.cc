 ///
 /// @file    singleton.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-05-07 19:30:17
 ///
 
#include <iostream>
using std::cout;
using std::endl;


class Singleton {

public:
	class AutoRelease {
	public:
		AutoRelease(){};
		~AutoRelease() {
			if(_pInstance)
				delete _pInstance;
		}

	};


	static Singleton* getInstance() {
		if (NULL == _pInstance)
			_pInstance = new Singleton;
		return _pInstance;
	}
	static void destroy() {
		if (NULL == _pInstance)
			return;
		delete _pInstance;
	}
private:
	Singleton(){};
	~Singleton(){};
	
	static Singleton* _pInstance;
	static AutoRelease _auto;
};

Singleton::_
int main() {
	Singleton singleton;

}


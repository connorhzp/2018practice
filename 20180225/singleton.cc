 ///
 /// @file    singleton.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-02-25 22:46:36
 ///
 
#include <iostream>
using std::cout;
using std::endl;


class Singleton{
public:
	static Singleton* getInstance(){
		if(NULL== _pInstance){
			_pInstance= new Singleton;
		}
		return _pInstance;
	}
	static void deleteInstance(){
		delete _pInstance;
	}
private:
	Singleton(){}
	static Singleton* _pInstance;
};

Singleton* Singleton::_pInstance= NULL;


int main(){
	Singleton* p1=Singleton::getInstance();
	Singleton* p2=Singleton::getInstance();
	Singleton* p3=Singleton::getInstance();
	
	cout<<p1<<endl;
	cout<<p2<<endl;
	cout<<p3<<endl;
	
	Singleton::deleteInstance();
}

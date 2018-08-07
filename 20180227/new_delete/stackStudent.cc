 ///
 /// @file    student.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-02-27 17:01:00
 ///

#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

class Student{
public:
	Student(const char* name,int id)
	:_name(new char[strlen(name)+1]())
	,_id(id){
		strcpy(_name,name);
	}
	void* operator new(size_t size){
		return malloc(size);
	}
	void print(){
		cout<<_name<<":"<<_id<<endl;
	}
	void operator delete(void* p){
		free(p);
	}
private:

	~Student(){
		delete[] _name;
	}
private:
	char* _name;
	int _id;
};

int main(){
//	Student s("hzp",1314);
//	s.print();
	Student* pStudent= new Student("hzp2",6789);
	pStudent->print();
}



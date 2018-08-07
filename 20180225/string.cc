 ///
 /// @file    string.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-02-25 21:08:27
 ///
 
#include <iostream>
#include <string.h>
using std::cout;
using std::endl;




class String{
	public:
		String(const char* );
		String(const String&);
		String& operator=(const String&);

		void print(){
			cout<<_pString<<endl;
		}


		~String(){
			delete _pString;
		}
	private:
		char* _pString;
};


String::String(const char* pString)
:_pString(new char[strlen(pString)+1]){
	strcpy(_pString,pString);
}
String::String(const String& string)
:_pString(new char[strlen(string._pString)+1]){
	strcpy(_pString,string._pString);
}

String& String::operator=(const String& string){
	if(this!= &string){
		delete[] _pString;
		_pString= new char[strlen(string._pString)+1];
		strcpy(_pString,string._pString);
	}
	return *this;
}


int main(){


	String s("hello");
	s.print();
	String s2(s);
	s2.print();
	s=s;
	s.print();
	s=s2;
	s.print();
	
	return 0;
}	

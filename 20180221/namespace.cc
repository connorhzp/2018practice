 ///
 /// @file    namespace.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-02-21 12:12:54
 ///
 
#include <iostream>
using std::cout;
using std::endl;



	namespace a{
	
		void func(){
			cout<<"lalala"<<endl;
		}
	
	}

	using a::func ; 
	

extern "C"  {

 int i=1;

 double b= double(i);


}

int main(){


	func();
	
	cout<<"double b from int i=1 :"<<b<<endl;

	return 0;
}




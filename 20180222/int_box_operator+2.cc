 ///
 /// @file    int_box_operator+.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-02-21 23:34:00
 ///
 
#include <iostream>
using std::cout;
using std::endl;


class Box{

	public:


		Box(int length,int width):
			_length(length),_width(width){
			
			
			}
	
		Box operator+(Box* this2){
		
	
			int l=_length+this2->_length;
			int w=_width+this2->_width;

			Box box(l,w);

			return box;


		}

		int getLength(){
		
		return _length;
		}


		int getWidth(){
		
		return _width;
		}

	private:

	int _length;
	int _width;


};




int main(){



	
	Box box(2,3);
	Box box2(4,4);

	cout<<"box+box2="<<"("<<(box+&box2).getLength()<<","<<(box+&box2).getWidth()<<")";

	cout<<endl;





return 0;
}

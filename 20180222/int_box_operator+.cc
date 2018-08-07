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
	
		Box operator+(int n){
		
	
			int l=_length+n;
			int w=_width+n;

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

	cout<<"box+3="<<"("<<(box+3).getLength()<<","<<(box+3).getWidth()<<")";

	cout<<endl;


	int operator+(int,Box&);

	
	

return 0;
}

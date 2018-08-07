 ///
 /// @file    derived.cc
 /// @author  hzp(haozhipeng2018@163.com)
 /// @date    2018-03-14 19:04:26
 ///
 
#include <iostream>
using std::cout;
using std::endl;


class Base {

public:
	Base& operator=(const Base& rhs) {
		cout << "Base::operator=" << endl;
		_b = rhs._b;
		return *this;
	}
	int _b;
};

class Derived
: public Base {

public:
Derived(int d) 
:_d(d)
{
}
Derived& operator=(const Derived& rhs) {
	cout << "Derived::operator=" << endl;
	_d = rhs._d;
	return *this;
}
int _d;

};


int main() {
	Derived d(1);
	
	Derived d2(2);
	d2 = d;

	cout << d._b << d2._b << endl;
	cout << d._d << d2._d << endl;


}

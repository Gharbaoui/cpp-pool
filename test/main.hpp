#include <iostream>

class Box{
	public:
		Box() : _h(0), _l(0), _b(0) {}
		Box(int h, int b, int l) : _h(h), _l(l), _b(b) {}
		int	area(){
			return _l * _b * _h;
		}
	private:
		int _l;
		int _b;
		int _h;

};

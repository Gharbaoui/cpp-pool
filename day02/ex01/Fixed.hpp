#include <iostream>
#include <cmath>

class Fixed {
    public:
        Fixed();
        Fixed(const int);
        Fixed(const float);
        Fixed(const Fixed &cp);
        ~Fixed();
        Fixed   &operator=(const Fixed &);
        int getRawBits() const;
        void setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
    private:
        int integer;
        static const int fractionalBits = 8;
};

std::ostream	&operator<< (std::ostream &ost, const Fixed &obj);

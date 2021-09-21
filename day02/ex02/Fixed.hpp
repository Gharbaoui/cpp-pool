#include <iostream>
#include <cmath>

class Fixed {
    public:
        Fixed();
        Fixed(int const );
        Fixed(float const );
        Fixed(Fixed const &cp);
        ~Fixed();
        Fixed   &operator=(Fixed const &);
		
		bool	operator<(Fixed const &);
		bool	operator<=(Fixed const &);
		
		bool	operator>(Fixed const &);
		bool	operator>=(Fixed const &);
		
		bool	operator==(Fixed const &);
		bool	operator!=(Fixed const &);
		
		Fixed	operator*(Fixed const &);
		Fixed	operator/(Fixed const &);
		
		Fixed	operator+(Fixed const &);
		Fixed	operator-(Fixed const &);

        Fixed	operator++(); // pre increment
		Fixed	operator++(int n); // post increment

        Fixed	operator--(); // pre decrement
		Fixed	operator--(int n); // post decrement
		int getRawBits() const;
        void setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static	Fixed &min(Fixed &f1, Fixed &f2);
		static	Fixed &max(Fixed &f1, Fixed &f2);

		static	Fixed	const	&min(Fixed const &f1, Fixed const &f2);
		static	Fixed	const	&max(Fixed const &f1, Fixed const &f2);
    private:
        int integer;
        static const int fractionalBits = 8;
};

std::ostream	&operator<< (std::ostream &ost, Fixed const &obj);

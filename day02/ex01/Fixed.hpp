#include <iostream>

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
    private:
        int integer;
        static const int fractionalBits = 8;
};

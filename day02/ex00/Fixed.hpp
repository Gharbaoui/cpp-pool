#include <iostream>

class Fixed {
    public:
        Fixed();
        Fixed(const Fixed &cp);
        ~Fixed();
        Fixed   &operator=(const Fixed &);
        int getRawBits() const;
        void setRawBits( int const raw );
    private:
        int integer;
        static const int fractional = 8;
};

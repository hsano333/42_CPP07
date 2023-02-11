
#include "whatever.hpp"
#include <iostream>


int main( void ) {

    //int a = 2;
    //int b = 3;
    int a = INT_MAX;
    int b = INT_MAX + 1u;
    //float a = 2.3f;
    //float b = -3.5f;
    //double a = 10.234;
    //double b = 10.235;

    ::swap( a, b );
    //::swap( &a, &b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    return 0;

}


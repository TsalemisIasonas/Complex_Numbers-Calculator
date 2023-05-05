#include <iostream>
#include "complex.cpp"

int main()
{
    Complex z(2, 3);
    Complex z1(1, 2);

    std::cout << z1.toPolar().toCartesian();

    z1 = z1.add(z).mul(z);
    z = z.div(z1);
    
    std::cout << z << std::endl;
    std::cout << z.con();
    std::cout << z.norm();
}
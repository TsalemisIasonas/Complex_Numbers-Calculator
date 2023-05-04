#include <iostream>
#include <cmath>
#ifndef CONTEST
#include "complex.hpp"
#endif

Complex::Complex(int re, int im):re(re), im(im){}

Complex Complex::add(const Complex z){
    return Complex(re + z.re, im + z.im);
}

Complex Complex::sub(const Complex z){
    return Complex(re - z.re, im - z.im);
}

Complex Complex::mul(const Complex z){
    return Complex(re * z.re - im * z.im, re * z.im + re * z.im);
}

Complex Complex::div(const Complex z){
    return Complex((re * z.re + im * z.im) / (re * z.re - im * z.im),
                        (im * z.re - re * z.im) / (re * z.re - im * z.im));
}

int Complex::norm(){
    return sqrt(re * re + im * im);
}

std::ostream &operator << (std::ostream &out, const Complex &z){
    out << z.re << " + i" << z.im << std::endl;
    return out;
}

int main() {
    Complex z(2,3);
    Complex z1(1,1);

    z = z.add(z1);
    std::cout << z;
    std::cout << z.norm();

}
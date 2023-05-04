#include <iostream>
#ifndef CONTEST
#include "complex.hpp"
#endif

Complex::Complex(int re, int im):re(re), im(im){}

Complex Complex::add(const Complex za, const Complex zb){
    return Complex(za.re + zb.re, za.im + zb.im);
}

Complex Complex::sub(const Complex za, const Complex zb){
    return Complex(za.re - zb.re, za.im - zb.im);
}

Complex Complex::mul(const Complex za, const Complex zb){
    return Complex(za.re * zb.re - za.im * zb.im, za.re * zb.im + zb.re * za.im);
}

Complex Complex::div(const Complex za, const Complex zb){
    return Complex((za.re * zb.re + za.im * zb.im) / (zb.re * zb.re - zb.im * zb.im),
                        (za.im * zb.re - za.re * zb.im) / (zb.re * zb.re - zb.im * zb.im));
}

int Complex::norm(const Complex z){
    return sqrt(z.re * z.re + z.im * z.im);
}
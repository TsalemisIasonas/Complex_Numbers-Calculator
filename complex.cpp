#include <iostream>
#include <cmath>
#ifndef CONTEST
#include "complex.hpp"
#endif

Complex::Complex(double re, double im):re(re), im(im){}

Complex Complex::add(const Complex z){
    return Complex(re + z.re, im + z.im);
}

Complex Complex::sub(const Complex z){
    return Complex(re - z.re, im - z.im);
}

Complex Complex::mul(const Complex z){
    return Complex(re * z.re - im * z.im, re * z.im + im * z.re);
}

Complex Complex::div(const Complex z) {
    double denominator = z.re * z.re + z.im * z.im;
    double re_nominator = re * z.re + im * z.im;
    double im_nominator = im * z.re - re * z.im;

    if (denominator == 0) {
        throw std::invalid_argument("Division by zero");
    }
    return Complex(re_nominator/(denominator),
                   im_nominator /(denominator));
}

Complex::PolarComplex Complex::toPolar(){
    return PolarComplex(*this);
}

Complex Complex::con(){
    return Complex(re, -im);
}


double Complex::norm() const{
    return sqrt(re * re + im * im);
}

Complex::PolarComplex::PolarComplex(Complex z){
    polar_norm = z.norm();
    polar_phase = atan(z.im/z.re);

}

Complex Complex::PolarComplex::toCartesian(){
    return Complex(polar_norm * cos(polar_phase),
                    polar_norm * sin(polar_phase));
}

std::ostream &operator << (std::ostream &out, const Complex::PolarComplex &pz){
    out << pz.polar_norm << "<" << pz.polar_phase <<"\n"; 
    return out;
}

std::ostream &operator << (std::ostream &out, const Complex &z) {
    if (z.im < 0) {
        out << z.re << " - " << -z.im << "i\n";
    }
    else if (z.im == 0){
        out << z.re << "\n";
    }
    else if (z.im == 1){
        out << z.re << " + i\n"; 
    }
    else {
        out << z.re << " + " << z.im << "i\n";
    }
    return out;
}

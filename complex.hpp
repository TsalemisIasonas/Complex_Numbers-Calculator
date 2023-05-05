#pragma once

class Complex {
    public:
        class PolarComplex{
            public:
                PolarComplex(Complex z);
                friend std::ostream &operator << (std::ostream &out, const PolarComplex &pz);   // print in polar form
                Complex toCartesian();  // convert from polar to cartesian form
            
                double polar_norm;
                double polar_phase;

        };
        Complex(double re, double im);
 
        Complex add(const Complex z);   // add two cartesian complex numbers
        Complex sub(const Complex z);   // subtract
        Complex mul(const Complex z);   // multiply
        Complex div(const Complex z);   // divide
        PolarComplex toPolar();         // convert a cartesian complex number to polar form
        Complex con();                  // caclulate the conjugate of a complex number
        double norm() const;            // calculate the norm of a complex number

        friend std::ostream &operator << (std::ostream &out, const Complex &z); // print a Complex object

    private:
        double re;
        double im;

};
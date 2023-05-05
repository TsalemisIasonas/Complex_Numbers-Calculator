#pragma once

class Complex {

    public:
        Complex(double re, double im);
 
        Complex add(const Complex z);
        Complex sub(const Complex z);
        Complex mul(const Complex z);
        Complex div(const Complex z);
        Complex toPolar(const Complex z);
        Complex toCartesian(const Complex z);
        Complex con();
        int norm();

        friend std::ostream &operator << (std::ostream &out, const Complex &z);

    private:
        double re;
        double im;

};
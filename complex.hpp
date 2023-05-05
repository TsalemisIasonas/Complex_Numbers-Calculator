#pragma once

class Complex {
    public:
        class PolarComplex{
            public:
                PolarComplex(Complex z){}
                friend std::ostream &operator << (std::ostream &out, const PolarComplex &pz);
            private:
                double polar_norm;
                double polar_phase;

        };
        Complex(double re, double im);
 
        Complex add(const Complex z);
        Complex sub(const Complex z);
        Complex mul(const Complex z);
        Complex div(const Complex z);
        PolarComplex toPolar();
        Complex toCartesian(const Complex z);
        Complex con();
        double norm() const;

        friend std::ostream &operator << (std::ostream &out, const Complex &z);

    private:
        double re;
        double im;

};
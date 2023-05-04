class Complex {

    public:
        Complex(int re, int im);
        ~Complex();

        Complex add(const Complex za, const Complex zb);
        Complex sub(const Complex za, const Complex zb);
        Complex mul(const Complex za, const Complex zb);
        Complex div(const Complex za, const Complex zb);
        Complex toPolar(const Complex za, const Complex zb);
        Complex toCartesian(const Complex za, const Complex zb);
        int norm(const Complex z);

        friend std::ostream &operator << (std::ostream &out, const Complex &z);

    private:
        int re;
        int im;

};
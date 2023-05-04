class Complex {

    public:
        Complex(int re, int im);
        ~Complex();

    private:
        int re;
        int im;

        Complex addition();
        Complex subtraction();
        Complex multiplication();
        Complex division();
        Complex polar();
        Complex cartesian();

};
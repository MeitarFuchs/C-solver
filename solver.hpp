

#include <iostream>
#include <complex>
using namespace  std;
namespace solver{

    class RealVariable
    {
        double a; //coff of power 2
        double b; //coff of power 1
        double c; //freeVER

        public:

            RealVariable()
            {
                a=0.0;
                b=1.0;
                c=0.0;
            };
            RealVariable(double aa, double bb, double cc)
            {
                a=aa;
                b=bb;
                c=cc;
            };

        double getA()
        {return a;}
        double getB()
        {return b;}
        double getC()
        {return c;}
        void setA(double x)
        { a=x;}
        void setB(double x)
        {b=x;}
        void setC(double x)
        { c=x;}

    };

    class ComplexVariable
    {
        complex<double> com;
        public:
        ComplexVariable()
        {};

    };
    double solve(RealVariable r);

    complex<double> solve(ComplexVariable c);


    RealVariable operator+(RealVariable r, double x );
    RealVariable operator-(RealVariable r, double x );
    RealVariable operator*(RealVariable r, double x );
    RealVariable operator^(RealVariable r, double x );
    RealVariable operator/(RealVariable r, double x );
    RealVariable operator==(RealVariable r, double x );


    RealVariable operator+(double x, RealVariable r );
    RealVariable operator-(double x, RealVariable r );
    RealVariable operator*(double x, RealVariable r );
    RealVariable operator^(double x, RealVariable r );
    RealVariable operator/(double x, RealVariable r );
    RealVariable operator==(double x, RealVariable r );


    RealVariable operator+(RealVariable r1, RealVariable r );
    RealVariable operator-(RealVariable r1, RealVariable r );
    RealVariable operator*(RealVariable r1, RealVariable r);
    RealVariable operator^(RealVariable r1, RealVariable r );
    RealVariable operator/(RealVariable r1, RealVariable r );
    RealVariable operator==(RealVariable r1, RealVariable r );

    ComplexVariable operator+(ComplexVariable c, std::complex<double> x );
    ComplexVariable operator-(ComplexVariable c, std::complex<double> x );
    ComplexVariable operator*(ComplexVariable c, std::complex<double> x );
    ComplexVariable operator^(ComplexVariable c, std::complex<double> x );
    ComplexVariable operator/(ComplexVariable c, std::complex<double> x );
    ComplexVariable operator==(ComplexVariable c, std::complex<double> x );

    ComplexVariable operator+(std::complex<double> x, ComplexVariable c );
    ComplexVariable operator-(std::complex<double> x, ComplexVariable c );
    ComplexVariable operator*(std::complex<double> x, ComplexVariable c );
    ComplexVariable operator^(std::complex<double> x, ComplexVariable c );
    ComplexVariable operator/(std::complex<double> x, ComplexVariable c );
    ComplexVariable operator==(std::complex<double> x, ComplexVariable c );


    ComplexVariable operator+(ComplexVariable c1, ComplexVariable c );
    ComplexVariable operator-(ComplexVariable c1, ComplexVariable c);
    ComplexVariable operator*(ComplexVariable c1, ComplexVariable c );
    ComplexVariable operator^(ComplexVariable c1, ComplexVariable c );
    ComplexVariable operator/(ComplexVariable c1, ComplexVariable c );
    ComplexVariable operator==(ComplexVariable c1, ComplexVariable c );

    complex<double> operator+(double x, std::complex<double> c);
    complex<double> operator-(double x, std::complex<double> c);
};





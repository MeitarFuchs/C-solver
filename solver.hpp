

#include <iostream>
#include <complex>
#define  EPS 0.0001
using namespace  std;

namespace solver{

    class RealVariable
    {
        double a; //coff of power 2
        double b; //coff of power 1
        double c; //freeVER

        public:
        RealVariable():a(0),b(1),c(0){};
        RealVariable(double aa, double bb, double cc)
        {
            a=aa;
            b=bb;
            c=cc;
        };
        double getA() {return a;}
        double getB() {return b;}
        double getC() {return c;}
    };

    class ComplexVariable
    {
        complex<double> a;
        complex<double> b;
        complex<double> c;

        public:
        ComplexVariable():a(complex<double>(0,0)),b(complex<double>(1,0)),c(complex<double>(0,0)){};

        ComplexVariable(complex<double> aa,complex<double> bb,complex<double> cc){
            this->a=aa;
            this->b=bb;
            this->c=cc;
        }

        complex<double> getA() {return a;}
        complex<double> getB() {return b;}
        complex<double> getC() {return c;}
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

    ComplexVariable operator^(ComplexVariable c1 , double x );
    ComplexVariable operator==(ComplexVariable com1, double y );

};





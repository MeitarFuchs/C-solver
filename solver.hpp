

#include <iostream>
#include <complex>
using namespace  std;
namespace solver{

    class RealVariable
    {
        double rel;
        public:

        RealVariable()
        {};

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







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
    double solve(RealVariable x);

    std::complex<double> solve(ComplexVariable y);

    std::complex<double> operator +(double x, std::complex<double> y);
    std::complex<double> operator -(double x, std::complex<double> y);
    RealVariable operator *(double x, RealVariable y );
    RealVariable operator ^(double x, RealVariable y );
    RealVariable operator +(double x, RealVariable y );
    RealVariable operator -(double x, RealVariable y );
    RealVariable operator /(double x, RealVariable y );
    RealVariable operator ==(double x, RealVariable y );
    RealVariable operator *(RealVariable y, double x );
    RealVariable operator ^(RealVariable y, double x );
    RealVariable operator +(RealVariable y, double x );
    RealVariable operator -(RealVariable y, double x );
    RealVariable operator /(RealVariable y, double x );
    RealVariable operator ==(RealVariable y, double x );
    RealVariable operator *(RealVariable x, RealVariable y );
    RealVariable operator ^(RealVariable x, RealVariable y );
    RealVariable operator +(RealVariable x, RealVariable y );
    RealVariable operator -(RealVariable x, RealVariable y );
    RealVariable operator /(RealVariable x, RealVariable y );
    RealVariable operator ==(RealVariable x, RealVariable y );
    ComplexVariable operator *(std::complex<double> x, ComplexVariable y );
    ComplexVariable operator ^(std::complex<double> x, ComplexVariable y );
    ComplexVariable operator +(std::complex<double> x, ComplexVariable y );
    ComplexVariable operator -(std::complex<double> x, ComplexVariable y );
    ComplexVariable operator /(std::complex<double> x, ComplexVariable y );
    ComplexVariable operator ==(std::complex<double> x, ComplexVariable y );
    ComplexVariable operator *(ComplexVariable y, std::complex<double> x );
    ComplexVariable operator ^(ComplexVariable y, std::complex<double> x );
    ComplexVariable operator +(ComplexVariable y, std::complex<double> x );
    ComplexVariable operator -(ComplexVariable y, std::complex<double> x );
    ComplexVariable operator /(ComplexVariable y, std::complex<double> x );
    ComplexVariable operator ==(ComplexVariable y, std::complex<double> x );
    ComplexVariable operator *(ComplexVariable x, ComplexVariable y );
    ComplexVariable operator ^(ComplexVariable x, ComplexVariable y );
    ComplexVariable operator +(ComplexVariable x, ComplexVariable y );
    ComplexVariable operator -(ComplexVariable x, ComplexVariable y );
    ComplexVariable operator /(ComplexVariable x, ComplexVariable y );
    ComplexVariable operator ==(ComplexVariable x, ComplexVariable y );
};





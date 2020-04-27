#include <iostream>
#include "solver.hpp"

using namespace  std;
using solver::RealVariable, solver::ComplexVariable;

double solver::solve(RealVariable x){
    double d;
    return d;
}
std::complex<double> solver::solve(ComplexVariable y){
    complex<double> c;
    return c;
}
complex<double> solver::operator +(double x, std::complex<double> y){return y;}
complex<double> solver::operator -(double x, std::complex<double> y){return y;}
RealVariable solver::operator *(double x, RealVariable y ){return y;}
RealVariable solver::operator ^(double x, RealVariable y ){return y;}
RealVariable solver::operator +(double x, RealVariable y ){return y;}
RealVariable solver::operator -(double x, RealVariable y ){return y;}
RealVariable solver::operator /(double x, RealVariable y ){return y;}
RealVariable solver::operator ==(double x, RealVariable y ){return y;}
RealVariable solver::operator *(RealVariable y, double x ){return y;}
RealVariable solver::operator ^(RealVariable y, double x ){return y;}
RealVariable solver::operator +(RealVariable y, double x ){return y;}
RealVariable solver::operator -(RealVariable y, double x ){return y;}
RealVariable solver::operator /(RealVariable y, double x ){return y;}
RealVariable solver::operator ==(RealVariable y, double x ){return y;}
RealVariable solver::operator *(RealVariable x, RealVariable y ){return x;}
RealVariable solver::operator ^(RealVariable x, RealVariable y ){return x;}
RealVariable solver::operator +(RealVariable x, RealVariable y ){return x;}
RealVariable solver::operator -(RealVariable x, RealVariable y ){return x;}
RealVariable solver::operator /(RealVariable x, RealVariable y ){return x;}
RealVariable solver::operator ==(RealVariable x, RealVariable y ){return x;}
ComplexVariable solver::operator *(std::complex<double> x, ComplexVariable y ){return y;}
ComplexVariable solver::operator ^(std::complex<double> x, ComplexVariable y ){return y;}
ComplexVariable solver::operator +(std::complex<double> x, ComplexVariable y ){return y;}
ComplexVariable solver::operator -(std::complex<double> x, ComplexVariable y ){return y;}
ComplexVariable solver::operator /(std::complex<double> x, ComplexVariable y ){return y;}
ComplexVariable solver::operator ==(std::complex<double> x, ComplexVariable y ){return y;}
ComplexVariable solver::operator *(ComplexVariable y, std::complex<double> x ){return y;}
ComplexVariable solver::operator ^(ComplexVariable y, std::complex<double> x ){return y;}
ComplexVariable solver::operator +(ComplexVariable y, std::complex<double> x ){return y;}
ComplexVariable solver::operator -(ComplexVariable y, std::complex<double> x ){return y;}
ComplexVariable solver::operator /(ComplexVariable y, std::complex<double> x ){return y;}
ComplexVariable solver::operator ==(ComplexVariable y, std::complex<double> x ){return y;}
ComplexVariable solver::operator *(ComplexVariable x, ComplexVariable y ){return y;}
ComplexVariable solver::operator ^(ComplexVariable x, ComplexVariable y ){return y;}
ComplexVariable solver::operator +(ComplexVariable x, ComplexVariable y ){return y;}
ComplexVariable solver::operator -(ComplexVariable x, ComplexVariable y ){return y;}
ComplexVariable solver::operator /(ComplexVariable x, ComplexVariable y ){return y;}
ComplexVariable solver::operator ==(ComplexVariable x, ComplexVariable y ){return y;}

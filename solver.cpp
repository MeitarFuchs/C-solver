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
RealVariable solver::operator+(RealVariable r, double x ){return r;}
RealVariable solver::operator-(RealVariable r, double x ){return r;}
RealVariable solver::operator*(RealVariable r, double x ){return r;}
RealVariable solver::operator^(RealVariable r, double x ){return r;}
RealVariable solver::operator/(RealVariable r, double x ){return r;}
RealVariable solver::operator==(RealVariable r, double x ){return r;}


RealVariable solver::operator+(double x, RealVariable r ){return r;}
RealVariable solver::operator-(double x, RealVariable r ){return r;}
RealVariable solver::operator*(double x, RealVariable r ){return r;}
RealVariable solver::operator^(double x, RealVariable r ){return r;}
RealVariable solver::operator/(double x, RealVariable r ){return r;}
RealVariable solver::operator==(double x, RealVariable r ){return r;}


RealVariable solver::operator+(RealVariable r1, RealVariable r ){return r;}
RealVariable solver::operator-(RealVariable r1, RealVariable r ){return r;}
RealVariable solver::operator*(RealVariable r1, RealVariable r){return r;}
RealVariable solver::operator^(RealVariable r1, RealVariable r ){return r;}
RealVariable solver::operator/(RealVariable r1, RealVariable r ){return r;}
RealVariable solver::operator==(RealVariable r1, RealVariable r ){return r;}

ComplexVariable solver::operator+(ComplexVariable c, std::complex<double> x ){return c;}
ComplexVariable solver::operator-(ComplexVariable c, std::complex<double> x ){return c;}
ComplexVariable solver::operator*(ComplexVariable c, std::complex<double> x ){return c;}
ComplexVariable solver::operator^(ComplexVariable c, std::complex<double> x ){return c;}
ComplexVariable solver::operator/(ComplexVariable c, std::complex<double> x ){return c;}
ComplexVariable solver::operator==(ComplexVariable c, std::complex<double> x ){return c;}

ComplexVariable solver::operator+(std::complex<double> x, ComplexVariable c ){return c;}
ComplexVariable solver::operator-(std::complex<double> x, ComplexVariable c ){return c;}
ComplexVariable solver::operator*(std::complex<double> x, ComplexVariable c ){return c;}
ComplexVariable solver::operator^(std::complex<double> x, ComplexVariable c ){return c;}
ComplexVariable solver::operator/(std::complex<double> x, ComplexVariable c ){return c;}
ComplexVariable solver::operator==(std::complex<double> x, ComplexVariable c ){return c;}


ComplexVariable solver::operator+(ComplexVariable c1, ComplexVariable c ){return c;}
ComplexVariable solver::operator-(ComplexVariable c1, ComplexVariable c){return c;}
ComplexVariable solver::operator*(ComplexVariable c1, ComplexVariable c ){return c;}
ComplexVariable solver::operator^(ComplexVariable c1, ComplexVariable c ){return c;}
ComplexVariable solver::operator/(ComplexVariable c1, ComplexVariable c ){return c;}
ComplexVariable solver::operator==(ComplexVariable c1, ComplexVariable c ){return c;}

complex<double> solver::operator+(double x, std::complex<double> c);
complex<double> solver::operator-(double x, std::complex<double> c);

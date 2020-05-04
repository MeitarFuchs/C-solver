#include <iostream>
#include "solver.hpp"

using namespace  std;
using solver::RealVariable, solver::ComplexVariable;

double solver::solve(RealVariable x)
{
    double d;
    return d;
}
std::complex<double> solver::solve(ComplexVariable y){
    complex<double> c;
    return c;
}
RealVariable solver::operator+(RealVariable r, double x )
{RealVariable newR = RealVariable(r.getA(), r.getB(), x+r.getC());
    return newR;
}

RealVariable solver::operator-(RealVariable r, double x )
{
    RealVariable newR = RealVariable(r.getA(), r.getB(), r.getC()-x);
    return newR;
}
RealVariable solver::operator*(RealVariable r, double x ){
    RealVariable newR = RealVariable(x*r.getA(), x*r.getB(), x*r.getC());
    return newR;}
RealVariable solver::operator^(RealVariable r, double x ){
    //error
    RealVariable newR;
    if (x!=2 || x!=1 || x!=0)    //error
        throw  exception();
    else{
        if (x == 2 && r.getA() != 0)    //error
            throw exception();
        else if (x == 2)
            newR = RealVariable(1.0, r.getB(), r.getC());

        if (x == 1) {
            if (r.getB() != 0)
                newR = RealVariable(r.getA(), r.getB(), r.getC());
            else
                newR = RealVariable(r.getA(), 1.0, r.getC());
        }
        if (x == 0) {
            newR = RealVariable(1.0, 1.0, 1.0);
        }
    }
        return newR;
    }


RealVariable solver::operator/(RealVariable r, double x )
{
    if (x!=0) {
        RealVariable newR = RealVariable(r.getA() / x, r.getB() / x, r.getC() / x);
        return newR;
    } else
        throw exception();

}
RealVariable solver::operator==(RealVariable r, double x )
{
    return r;}


RealVariable solver::operator+(double x, RealVariable r )
{
    RealVariable newR = RealVariable(r.getA(), r.getB(), r.getC()+x);
    return newR;
}
RealVariable solver::operator-(double x, RealVariable r )
{
    RealVariable newR = RealVariable(r.getA(), r.getB(), x-r.getC());
    return newR;
}
RealVariable solver::operator*(double x, RealVariable r )
{
    RealVariable newR = RealVariable(x*r.getA(), x*r.getB(), x*r.getC());
    return newR;
}

RealVariable solver::operator/(double x, RealVariable r )
{
    RealVariable newR = RealVariable(x/r.getA(), x/r.getB(), x/r.getC());
    return newR;
}
RealVariable solver::operator==(double x, RealVariable r )
{

}


RealVariable solver::operator+(RealVariable r1, RealVariable r )
{
    RealVariable newR = RealVariable(r1.getA()+r.getA(), r1.getA()+r.getB(), r1.getA()+r.getC());
    return newR;
}
RealVariable solver::operator-(RealVariable r1, RealVariable r )
{
    RealVariable newR = RealVariable(r1.getA()-r.getA(), r1.getA()-r.getB(), r1.getA()-r.getC());
    return newR;
}
RealVariable solver::operator*(RealVariable r1, RealVariable r)
{
    throw exception();
//    // if the pwer is more then 2?????
//
//    RealVariable newR = RealVariable(r1.getA()*r.getA(), r1.getA()*r.getB(), r1.getA()+r.getC());
//    return newR;
}
RealVariable solver::operator^(RealVariable r1, RealVariable r ){throw exception();}
RealVariable solver::operator/(RealVariable r1, RealVariable r ){throw exception();}
RealVariable solver::operator==(RealVariable r1, RealVariable r )
{
    return r;
}

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

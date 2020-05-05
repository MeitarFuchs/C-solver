#include <iostream>
#include "solver.hpp"
#include<cmath>

using namespace  std;
using solver::RealVariable, solver::ComplexVariable;

double solver::solve(RealVariable r)
{
    double ansX=-1;
    double a = r.getA();
    double b = r.getB();
    double c= r.getC();

    if (a==0 && b==0 && c==0) throw exception();//"no solotion"
    if (a==0&&b==0&& c!=0)throw exception();//"no solotion"
    if (a!=0&&b==0&& c==0) return 0;
    if (a==0&&b!=0&& c==0) return 0;
    if (a==0&&b!=0&& c!=0) return (-(c))/b;
    if (a!=0&&b==0&& c!=0)
    {
        if ((-c)<0)
            throw exception();
        else
            return sqrt((-c));
    }
    if (a!=0&&b!=0&& c==0) return 0; // or  (-(b))/a
    if (a!=0 && b!=0 && c!=0)
    {
        for (int i = 0; i < 100; i++)
            for (int j = 0; j < 100; j++) {
                if (i * j == c && i + j == b)
                    return (-(i)); //newR == RealVariable(0.0, 0.0, -(i));
            }
    }
        return ansX;
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
RealVariable solver::operator*(RealVariable r, double x )
{
    RealVariable newR = RealVariable(x*r.getA(), x*r.getB(), x*r.getC());
    return newR;
}
RealVariable solver::operator^(RealVariable r, double x ){
    //error
    RealVariable newR;
    if (x!=2 || x!=1 || x!=0)    //error
        throw  exception();
    else{
        if (x == 2 && r.getA() != 0)    //error
            throw exception();
        else if (x == 2 && r.getA() == 0)
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
    RealVariable newR;
    newR = RealVariable(r.getA(), r.getB(),r.getC()-x  );
    return newR;
}


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
    RealVariable newR;
    newR = RealVariable(r.getA(), r.getB(),r.getC()-x  );
    return newR;
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
    RealVariable newR=r1-r;
    return newR;
}



ComplexVariable solver::operator+(ComplexVariable com, complex<double> x )
{
    ComplexVariable newCC=ComplexVariable (com.getA(), com.getB(), com.getC()+x );
    return newCC;
}
ComplexVariable solver::operator-(ComplexVariable com, complex<double> x )
{
    ComplexVariable newCC=ComplexVariable (com.getA(), com.getB(), com.getC()-x );
    return newCC;
}
ComplexVariable solver::operator*(ComplexVariable com, complex<double> x )
{
    ComplexVariable newCC=ComplexVariable ((com.getA())*x, (com.getB())*x, (com.getC())*x );
    return newCC;
}

ComplexVariable solver::operator/(ComplexVariable com, complex<double> x )
{
    ComplexVariable newCC=ComplexVariable ((com.getA())/x, (com.getB())/x, (com.getC())/x );
    return newCC;
}
ComplexVariable solver::operator^(ComplexVariable com, complex<double> x )
{
   return com;
}
ComplexVariable solver::operator==(ComplexVariable com, complex<double> x )
{
    ComplexVariable newCC=ComplexVariable (com.getA(), com.getB(), com.getC()-x );
    return newCC;
}

ComplexVariable solver::operator+(std::complex<double> x, ComplexVariable com )
{
    ComplexVariable newCC=ComplexVariable (com.getA(), com.getB(), com.getC()+x );
    return newCC;
}
ComplexVariable solver::operator-(complex<double> x, ComplexVariable com )
{
    ComplexVariable newCC=ComplexVariable (com.getA(), com.getB(), x-com.getC() );
    return newCC;
}
ComplexVariable solver::operator*(std::complex<double> x, ComplexVariable com )
{
    ComplexVariable newCC=ComplexVariable ((com.getA())*x, (com.getB())*x, (com.getC())*x );
    return newCC;
}
ComplexVariable solver::operator/(std::complex<double> x, ComplexVariable com )
{
    ComplexVariable newCC=ComplexVariable ( x/(com.getA()), x/(com.getB()), x/(com.getC()));
    return newCC;
}
ComplexVariable solver::operator^(std::complex<double> x, ComplexVariable com ){return com;}

ComplexVariable solver::operator==(std::complex<double> x, ComplexVariable com )
{
    ComplexVariable newCC=ComplexVariable (com.getA(), com.getB(), com.getC()-x );
    return newCC;
}


ComplexVariable solver::operator+(ComplexVariable com1, ComplexVariable com )
{
    ComplexVariable newCC=ComplexVariable (com1.getA()+com.getA(), com1.getB()+com.getB(), com1.getC()+com.getC() );
    return newCC;
}
ComplexVariable solver::operator-(ComplexVariable com1, ComplexVariable com)
{
    ComplexVariable newCC=ComplexVariable (com1.getA()-com.getA(), com1.getB()-com.getB(), com1.getC()-com.getC() );
    return newCC;
}
ComplexVariable solver::operator*(ComplexVariable com1, ComplexVariable com )
{
    ComplexVariable newCC=ComplexVariable (com1.getA()*com.getA(), com1.getB()*com.getB(), com1.getC()*com.getC() );
    return newCC;
}
ComplexVariable solver::operator/(ComplexVariable com1, ComplexVariable com )
{
    ComplexVariable newCC=ComplexVariable (com1.getA()/com.getA(), com1.getB()/com.getB(), com1.getC()/com.getC() );
    return newCC;
}
ComplexVariable solver::operator^(ComplexVariable com1, ComplexVariable com ){return com;}
ComplexVariable solver::operator==(ComplexVariable com1, ComplexVariable com )
{
    ComplexVariable newCC=ComplexVariable (com1.getA()-com.getA(), com1.getB()-com.getB(), com1.getC()-com.getC() );
    return newCC;
}

complex<double> solver::operator+(double x, complex<double> c)
{
    return c;
}

complex<double> solver::operator-(double x, complex<double> c)
{
return c;
}
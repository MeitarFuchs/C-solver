#include <iostream>
#include "solver.hpp"
#include<cmath>

using namespace  std;
using solver::RealVariable, solver::ComplexVariable;

double solver::solve(RealVariable r)
{
    double a = r.getA();
    double b = r.getB();
    double c= r.getC();
    if (a==0 && b==0 && c==0) throw exception();//"no solotion"
    if (a==0&&b==0&& c!=0)throw exception();//"no solotion"
    if (a!=0&&b==0&& c==0) return 0;
    if (a==0&&b!=0&& c==0) return 0;
    if (a==0&&b!=0&& c!=0) return (-(c)) / b;
    if (a!=0&&b==0&& c!=0)
    {
        if ((-c)<0)
            throw exception();
        else {
            double newC=-c;
            return sqrt((newC /a));
        }
    }
    if (a!=0&&b!=0&& c==0) return 0; // or  (-(b))/a

    if (a!=0 && b!=0 && c!=0)
    {
        for (int i = -100; i < 100; i++)
            for (int j = -100; j < 100; j++) {
                if (i * j == c && i + j == b) {return (-(i)); }
            }
        double ans= ((-b)+(sqrt((b*b)-4*a*c)))/ (2*a);
            return ans;
    }
        return -9999;
}

std::complex<double> solver::solve(ComplexVariable com)
{
    complex<double> a = com.getA();
    complex<double> b = com.getB();
    complex<double> c = com.getC();

    if (a==complex<double>(0,0) && b==complex<double>(0,0) &&c==complex<double>(0,0)) throw exception();
    if (a!=complex<double>(0,0) && b!=complex<double>(0,0) &&c==complex<double>(0,0)) return 0;
    if (a!=complex<double>(0,0) && b==complex<double>(0,0) &&c==complex<double>(0,0)) return 0;
    if (a==complex<double>(0,0) && b!=complex<double>(0,0) &&c==complex<double>(0,0)) return 0;
    if (a==complex<double>(0,0) && b==complex<double>(0,0) &&c!=complex<double>(0,0)) throw exception ();
    if (a==complex<double>(0,0) && b!=complex<double>(0,0) &&c!=complex<double>(0,0))
        return  ((-c)/b) ;
    if (a!=complex<double>(0,0) && b==complex<double>(0,0) &&c!=complex<double>(0,0))
        return sqrt( ((-c)/a) );
    if (a!=complex<double>(0,0) && b!=complex<double>(0,0) &&c!=complex<double>(0,0))
    {
        for (int i = -100; i < 100; i++)
            for (int j = -100; j < 100; j++) {
                if ((double)(i * j) == c && (double)(i + j) == b) {  return (-(i)); }
            }
    }
}
RealVariable solver::operator+(RealVariable r, double x )
{
    RealVariable newR = RealVariable(r.getA(), r.getB(), x+r.getC());
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
    RealVariable newR;
    if (x!=2 && x!=1 && x!=0)   throw exception();
    if (x == 2 && r.getA() != 0)   throw exception();
    if (x == 2 && r.getB() != 0 && r.getC()==0)
        newR = RealVariable(r.getB(), 0.0, 0.0);
    if (x == 2 && r.getA() != 0 && r.getB()!=0)  throw exception();
    if (x == 2 && r.getA() == 0 && r.getB() && r.getC()!=0)
        newR = RealVariable(0.0, 0.0, pow(r.getC(), 2));
    if (x == 1)
       newR = RealVariable(r.getA(), r.getB(), r.getC());
    if (x == 0)
       newR = RealVariable(0.0, 0.0, 1.0);

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
    RealVariable newR= RealVariable(r.getA(), r.getB(),r.getC()-x  );
    return newR;
}

RealVariable solver::operator+(RealVariable r1, RealVariable r )
{
    RealVariable newR = RealVariable(r1.getA()+r.getA(), r1.getB()+r.getB(), r1.getC()+r.getC());
    return newR;
}
RealVariable solver::operator-(RealVariable r1, RealVariable r )
{
    RealVariable newR = RealVariable(r1.getA()-r.getA(), r1.getB()-r.getB(), r1.getC()-r.getC());
    return newR;
}
RealVariable solver::operator*(RealVariable r1, RealVariable r)
{throw exception();}
RealVariable solver::operator^(RealVariable r1, RealVariable r ){throw exception();}
RealVariable solver::operator/(RealVariable r1, RealVariable r ){throw exception();}
RealVariable solver::operator==(RealVariable r1, RealVariable r )
{
    RealVariable newR = RealVariable(r1.getA()-r.getA(), r1.getB()-r.getB(), r1.getC()-r.getC());
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
{   return com;}
ComplexVariable solver::operator==(ComplexVariable com, complex<double> x )
{
    ComplexVariable newCC=com -x;
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
    if (com.getA()==complex<double>(0,0) ) throw exception();
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
ComplexVariable solver::operator^(ComplexVariable com1, double y )
{
    if(y>2){
        throw logic_error("The Power  more then 2\n");
    }
    if(y==0){
        ComplexVariable com =  ComplexVariable(0, 0, 1);
        return com;
    }
    if(y<0){
        throw logic_error("The Power lower than 0\n");
    }
    if(y==1) {
        ComplexVariable com= ComplexVariable (com1.getA(),com1.getB(),com1.getC());
        return com;
    }
    if(y==2) {
        ComplexVariable com = ComplexVariable (com1.getB(),0.0, 0.0);
        return com;
    }
    return com1;
}


ComplexVariable solver::operator==(ComplexVariable com1, double y )
{
    ComplexVariable com= com1-y;
    return com;
}

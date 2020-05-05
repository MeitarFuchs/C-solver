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
    cout<<"  a:  "<<a<<"  b:  "<<b<<"  c:  "<<c;

    if (a==0 && b==0 && c==0) throw exception();//"no solotion"
    if (a==0&&b==0&& c!=0)throw exception();//"no solotion"
    if (a!=0&&b==0&& c==0) return 0;
    if (a==0&&b!=0&& c==0) return 0;
    if (a==0&&b!=0&& c!=0) return (-(c))/b;
    if (a!=0&&b==0&& c!=0)
    {
        if ((-c)<0)
            throw exception();
        else {
            double newC=-c;
            cout<<"sqrt(newC): "<<sqrt(newC);
            return sqrt(newC);
        }
    }
    if (a!=0&&b!=0&& c==0) return 0; // or  (-(b))/a

    if (a!=0 && b!=0 && c!=0)
    {
        for (int i = 0; i < 100; i++)
            for (int j = 0; j < 100; j++) {
                if (i * j == c && i + j == b) {
                    cout<<"the -i is:  "<<(-i);
                    return (-(i)); //newR == RealVariable(0.0, 0.0, -(i));
                }
            }
    }
        return -9999;
}



std::complex<double> solver::solve(ComplexVariable com){
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
        return sqrt( ((-c)/b) );
    if (a!=complex<double>(0,0) && b!=complex<double>(0,0) &&c!=complex<double>(0,0))
    {
        for (int i = 0; i < 100; i++)
            for (int j = 0; j < 100; j++) {
                if ((double)(i * j) == c && (double)(i + j) == b)
                    return (-(i));
            }
    }


}
RealVariable solver::operator+(RealVariable r, double x )
{RealVariable newR = RealVariable(r.getA(), r.getB(), x+r.getC());
    cout<<" rel+double  a:"<<newR.getA()<<" b: "<<newR.getB()<<" c:  "<<newR.getC()<<"\n";

    return newR;
}

RealVariable solver::operator-(RealVariable r, double x )
{
    RealVariable newR = RealVariable(r.getA(), r.getB(), r.getC()-x);
    cout<<" rel-double   a:"<<newR.getA()<<" b: "<<newR.getB()<<" c:  "<<newR.getC()<<"\n";

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
    if (x!=2 && x!=1 && x!=0)
    {
        cout<<"1";
        throw exception();
    }
    if (x == 2 && r.getA() != 0)    //error
    {
        cout << "2";
        throw exception();
    }
    if (x == 2 && r.getB() != 0 && r.getC()==0)    //error
    {
        cout << "3";
        newR = RealVariable(r.getB(), 0.0, 0.0);
    }
    if (x == 2 && r.getA() != 0 && r.getB()!=0)    //error
    {
        cout << "4";
        throw exception();
    }
    if (x == 2 && r.getA() == 0 && r.getB() && r.getC()!=0) {
        cout << "5";
        newR = RealVariable(0.0, 0.0, pow(r.getC(), 2));
    }

    if (x == 1)
    {
            newR = RealVariable(r.getA(), r.getB(), r.getC());
    }
    if (x == 0)
    {
            newR = RealVariable(0.0, 0.0, 1.0);
    }
    cout<<" rel ^ double  a:"<<newR.getA()<<" b: "<<newR.getB()<<" c:  "<<newR.getC()<<"\n";

        return newR;
    }


RealVariable solver::operator/(RealVariable r, double x )
{
    if (x!=0) {
        RealVariable newR = RealVariable(r.getA() / x, r.getB() / x, r.getC() / x);
        cout<<"  rel/double   a:"<<newR.getA()<<" b: "<<newR.getB()<<" c:  "<<newR.getC()<<"\n";

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
    cout<<" double+ rel   a:"<<newR.getA()<<" b: "<<newR.getB()<<" c:  "<<newR.getC()<<"\n";

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
    cout<<" double* rel   a:"<<newR.getA()<<" b: "<<newR.getB()<<" c:  "<<newR.getC()<<"\n";
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

    RealVariable newR = RealVariable(r1.getA()+r.getA(), r1.getB()+r.getB(), r1.getC()+r.getC());
    cout<<" rel+ rel   a:"<<newR.getA()<<" b: "<<newR.getB()<<" c:  "<<newR.getC()<<"\n";
    return newR;
}
RealVariable solver::operator-(RealVariable r1, RealVariable r )
{
    RealVariable newR = RealVariable(r1.getA()-r.getA(), r1.getB()-r.getB(), r1.getC()-r.getC());
    return newR;
}
RealVariable solver::operator*(RealVariable r1, RealVariable r)
{
    cout<<"******************************************";
    throw exception();

}
RealVariable solver::operator^(RealVariable r1, RealVariable r ){throw exception();}
RealVariable solver::operator/(RealVariable r1, RealVariable r ){throw exception();}
RealVariable solver::operator==(RealVariable r1, RealVariable r )
{
    cout<<"\n";
    cout<<"r1:  "<<r1.getA()<<"  "<<r1.getB()<<"  "<<r1.getC()<<"\n";
    cout<<"r:  "<<r.getA()<<"  "<<r.getB()<<"  "<<r.getC()<<"\n";


    RealVariable newR = RealVariable(r1.getA()-r.getA(), r1.getA()-r.getB(), r1.getA()-r.getC());
    cout<<"rel == rel:  "<<newR.getA()<<"  "<<newR.getB()<<"  "<<newR.getC();
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
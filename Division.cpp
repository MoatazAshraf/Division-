#include "Division.h"
void Division::setnumber1(double x)
{
  number1=x;
}
double Division::getnumber1()
{
    return number1;
}
void Division::setnumber2(double y)
{
    number2=y;
}
double Division::getnumber2()
{
    return number2;
}
double Division::getresult ()
{
    if(number2!=0)
    return number1/number2;
    else cout<<"Error \n";
}


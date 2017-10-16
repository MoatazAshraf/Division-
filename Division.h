#ifndef DIVISION_H
#define DIVISION_H
#include <iostream>
using namespace std;
class Division
{
    public:
        void setnumber1 (double );
        double getnumber1 ();
        void setnumber2 (double );
        double getnumber2 ();
        void setresult (double);
        double getresult ();
    private:
        double number1;
        double number2;
        double result;

};

#endif // DIVISION_H

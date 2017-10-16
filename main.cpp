#include "Division.cpp"
int main()
{
     double x,y;
     cout<<"Please enter two numbers"<<endl;
     cin>>x>>y;
    Division D;
    D.setnumber1 (x);
    D.setnumber2(y);
  cout<<"Their division is "<< D.getresult ();
return 0;
}

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double order(int n);
double fun(double x);
int main()
{
int x;
double a=0,b=0;
long double c;
clock_t t1,t2;

t1=clock();
/*-------�p��--------*/           
cout<<"�п�Jsin�����סG";
cin>>x;
a=fun(x*M_PI/180);
b=sin(x*M_PI/180);
c=b-a;
/*-------�p�⵲��-----*/ 
t2=clock();
cout<<"�ۻs��ƭȡG"<<setprecision(10)<<a<<endl;
cout<<"�w�s��ƭȡG"<<setprecision(10)<<b<<endl;
cout<<"��̮t�G"<<setprecision(10)<<c<<endl;
cout<<"\n����ɶ���:"<<double(t2-t1)/CLOCKS_PER_SEC<<"��"<<endl;


system ("pause");
return 0;
}



double order(int n)   //n!
{
       double i,x=1;
       
       for(i=1;i<=n;i++)
       x*=i;
       
       return x;
}


double fun(double x)   //sinx
{
 double sinx=0.0;
 int n;
       
 for(n=1;;n++)
 {
  if(n%2==0)
  {
    sinx-=pow(x,(2*n-1))/order(2*n-1);
    if(pow(x,(2*n-1))/order(2*n-1)<pow(M_E,-15.0))
      break;
  }
  else
  {
    sinx+=pow(x,(2*n-1))/order(2*n-1);
    if(pow(x,(2*n-1))/order(2*n-1)<pow(M_E,-15.0))
      break;
  }
 }
   return sinx;
}


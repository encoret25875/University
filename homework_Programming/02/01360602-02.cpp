#include <iostream>
#include <cstdlib>
using namespace std;
void fr(int);
void mar(int);
int main(){
  int n;
  cout<<"�п�J�n�ͼƻP�B���ƿ�X�q:\n";
  cin>>n;
  
  fr(n);
  
  mar(n);

  system ("pause");
  return 0;
}     

void fr(int n)
{   
 int a,i,k=0,suma=0,sumb=0;
       
/*------�n�ͼ�----------*/
cout<<"�n�ͼƬ�:\n";
for(a=1;k<n;a++)
{suma=sumb=0;
  for(i=1;i<a;i++)
   if(a%i==0)
    suma+=i;
  for(i=1;i<suma;i++)
   if(suma%i==0)
    sumb+=i;
if(sumb==a && sumb>suma)
  {
    cout<<"<"<<suma<<","<<sumb<<">"<<endl;k++;}
  }
}

void mar(int n)
{   
 int a,i,k=0,suma=0,sumb=0;
       
/*------�B����----------*/
cout<<"�B���Ƭ�:\n";
for(a=1;k<n;a++)
{suma=sumb=0;
  for(i=2;i<a;i++)
   if(a%i==0)
    suma+=i;
  for(i=2;i<suma;i++)
   if(suma%i==0)
    sumb+=i;
if(sumb==a && sumb>suma)
  {
    cout<<"<"<<suma<<","<<sumb<<">"<<endl;k++;}
  }
}

 

#include <iostream>
using namespace std;
int countpp(float);
int main(){
    float ps;
    cout<<"�п�J%��\n";
    cin>>ps; 
    
    cout<<"��"<<countpp(ps)-1<<"�H�ɡA�ͤ魫�ƾ��v�|����"<<ps<<"\n";   //�]��n���h�[�@ 
      
system ("pause");
return 0;
}     


int countpp(float ps)
{double n,j,x=1;
  for(n=1;j<=ps;n++)
   {x*=((365-n+1)/365);
    j=1-x;
    //cout<<n<<" "<<j<<endl;    //�T�{�ƭȥ� 
   }  
   return n;
}

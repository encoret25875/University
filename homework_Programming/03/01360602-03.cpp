#include <iostream>
using namespace std;
int countpp(float);
int main(){
    float ps;
    cout<<"請輸入%數\n";
    cin>>ps; 
    
    cout<<"當"<<countpp(ps)-1<<"人時，生日重複機率會高於"<<ps<<"\n";   //因為n為多加一 
      
system ("pause");
return 0;
}     


int countpp(float ps)
{double n,j,x=1;
  for(n=1;j<=ps;n++)
   {x*=((365-n+1)/365);
    j=1-x;
    //cout<<n<<" "<<j<<endl;    //確認數值用 
   }  
   return n;
}

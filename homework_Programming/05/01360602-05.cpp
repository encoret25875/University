#include <iostream>
#include <iomanip>
using namespace std;
void num();
int bingo(int *);
void out(int *,int,int *);
int ans[7],n[100][7];
int main(){
int sum;
int w[8]={0}; 



num();
sum=bingo(w);
out(w,sum,ans);
    
    
system ("pause");
return 0;
}
/*------------------號碼------------------------*/      
void num()
{int i,j,k;
    //第7碼(ans[6])  為特別號 
    srand(time(NULL));
    for(i=0;i<7;i++)                   //中獎號碼不重複 
       {
        ans[i]=rand()%49+1;
         for(j=0;j<i;j++)
           {if(ans[i]==ans[j])
           i--;}
       }
for(k=0;k<100;k++)       
  {for(i=0;i<7;i++)                   //電腦選號號碼不重複 
       {
        n[k][i]=rand()%49+1;
         for(j=0;j<i;j++)
           {if(n[k][i]==n[k][j])
           i--;}
       } 
  } 
}
/*------------------對獎------------------------------*/ 
int bingo (int *w)
{
int i,j,k,b;
int sum=-5000;
for(i=0;i<100;i++)      //  i為第n組 
   {b=0;                //  b為中的數字量
     for(j=0;j<6;j++)   //  j為n 選號 
      { 
                   
        for(k=0;k<6;k++)
         if(ans[k]==n[i][j])
           b++;
      } 
      
      switch(b)
         {case 3:
               if(ans[6]==n[i][6])
               {sum+=1000;    w[6]++;}      //六獎 
               else         
               {sum+=300;     w[7]++;}      //七獎 
                 break;     
          case 4:           
               if(ans[6]==n[i][6])
               {sum+=10000;   w[4]++;}      //四獎 
               else         
               {sum+=5000;    w[5]++;}      //五獎 
                 break;
          case 5:
               if(ans[6]==n[i][6])
               {sum+=3000000; w[2]++;}      //二獎 
               else
               {sum+=150000;  w[3]++;}      //三獎 
                 break;
          case 6:
               {sum+=50000000;w[1]++;}      //頭獎 
          }
      
   }
   
   return sum;
} 
  
void out (int *w,int sum,int *ans){
int i,j;
cout<<" 開獎號碼\n";
for(i=0;i<7;i++)
 cout<<setw(3)<<ans[i];
cout<<endl;

for(i=0;i<100;i++)
 {cout<<"第"<<setw(3)<<i+1<<"組";
  for(j=0;j<7;j++)
  cout<<setw(3)<<n[i][j];
  cout<<endl;
 }
for(i=1;i<8;i++) 
{if(i!=1)
    cout<<" "<<i<<"獎中了"<<w[i]<<"次\n";
else
    cout<<"頭獎中了"<<w[i]<<"次\n"; 
}
    if(sum>0)
    cout<<"恭喜本次你賺"<<sum<<"元\n"; 
    else if(sum==0)
    cout<<"您本次不賺不賠\n";
    else
    cout<<"抱歉您本次賠了"<<abs(sum)<<"元\n"; 
}

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
/*------------------���X------------------------*/      
void num()
{int i,j,k;
    //��7�X(ans[6])  ���S�O�� 
    srand(time(NULL));
    for(i=0;i<7;i++)                   //�������X������ 
       {
        ans[i]=rand()%49+1;
         for(j=0;j<i;j++)
           {if(ans[i]==ans[j])
           i--;}
       }
for(k=0;k<100;k++)       
  {for(i=0;i<7;i++)                   //�q���︹���X������ 
       {
        n[k][i]=rand()%49+1;
         for(j=0;j<i;j++)
           {if(n[k][i]==n[k][j])
           i--;}
       } 
  } 
}
/*------------------���------------------------------*/ 
int bingo (int *w)
{
int i,j,k,b;
int sum=-5000;
for(i=0;i<100;i++)      //  i����n�� 
   {b=0;                //  b�������Ʀr�q
     for(j=0;j<6;j++)   //  j��n �︹ 
      { 
                   
        for(k=0;k<6;k++)
         if(ans[k]==n[i][j])
           b++;
      } 
      
      switch(b)
         {case 3:
               if(ans[6]==n[i][6])
               {sum+=1000;    w[6]++;}      //���� 
               else         
               {sum+=300;     w[7]++;}      //�C�� 
                 break;     
          case 4:           
               if(ans[6]==n[i][6])
               {sum+=10000;   w[4]++;}      //�|�� 
               else         
               {sum+=5000;    w[5]++;}      //���� 
                 break;
          case 5:
               if(ans[6]==n[i][6])
               {sum+=3000000; w[2]++;}      //�G�� 
               else
               {sum+=150000;  w[3]++;}      //�T�� 
                 break;
          case 6:
               {sum+=50000000;w[1]++;}      //�Y�� 
          }
      
   }
   
   return sum;
} 
  
void out (int *w,int sum,int *ans){
int i,j;
cout<<" �}�����X\n";
for(i=0;i<7;i++)
 cout<<setw(3)<<ans[i];
cout<<endl;

for(i=0;i<100;i++)
 {cout<<"��"<<setw(3)<<i+1<<"��";
  for(j=0;j<7;j++)
  cout<<setw(3)<<n[i][j];
  cout<<endl;
 }
for(i=1;i<8;i++) 
{if(i!=1)
    cout<<" "<<i<<"�����F"<<w[i]<<"��\n";
else
    cout<<"�Y�����F"<<w[i]<<"��\n"; 
}
    if(sum>0)
    cout<<"���ߥ����A��"<<sum<<"��\n"; 
    else if(sum==0)
    cout<<"�z�������Ȥ���\n";
    else
    cout<<"��p�z�����ߤF"<<abs(sum)<<"��\n"; 
}

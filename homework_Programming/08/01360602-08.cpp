#include<iostream>
using namespace std;
int main(){
    int ay[3][3]={{-1,-2,-1},
                  { 0, 0, 0},
                  { 1, 2, 1}};
    int ax[3][3]={{-1, 0, 1},
                  {-2, 0, 2},
                  {-1, 0, 1}};           
    int  b[5][5]={{15,39,42,27,12},
                  {12,21,48,15, 9},
                  { 9,21,27,12, 3},
                  {18,15,33,18,18},
                  {45,60,57,24,21}};            
    int i,j,k,l,sumy,sumx,sum;     
    int t=0;
for(k=0;k<3;k++)
  {for(l=0;l<3;l++)
    {sumx=sumy=sum=0;                  
     for(i=0;i<3;i++)
        {
         for(j=0;j<3;j++)
          sumy+=b[i+k][j+l]*ay[i][j];
         for(j=0;j<3;j++)
          sumx+=b[i+k][j+l]*ax[i][j];
        }
          sum=abs(sumy)+abs(sumx); 
          //cout<<sum<<endl;
          if(sum>100)
          {if(t!=0)
            {cout<<", <"<<k+1<<","<<l+1<<">"; t++;}
           else
            {cout<<"<"<<k+1<<","<<l+1<<">";   t++;}
          }  
    }
  }


cout<<endl;






system("pause");
return 0;


}

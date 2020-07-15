#include <iostream>
#include <cstdlib>
#include <iomanip>
void magic_fun();
void concealer();
void output();
int ci[4][6]={{  8,  7,  9,  4,  6,  9},
              { 79, 64, 55, 42, 23, 30},
              {120,110,110,109, 89, 78},
              {210,221,212,224,139,113}};
int n[4][3]={{2,3,2},
             {3,1,3},
             {2,4,3},
             {2,3,4}};
int si[4][6];
int magic[256][256];
using namespace std;
int main(){
magic_fun();
concealer();
output();
  system ("pause");
  return 0;
}     


void magic_fun(void){
     /*-------------魔術矩陣------------------*/ 
     
     int s=0;
     for(int i=0;i<256;i++){
                        for(int j=0;j<256;j++){
                                           magic[i][j]=s%5;
                                           s++;
                                           }
                        s+=2; 
                        }
/*for(i=0;i<256;i++){      //確認魔術矩陣用 
                     for(j=0;j<20;j++)
                     cout<<magic[i][j]<<" " ;
                     cout<<endl;
                     }     
*/
//因題目座標上下相反  故查座標時為j , [255-i]  j行 i列  
/*cin>>j>>i;
  i=255-i;
  cout<<magic[i][j];*/
}
     
void concealer(void){
/*----------------隱藏---------------------- */
     int k=0,l=0,i=0,j=0;
     for(i=0;i<4;i++){
                      for(j=0;j<6;j+=2){
                      if(magic[255-ci[i][j+1]][ci[i][j]]==n[k][l]){
                           si[i][j]=ci[i][j];
                           si[i][j+1]=ci[i][j+1];
                           }
                      else if(magic[255-ci[i][j+1]+1][ci[i][j]]==n[k][l]){
                           si[i][j]=ci[i][j];
                           si[i][j+1]=ci[i][j+1]-1;
                           }
                      else if(magic[255-ci[i][j+1]-1][ci[i][j]]==n[k][l]){
                           si[i][j]=ci[i][j];
                           si[i][j+1]=ci[i][j+1]+1;
                           }
                      else if(magic[255-ci[i][j+1]][ci[i][j]+1]==n[k][l]){
                           si[i][j]=ci[i][j]+1;
                           si[i][j+1]=ci[i][j+1];
                           }
                      else if(magic[255-ci[i][j+1]][ci[i][j]-1]==n[k][l]){
                           si[i][j]=ci[i][j]-1;
                           si[i][j+1]=ci[i][j+1];
                           }
                      l++;
                      }
   if(l>2){
           k++;
           l=0;
           }
   }
}


void output(void){
     cout<<"SI陣列為:\n";
     for(int i=0;i<4;i++){
             for(int j=0;j<6;j++)
             cout<<setw(4)<<si[i][j];
             cout<<endl;
             }
}

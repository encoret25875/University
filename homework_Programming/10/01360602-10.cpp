#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void magic_fun();
void decrypt();
void output();
int si[4][6]={{  8,  7, 10,  4,  6,  8},
              { 80, 64, 55, 43, 23, 30},
              {120,111,111,109, 89, 77},
              {210,221,212,223,138,113}};
int sum[4];
int magic[256][256];
int main(){
    magic_fun();
    decrypt();
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

void decrypt(void){
     /*----------------解密-------------------*/ 
int k=0;
int ans[12];
for(int i=0;i<4;i++)
        for(int j=0;j<6;j+=2){
                              ans[k]=magic[255-si[i][j+1]][si[i][j]];
                              k++;
                              }

sum[0]=ans[0]*25+ans[1]*5+ans[2];
sum[1]=ans[3]*25+ans[4]*5+ans[5];
sum[2]=ans[6]*25+ans[7]*5+ans[8];
sum[3]=ans[9]*25+ans[10]*5+ans[11];
}

void output(void){
     for(int i=0;i<4;i++)
  cout<<(char)sum[i];
cout<<endl;
}

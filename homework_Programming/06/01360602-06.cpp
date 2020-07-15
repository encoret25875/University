#include <iostream>
using namespace std;
void fun();
int main(){

fun();









         
    
    system("pause");
    return 0;
}

void fun(void){
         int n,m;
    cout<<"請輸入A陣列大小(M*M):(m<=10)\n";
    cin>>m;
    while(m>10){
                  cout<<"請重新輸入A陣列大小(M*M):(m<=10)\n";
                  cin>>m;
                  };
    int a[m][m];
    cout<<"請輸入A陣列資料:\n";
    for(int i=0;i<m;i++)
            for(int j=0;j<m;j++)
                    cin>>a[i][j];
    cout<<"請輸入B陣列大小(N*N):(n<=100且n>m)\n";
    cin>>n;
    while(n>100||n<m){
                  cout<<"請重新輸入B陣列大小(N*N):(n<=100且n>m)\n";
                  cin>>n;
                  };
    int b[n][n];
    cout<<"請輸入B陣列資料:\n";
    for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                    cin>>b[i][j];
        
/*-----差異值陣列-----*/
    int diff[m][m];
    int diff_sum[n-m+1][n-m+1];
    for(int i=0;i<n-m+1;i++)
            for(int j=0;j<n-m+1;j++)
                    diff_sum[i][j]=0;
    
    for(int k=0;k<=m/2;k++)
      for(int i=k;i<m-k;i++)
        for(int j=k;j<m-k;j++)
          diff[i][j]=k+1;
          
    for(int i=0;i<n-m+1;i++)
            for(int j=0;j<n-m+1;j++)
                    for(int k=0;k<m;k++)
                            for(int l=0;l<m;l++)
                                    if(a[k][l]!=b[i+k][j+l])
                                    diff_sum[i][j]+=diff[k][l];

                                    
    /*差異值計算結果
      for(int i=0;i<n-m+1;i++){
           for(int j=0;j<n-m+1;j++)
                    cout<<diff_sum[i][j]<<" ";      
                    cout<<endl;}
    */

    int min_x=99,min_y=99,min_sum=99;
    for(int i=0;i<n-m+1;i++)
                         for(int j=0;j<n-m+1;j++)
                                              if(diff_sum[i][j]<min_sum)
                                              {min_x=i;
                                              min_y=j;
                                              min_sum=diff_sum[i][j];
                                              }
    cout<<"最接近運算子 T(x, y)為:\n<"<<min_x+1<<","<<min_y+1<<">"<<"\n";
}

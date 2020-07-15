#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,sw,i,pd,pd2;
    string s[] = {"I","They","He","She","Mary","John"};
    string v[] = {"love","like","see","find"};
    string o[] = {"me","them","him","her"};
    string self[4]={"myself","themselves","himself","herself"};
    string ans[100][3];
    string data[3];
    string out[100];
    /*-----輸入-----*/
    cout<<"請輸入列數數量:\n";
    cin>>n;
    for(i=0;i<n;i++){
            cout<<"請輸入第"<<i+1<<"句:\n";
            cin>>ans[i][0]>>ans[i][1]>>ans[i][2];}
    /*-----處理-----*/
     while(i>=0){sw=0;
                   //sw判斷Mary,John是否2個 同時出現 
                         for(int j=0;j<3;j++)
                                 for(int k=0;k<6;k++)
                                         if(ans[i][j]==s[4] || ans[i][j]==s[5])
                                                            sw++;
                                 
                 if(sw>1){       
                                 int k,sw=0;
                                 for(int j=0;j<3;j++)
                                              for(k=0;k<6;k++)                              //s1
                                              if(ans[i][j]==s[k] && sw==0)                        
                                              {data[0]=ans[i][j];sw=1;}
                                 for(int j=0;j<3;j++)
                                              for(k=k-1;k<6;k++)                              //s2
                                              if(ans[i][j]==s[k])                      
                                              data[2]=ans[i][j];
                                 for(int j=0;j<3;j++)
                                         for(int k=0;k<4;k++){                      //v
                                                              if(ans[i][j]==v[k])   
                                                              data[1]=ans[i][j];
                                                              }
                                 out[i]=data[0]+" "+data[1]+"s "+data[2]+" or "+data[2]+" "+data[1]+"s "+data[0];
                           }
                 else{
                                  for(int j=0;j<3;j++){
                                                       for(int k=0;k<6;k++)                       //s
                                                               if(ans[i][j]==s[k])
                                                               data[0]=ans[i][j],pd=k;
                                                       for(int k=0;k<4;k++){
                                                                            if(ans[i][j]==v[k])   //v
                                                                            data[1]=ans[i][j];
                                                                            if(ans[i][j]==o[k])   //o
                                                                            data[2]=ans[i][j],pd2=k;
                                                                            }
                                                       }
                                  if(pd==pd2)
                                  data[2]=self[pd];
                                  if(data[0]==s[2]||data[0]==s[3]||data[0]==s[4]||data[0]==s[5])
                                  out[i]=data[0]+" "+data[1]+"s "+data[2]+".";
                                  else
                                  out[i]=data[0]+" "+data[1]+" "+data[2]+".";                                   
                      }
                 i--; 
                 }
                          
                     
    
    /*-----輸出-----*/ 
    
            
    for(int i=0;i<n;i++){
            cout<<"第"<<i+1<<"句:\n";
            cout<<out[i]<<endl;
    }
    system ("pause");
    return 0;
}
    

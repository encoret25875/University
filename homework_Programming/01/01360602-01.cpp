#include <iostream>
#include <cstdlib>
using namespace std;
int bingo(int);
int main(){
    char ch;
    srand(time(NULL));
    do{
    int ans;
    ans=(rand()%100)+1;  
    cout<<"答案為"<<ans<<endl;
    
    bingo(ans);
         
    cout<<"play again??(y)\n";
    cin>>ch;
    }while(ch=='y'||ch=='Y');
 system ("pause");
 return 0;
}



int bingo(int ans)
{int x ,count=0;
do{
    cout<<"請輸入猜值:\n"; 
    cin>>x; 
    if(x>ans)
    cout<<"太大\n";
    else if(x<ans)
    cout<<"太小\n";
    else
    cout<<"good\n";
    count++;
    if(x==ans)
    break;
}while(count<5);

}

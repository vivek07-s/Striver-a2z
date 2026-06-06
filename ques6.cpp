// 1
// 23
// 456
// 7891
// 23456
#include<iostream>
using namespace std;
class pattern{
    public:
      void pattern6(int n){
        int num=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<num;
                num++;
                if(num==10)
                    num=1;
                }
        cout<<endl;
            }
        }
    };

int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    pattern p;
    p.pattern6(n);
    return 0;
}
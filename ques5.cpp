// 1
// 12
// 123
// 1234
// 12345
#include<iostream>
using namespace std;
class pattern{
    public:
    void pattern5(int n){
        int i,j;
            for(i=1;i<=n;i++){
                for(j=1;j<=i;j++){
                    cout<<j;
                }
                cout<<endl;
            }
    }
};
int main(){
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    pattern p;
    p.pattern5(n);
    return 0;
}
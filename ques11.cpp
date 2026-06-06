// *****
// ****
// ***
// **
// *

#include<iostream>
using namespace std;
class pattern{
    public:
        void pattern10(int n){
            int i,j;
            for(i=1;i<=n;i++){
                for(j=1;j<=n-i+1;j++){
                    cout<<"*";
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
    p.pattern10(n);
    return 0;
}
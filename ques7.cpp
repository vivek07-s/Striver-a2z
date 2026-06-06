// 1
// 22
// 333
// 4444
// 55555
#include<iostream>
using namespace std;
class pattern{
    public:
        void pattern7(int n){
            int i,j;
            for(i=1;i<=n;i++){
                for(j=1;j<=i;j++){
                    cout<<i;
                }
                cout<<endl;
            }
        }
};
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    return 0;
}
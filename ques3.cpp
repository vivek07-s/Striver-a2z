#include<iostream>
using namespace std;
class pattern {
    public:
        void pattern3(int n){
            int i,j;
            for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
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
    p.pattern3(n);

    return 0;
}
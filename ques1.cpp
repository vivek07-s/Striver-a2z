#include<iostream>
using namespace std;
class patern {
    public:
    void pattern1(int n){
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
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
    patern p;
    p.pattern1(n);
    return 0;
}
#include<iostream>
using namespace std;
class pattern{
    public :
    void pattern2(int n){
        int i,j;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    } 
};
int main(){
    int n ;
    cout<<"enter the value of n ";
    cin>>n;
    pattern p;
    p.pattern2(n);
    return 0;
}
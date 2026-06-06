// 1
// 23
// 456
// 78910
// 1112131415
#include<iostream>
using namespace std;
class pattern{
    public:
        void pattern8(int n){
            int i,j;
            int num=1;
             for(i=1;i<=n;i++){
                for(j=1;j<=i;j++){
                    cout<<num;
                    num++;
                }
                cout<<endl;
             }
        }    
};
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    pattern p;
    p.pattern8(n);
    return 0;
}
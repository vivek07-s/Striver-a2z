// A
// AB
// ABC
// ABCD
// ABCDE
#include<iostream>
using namespace std;
class pattern{
    public:
        void pattern9(int n){
            int i,j;
            
                for(i=1;i<=n;i++){
                    for(j=1;j<=i;j++){
                        cout<<(char)(64+j);
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
    p.pattern9(n);
    return 0;
}
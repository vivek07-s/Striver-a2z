//A
//BC
//DEF
//GHIJ
//KLMNO

#include<iostream>
using namespace std;
class pattern{
    public:
        void pattern10(int n){
            int i,j;
            char ch='A';
               for(i=1;i<+n;i++){
                for(j=1;j<=i;j++){
                    cout<<ch;
                    ch++;
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
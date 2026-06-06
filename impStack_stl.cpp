#include<iostream>
#include<stack>
using namespace std;

void push(stack<int>&st){
    int x;
    cout<<"enter the value to be pushed :";
    cin>>x;

    st.push(x);
    cout<<"element pushed :";
}
void pop(stack<int>&st){
    if(st.empty()){
        cout<<"stack is empty :";
        return;
    }
    else{
        cout<<"element popped is :"<<st.top();
        st.pop();
    }
}
void size(stack<int>st){
    if(st.empty()){
        cout<<"stack is empty :";
        return;
    }
    else{
        cout<<"size of stack is :"<<st.size();
    }
}
 

void display(stack<int>st){
    if(st.empty()){
        cout<<"stack is empty:";
        return;
    }
    else{
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
    }
}

int main(){
    stack<int>st;

    while(1){
        int choice;
        cout<<"enter your choice :";
        cin>>choice;

        switch(choice){
            case 1:push(st);
                break;
            case 2:pop(st);
                break;
            case 3:size(st);
                break;
            case 4:display(st);
                break;
            case 5:exit(1);
                break;
            
                default:cout<<"invalid choice try again:";
                break;
        }
    }
    return 0;

}
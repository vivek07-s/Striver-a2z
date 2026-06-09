#include<iostream>
using namespace std;

# define MAX 100
int arr[MAX];
int top=-1;
void push(){
    if(top==MAX-1){
        cout<<"stack full";
        return ;
    }
    else{
        int x;
        cout<<"enter the value to be pushed:";
        cin>>x;
        arr[++top]=x;
    }
}
void pop(){
    if(top==-1){
        cout<<"syack empty:";
        return;
    }
    else{
        cout<<arr[top]<<"element popped ";
    top--;
    }
}
void size(){
    if(top==-1){
        cout<<"stack is empty :";
        return;
    }
    else{
        cout<<"size is "<<top+1<<endl;
    }
}
void display(){
    if(top==-1){
        cout<<"stack is empty:";
        return;
    }
    else{
        for(int i=top;i>=0;i--){
            cout<<"elements is "<<arr[i];
        }
        cout<<endl;
    }
}
int main(){

    while(1){
        int choice;
        cout<<"enter your choice";
        cout<<"press 1 for push:";
        cout<<"press 2 for pop :";
        cout<<"press 3 for size :";
        cout<<"press 4 for display :";
        cout<<"press 5 for exit :";
        
        cin>>choice;
        
        switch(choice){
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:size();
            break;
            case 4:display();
            break;
            case 5:exit(1);
            break;
                default:cout<<"invalid choice,try again";
                break;
        }
    }
    return 0;
}

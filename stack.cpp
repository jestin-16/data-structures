#include<iostream>

using namespace std;
#define max 5
class Stack{
    int stack[max],top;
    public:
    Stack(){
        top=-1;
    }
    void push();
    void pop();
    void display();
    
};
void Stack:: push(){
    if(top==max-1)
    cout<<"stack overflow";
    else{
        int el;
        cout<<"enter the element";
        cin>>el;
        stack[++top]=el;
    }
}
void Stack:: pop(){
    if(top==-1){
        cout<<"stack underflow";
    }
    else{
        cout<<"deleted element"<<stack[top--];
        // getch();
    }
}
void Stack:: display(){
    if(top==-1){
        cout<<"stack underflow";
    }
    else{
        for(int i=0;i<=top;i++){
            cout<<stack[i]<<"\t";
        }
    }
}
int main(){
    Stack obj;
    int res;
    do{
        cout<<"\n enter the response \n 1.push \n 2.pop \n 3.display \n 4.exit";
        cin>>res;
        switch(res){
            case 1:obj.push(); break;
            case 2:obj.pop(); break;
            case 3:obj.display(); break;
            case 4: exit(0); break;
            default: cout<<"invalid choice";
        }
    }while(1);
    // getch();
    return(0);
}
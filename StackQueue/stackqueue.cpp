#include<bits/stdc++.h>
using namespace std;
class Stack{
    int top;
    int cap;
    int *a;
public:
    Stack(int cap){
        this -> cap=cap;
        top=-1;
        a= new int[cap];
    }
    ~Stack(){
        delete[]a;
    }
    bool push(int x){
        if(top >= cap-1){
            cout<<"Stack Overflow"<<endl;
            return false;
        }
        a[++top]=x;
        return true;
    }
    int pop(){
        if(top<0){
            cout<<"Stack Underflow"<<endl;
            return 0;
        }
        return a[top--];
    }
    int peek(){
        if (top < 0) cout<<"Empty"<<endl; return 0;
        return a[top];
    }
    bool isempty(){
        return top<0;
    }
};
int main(){
    Stack s(5);
    s.push(10);
    s.push(21);
    s.push(03);
    s.push(14);
    s.push(11);
    cout<<s.pop()<<"  Popping done from stack : "<<endl;
    return 0;
}
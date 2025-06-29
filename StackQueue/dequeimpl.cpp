#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>stack;
    stack.push_back(10);
    stack.push_back(20);
    stack.push_back(45);
    cout<<stack.back()<<" Popped from deque"<<endl;
    stack.pop_back();
    cout<<"top element is : "<<stack.back();
}
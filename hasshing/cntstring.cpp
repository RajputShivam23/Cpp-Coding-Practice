#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int hash[15] ={0};
    for (int i=0;i<s.size();i++){
        hash[s[i]] +=1;
    }
    int q;
    cin>>q;
    while(q--){
        char letter;
        cin>>letter;
        cout<<hash[letter]<<endl;
    }
    return 0;
    
}
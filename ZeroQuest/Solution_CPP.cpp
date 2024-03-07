#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;
    int sum=0;
    for(auto it:s){
        if(it=='+')sum--;
        else sum++;
    }
    cout<<sum<<endl;
    
}
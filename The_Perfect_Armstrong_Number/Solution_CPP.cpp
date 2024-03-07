#include <bits/stdc++.h>
using namespace std;

bool armstrong(int n){
  int digit_count=(int)(log10(n)+1);
  int sum=0,temp=n;
  while(temp>0){
    sum+=pow(temp%10,digit_count);
    temp/=10;
  }
  
  return (sum==n);
  
}

int main() 
{
    int n;
    cin>>n;
    if(armstrong(n)){
      cout<<"YES\n";
    }
    else{
      cout<<"NO ";
      int temp=n;
      while(!armstrong(n)){
        n++;
      }
      cout<<n-temp<<endl;
    }
    return 0;
}
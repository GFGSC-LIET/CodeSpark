#include <bits/stdc++.h>

using namespace std;

int main()
{
  	int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &it:arr)cin>>it;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1])cout<<arr[i]<<" ";
        else cout<<-1<<" ";
    }
    cout<<-1<<endl;
    return 0;
}
#include <stdio.h>


int armstrong(int n){
  int digit_count=(int)(log10(n)+1);
  int sum=0,temp=n;
  while(temp>0){
    sum+=pow(temp%10,digit_count);
    temp/=10;
  }
  
  return sum==n?1:0;
  
}

int main() 
{
    int n;
    scanf("%d",&n);
    if(armstrong(n)){
      printf("YES\n");
    }
    else{
      printf("NO ");
      int temp=n;
      while(!armstrong(n)){
        n++;
      }
      printf("%d\n",n-temp);
    }
    return 0;
}
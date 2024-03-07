#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);

    int sum=0;
    for(int i=0;i<n;i++){
        if(s[i]=='+')sum--;
        else sum++;
    }

    printf("%d\n",sum);
}
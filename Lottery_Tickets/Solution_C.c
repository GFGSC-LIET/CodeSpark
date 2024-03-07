#include<stdio.h>

int main() {
    int x,y;
    scanf("%d%d",&x,&y);
    int amount=(x*10+(y-x)*5);
    printf("%d\n",amount);
    return 0;
}
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            printf("%d ",arr[i]);
        }
        else printf("-1 ");
    }

    printf("-1\n");

}
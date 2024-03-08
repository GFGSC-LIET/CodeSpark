n=int(input())
arr=list(map(int,input().split()))
for i in range(n-1):
    if arr[i]>arr[i+1]:
        arr[i]=arr[i+1]
    else:
        arr[i]=-1
arr[n-1]=-1
for i in arr:
    print(i,end=" ")

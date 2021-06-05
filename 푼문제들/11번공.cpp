#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int arr[5]={-1,1,2,3};
void swap(int l,int r) {
    int tmp = arr[l];
    arr[l] = arr[r];
    arr[r] = tmp;
}
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d %d",&a,&b);
        swap(a,b);
    }
    for(int i=1;i<4;i++) {
        if(arr[i] == 1) printf("%d",i);
    }
    return 0;
}

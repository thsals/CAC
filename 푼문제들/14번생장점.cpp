#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    int a,arr1[22],arr2[22],sum=1,n=1;
    while(1) {
        scanf("%d",&a);
        if(a==0) break;
        for(int i=0;i<a;i++) {
            scanf("%d %d",&arr1[i],&arr2[i]);
        }
        sum=1;
        for(int i=0;i<a;i++) {
            sum*=arr1[i];
        }
        n=1;
        for(int i=a-1;i>=0;i--) {
            sum-=arr2[i] * n;
            n*=arr1[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}

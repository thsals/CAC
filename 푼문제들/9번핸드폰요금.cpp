#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int flag=0,n,arr[21],ysum=0,msum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        
    }
    for(int i=0;i<2;i++) {
        for(int j=0;j<n;j++) {
            if(flag==0) {
                ysum+=((arr[j]/30)+1)*10;
            }
            if(flag==1) {
                msum+=((arr[j]/60)+1)*15;
            }
        }
        flag=1;
    }
    if(ysum>msum)
        printf("M %d\n",msum);
    else if(ysum<msum)
        printf("Y %d\n",ysum);
    else printf("Y M %d\n",ysum);
    return 0;
 }

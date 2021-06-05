#include <iostream>
#include <cstring>
#include <string>
using namespace std;


int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        long a, b;
        scanf("%ld %ld", &a, &b);
        long res=a;
        if(b>1) {
            for(long i=2;i<=b;++i) {
                res=(res*a)%10;
            }
        }
        else res%=10;
        if(res==0)res=10;
        printf("%ld\n", res);
    }
    return 0;
}

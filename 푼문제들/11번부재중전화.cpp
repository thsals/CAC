#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(void)
{
    int n, l, d;
    scanf("%d %d %d", &n, &l, &d);
    int a = 0;
    for(int k=0;k<n;k++) {
        a += l;
        for (int i=1;i<=5;i++) {
            if (a%d == 0) {
                printf("%d\n", a);
                return 0;
            }
            a++;
        }
    }

    printf("%d\n",((n*(l+5) - 5)/ d + 1) * d);
}

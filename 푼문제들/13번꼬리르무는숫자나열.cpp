#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    int a,b,garo,sero;
    scanf("%d %d",&a,&b);
    garo = abs((b - 1) / 4 - (a - 1) / 4);
    sero = abs((b + 3) % 4 - (a + 3) % 4);
    printf("%d",garo+sero);
    return 0;
}

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int x,y,w,h,min1=9999;
    scanf("%d %d %d %d",&x,&y,&w,&h);
    min1 = min(min(x,y), min(w-x,h-y));
    printf("%d",min1);
    return 0;
 }

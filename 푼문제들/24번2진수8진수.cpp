#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
char s[1000001];
char k[1000001];
int main(){

  int i;
  scanf("%s", s);
  int len = (int)strlen(s);
  int j=0;

  for(i=len-1;i>=0;i-=3){

    if(i>=2 && s[i-2] && s[i-1] && s[i])
      k[j++]= 4*(s[i-2]-48)+2*(s[i-1]-48)+s[i];
    else if (i==1 && s[i-1] && s[i])
      k[j++] = 2*(s[i-1]-48)+s[i];
    else if (i==0)
      k[j++] = s[i];
  }

  for(i=j-1; i>=0; i--)
    printf("%c", k[i]);
  printf("\n");

  return 0;
}

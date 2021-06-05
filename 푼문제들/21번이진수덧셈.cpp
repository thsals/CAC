#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
char a[100],b[100], sum[100],ans[100];


void f(char cala[],char calb[],int pos,int R)
{
    if(pos<0&&R==0) return;
    int num =0;
    if(pos>=0)num = cala[pos] - '0' + calb[pos] - '0';

   f(cala,calb,pos-1,(R+num)/2);
   cout << (num+R) %2;
}


int main()
{
    int lena,lenb,i,maxlen=0,o,lastlen;
    scanf("%s %s",&a,&b);


    lena = strlen(a);
    int first = 0;
    for(i=0;i<lena;i++)
    {
        if(a[i]!='0') break;
    }
    first = i;
    strcpy(a,a+first);
    lena = strlen(a);
    lenb = strlen(b);
    for(i=0;i<lenb;i++)
    {
        if(b[i]!='0') break;
    }
    first = i;
    strcpy(b,b+first);
    lenb = strlen(b);

    char cala[100]={0},calb[100]={0};
    if(lena > lenb) {
        maxlen = lena;
        strcpy(cala,a);
        for(i=0;i<lena-lenb;i++) calb[i]='0';
        strcat(calb,b);
    }
    else {
        if(lenb==0)
        {
            cout << 0;
            return 0;
        }
        maxlen = lenb;
        strcpy(cala,b);
        for(i=0;i<lenb-lena;i++) calb[i]='0';
        strcat(calb,a);
    }


    for(i=maxlen-1;i>=0;i--) {
        sum[i] = ((cala[i] - '0') + (calb[i]  - '0')) ;

    }
    o=0;
    for(i=maxlen-1;i>=0;i--) {
        ans[o]+=sum[i];
        ans[o+1] += ans[o]/2;
        ans[o]= ans[o]%2;
        o++;
    }
    if(ans[o])printf("%d",ans[o]);
    for(i=o-1;i>=0;i--) {
        printf("%d",ans[i]);
    }


    return 0;
}

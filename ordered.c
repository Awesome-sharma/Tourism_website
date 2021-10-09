#include<stdio.h>
int ins(int a[10],int n,int x)
{
    int i=0,j;
    while(a[i]<=x && i<=n-1)
    {
        i++;
    }
    for(j=n-1;j>=i;j--)
    {
        a[j+1]=a[j];
    }
    a[i]=x;
}

int main()
{
    int a[10]={10,20,30,40,60,70};
    int n=7;
    int x=50;
    int m;
    ins(a,n,x);
    for(m=0;m<n;m++)
        printf("\n%d",a[m]);
}

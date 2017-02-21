//Bài 116: Viết chương trình nhập n và tính tổng S = 1 + 2 + 3 + … + n
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,S;
    printf("nhap n=");scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        S=S+i;
    }
    printf("S=%d",S);
}

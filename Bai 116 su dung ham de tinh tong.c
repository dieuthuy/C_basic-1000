//Bài 116: Viết chương trình nhập n và tính tổng S = 1 + 2 + 3 + … + n
#include<stdio.h>
#include<conio.h>
main()
{
    int n;
    printf("nhap n=");
    scanf("%d",&n);
    printf("tong S=%d",nhap(n));
}
int nhap(int a)
{
    int S=0,i;
    for(i=1;i<=a;i++)
    {
        S=S+i;
    }
    return S;
}

//Bài 117: Viết chương trình nhập n và tính tổng S(n) = x + x^2 + x^3 + … + x^n
#include<stdio.h>
#include<conio.h>
main()
{
    int x,n;
    printf("nhap x= ");
    scanf("%d",&x);
    printf("nhap n=");scanf("%d",&n);
    printf("Tong S= %d",nhap(x,n));
}
int nhap(int a,int b)
{
    int i,S=0;
    for(i=1;i<=b;i++)
    {
        S=S+pow(a,i);
    }
    return S;
}

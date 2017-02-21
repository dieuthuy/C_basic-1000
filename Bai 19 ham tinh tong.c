//Bài 19: Tính S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int x,n;
    printf("nhap x= ");scanf("%d",&x);
    printf("nhap n=");scanf("%d",&n);
    printf("Tong S= %f",tinhtong(x,n));
}
void tinhtong(int a,int b)
{
    float S=0,M=0,gt=1;
    int i;
    for(i=1;i<=b;i++)
    {
        M=0+pow(a,2*i+1);
        gt=gt*i;
        S=S+M/gt;
    }
    return S;
}

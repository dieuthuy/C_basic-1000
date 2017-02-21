//Bài 117: Viết chương trình nhập n và tính tổng S(n) = x + x^2 + x^3 + … + x^n
#include<stdio.h>
void main()
{
    int i,n,S=0,x;
    printf("nhap x=");
    scanf("%d",&x);
    printf("nhao n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        S=S+pow(x,i);
    }
    printf("S= %d",S);
}

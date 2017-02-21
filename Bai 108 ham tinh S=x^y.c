//Bài 108:  Viết hàm tính S = x^y
#include<stdio.h>
int tinhhams(int x,int y)
{
    int S;
    S=pow(x,y);
    return S;
}
int main()
{
    int a,b;
    printf("nhap a= ");scanf("%d",&a);
    printf("nhap b="); scanf("%d",&b);
    printf("S=%d",tinhhams(a,b));
}


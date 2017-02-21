//Bài 120: Liệt kê tất cả các số chính phương nhỏ hơn n
#include<stdio.h>
void main()
{
    float D;
    int n,S;
    printf("hap n=");scanf("%d",&n);
    S=sqrt(n);
    D=sqrt(n);
    if(S==D) printf("so chinh phuong");
    else printf("khong phai so chinh phuong");
}

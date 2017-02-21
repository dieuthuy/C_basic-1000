//Bài 119: Liệt kê tất cả các số nguyên tố nhỏ hơn n
#include<stdio.h>
void main()
{
    int i,n;
    printf("nhap n=");
    scanf("%d",&n);
    if(n==3)
    {
        printf("so nguyen to la: 1,2");
    }
    if(n>3){
            printf("1\t2");
    for(i=2;i<n;i++)
    {

        if(i%2==1) printf("%8d",i);
    }
    }
}

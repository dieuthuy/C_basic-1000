//Bài 109: Viết chương trình in bảng cửu chương ra màn hình
#include<stdio.h>
void main()
{
    int i,j,T;
    printf("in ra bang cuu chuong");
    printf("\n\n ");
    for(i=2;i<=9;i++)
       {
           for(j=1;j<=10;j++)
    {
        T=i*j;
        printf("%d*%d=%d\n",i,j,T);
    }
    printf("\n\n");
       }
}

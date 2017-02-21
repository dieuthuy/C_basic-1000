// Bài 123: Viết hàm tìm 1 vị trí mà giá trị tại vị trí đó là giá trị nhỏ nhất trong mảng 1 chiều các số nguyên
#include<stdio.h>
#include<conio.h>
main()
{
    int n;
    printf("nhap n=");
    scanf("%d",&n);
    printf("vi tri nho nhat : %d ",snn(n));

}
int snn(int x)
{
    int i,D=0;
    int a[x];
    int min=a[1];
    for(i=1;i<=x;i++)
    {
        printf("a[%d]=",i);

        scanf("%d",&a[i]);
    }
    for(i=1;i<=x;i++)
    {
        if(min>a[i])
        {min=a[i];
        D=D+1;
        }
    }
    return D;
}

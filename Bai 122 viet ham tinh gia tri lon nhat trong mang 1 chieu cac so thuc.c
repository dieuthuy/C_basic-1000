//Bài 122: Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực
#include<stdio.h>
#include<conio.h>
main()
{
    int n,j;
    printf("nhap so phan tu cua mang n=");
    scanf("%d",&n);
    printf("gia tri lon nhat la : %d",sln(n));
}
int sln(int b)
{
    int a[b];
    int i,max;

    for(i=1;i<=b;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
     max=a[1];
    for(i=1;i<=b;i++)
    {
        if(max<a[i]) max=a[i];
    }
    return max;
}

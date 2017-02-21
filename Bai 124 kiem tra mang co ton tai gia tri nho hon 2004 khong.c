//Bài 124: Viết hàm kiểm tra trong mảng các số nguyên có tồn tại giá trị chẵn nhỏ hơn 2004 hay không
#include<stdio.h>
#include<conio.h>
main()
{

    int n,M;
    printf("nhap n=");
    scanf("%d",&n);
    int a[n];
    if(n<2004){
    if(kt(a,n)!=0) printf("khong ton tai");
    else printf("ton tai ");
    }
    else printf("khong kiem tra duoc");

}
void kt(int a[],int n)
{
    int i,D;
    if(n<2004)
    {
    for(i=1;i<=n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]%2==1) D=D+1;
        else D=0;
        break;    }

    }
    return D;
}

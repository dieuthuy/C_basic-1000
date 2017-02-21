//Bài 105: Viết chương trình nhập 1 số nguyên có 2 chữ số.  Hãy in ra cách đọc của số nguyên này
#include<stdio.h>
void main()
{
    int i,n,m;
    printf("nhap so nguyen co hai chu so : ");
    scanf("%d",&n);
    i=n/10;
    if(i==1) printf("Muoi");
    if(i==2) printf("Hai");
    if(i==3) printf("Ba");
    if(i==4) printf("Bon");
    if(i==5) printf("Nam");
    if(i==6) printf("Sau");
    if(i==7) printf("Bay");
    if(i==8) printf("Tam");
    if(i==9) printf("Chin");
    m=n%10;
    if(m==0) m=m;
    if(m==1) printf(" mot");
    if(m==2) printf(" hai");
    if(m==3) printf(" ba");
    if(m==4) printf(" bon");
    if(m==5) printf(" lam");
    if(m==6) printf(" sau");
    if(m==7) printf(" bay");
    if(m==8) printf(" tam");
    if(m==9) printf(" chin");

}

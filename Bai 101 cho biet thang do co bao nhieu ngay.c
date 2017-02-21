//Bài 101: Viết chương trình nhập tháng, năm. Hãy cho biết tháng đó có bao nhiêu ngày
#include<stdio.h>
void main()
{
    int i,y;
    printf("Nhap thang vao : ");scanf("%d",&i);
    printf("Nhap nam : ");scanf("%d",&y);
    if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
    {
        printf("Thang do co 31 ngay");
    }
    if(i==2)
    {
        printf("Thang so co 29 ngay ");
    }
    else
    {
        printf("Thang do co 30 ngay");
    }
}

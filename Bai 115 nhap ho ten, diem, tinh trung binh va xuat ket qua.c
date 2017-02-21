//Bài 115: Viết chương trình nhập họ tên, điểm toán, điểm văn của 1 học sinh. Tính điểm trung bình và xuất ra kết quả
#include<stdio.h>
void main()
{
    float a,b,S;
    char ten;
    printf("Ten Hs(viet lien khong dau):  ");
    scanf("%s",&ten);
    printf("diem toan : ");scanf("%f",&a);
    printf("diem van:");scanf("%f",&b);
    S=(a+b)/2;
    printf("Diem trung binh= %.1f",S);


}

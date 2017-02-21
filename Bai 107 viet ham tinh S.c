//Bài 107: Viết hàm tính S = CanBacN(x)
#include<stdio.h>
float tinhham(float a,float b)
{
    float S;
    if(a==1) return 1;
    S=pow(a,1/b);
    return S;
}
float main()
{
    float x,N;
    printf("nhap x=");
    scanf("%f",&x);
    printf("nhap N=");
    scanf("%f",&N);
    printf("S=%f",tinhham(x,N));
}

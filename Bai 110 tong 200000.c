//Bài 110: Cần có tổng 200000 đồng từ 3 loại giấy bạc 1000 đồng, 2000 đồng, 5000 đồng. Lập chương trình để tìm ra tất cả các phương án có thể
#include<stdio.h>
#include<math.h>
void main()
{
    int D,S=0;
    int i,j,z;
    for(i=1;i<=200;i++)
    {
        for(j=1;j<=100;j++)
        {
            for(z=1;z<=40;z++)
                {D=i*1000+j*2000+z*5000;
                if(D<=20000)  S=S+1;

        }
    }

}
printf("tong 20000 co %d cach",S);
}

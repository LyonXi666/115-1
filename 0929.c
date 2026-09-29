#include<stdio.h>
int main()
{
    float a;
    float b;
    float c;
    printf("輸入三角形的底");
    scanf("%f",&a);
    printf("輸入三角形的高");
    scanf("%f",&b);
    printf("三角形面積為:%.2f",c=a*b/2);
    return 0;
}
#include <stdio.h>
#define PI 3.14159
int main(){
    float dai,rong,r;
    printf("Nhap chieu dai: ");
    scanf("%f", &dai);
    printf("Nhap chieu rong: ");
    scanf("%f", &rong);
    printf("Chu vi la: %.1f\nDien tich la: %.1f\n", (dai+rong)*2, dai*rong);

    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);
    float cv= r*2*PI;
    float dt= r*r*PI;
    printf("Ban kinh: %f\nChu vi: %.1f\nDien tich: %.1f", r,cv,dt);//chu vi: %f=> 1.2

    return 0;
}

#include <stdio.h>
int main(){
    float a,b,x;
    printf("Nhap a( khac 0 nha): ");
    scanf("%f", &a);
     printf("Nhap b( khac 0 nha): ");
    scanf("%f", &b);
    x= -b/a;
    printf("Nghiem cua phuong trinh %.1fx +%.1f = 0 la: x= %.1f", a,b,x);
    return 0;
}
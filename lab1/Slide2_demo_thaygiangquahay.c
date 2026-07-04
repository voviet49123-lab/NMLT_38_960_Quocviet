#include <stdio.h>

int main(){

    int a,b;
    printf("Nhap a nao: ");
    scanf("%d", &a);
    printf("Nhap b nao: ");
    scanf("%d", &b);
    printf(" Phuong trinh %dx + %d = 0 co nghiem x =%.1f\n", a,b,-1.0*b/a);
    return 0;
}
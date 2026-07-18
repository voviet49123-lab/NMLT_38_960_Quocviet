#include <stdio.h>
#define Tigia 26.29
int main(){
int sl_gao, sl_dau;
    printf("Nhap so luong dau: ");
    scanf("%d", &sl_dau);
    printf("Nhap so luong gao: ");
    scanf("%d", &sl_gao);
    float gia_gao;
    float gia_dau;
    gia_gao = 2*sl_gao*Tigia;
    gia_dau = 1.5*sl_dau*Tigia;
printf("So luong gao cua ban la %d\nBan phai tra la: %.3f VND\n", sl_gao, gia_gao);
printf("so luong dau cua ban la %d\nBan phai tra la: %.3f VND\n", sl_dau, gia_dau);
    return 0;
}
//gia gao 2$, gia dau 1.5$, ti gia do 26.29. Nhap so luong gao và so luong dau, tính tien
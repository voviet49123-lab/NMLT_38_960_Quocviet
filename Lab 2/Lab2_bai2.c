#include <stdio.h>
int main(){
    int Toan,Ly,Hoa;
    printf("Nhap diem Toan: ");
    scanf("%d", &Toan);
    printf("Nhap diem Ly: ");
    scanf("%d", &Ly);
    printf("Nhap diem Hoa: ");
    scanf("%d", &Hoa);
    float DiemTB;
    DiemTB = (float)(Toan*3+Ly*2+Hoa)/6;
    printf("Diem trung binh cua ban la %.2f", DiemTB);  //1.0*(Toan*3+Ly*2+Hoa)/6);
    return 0;
}
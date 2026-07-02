#include <stdio.h>

int main() {
    
    char mssv[] = "PS49960";
    char hoTen[] = "Vo Nguyen Quoc Viet";
    int namSinh = 1997;
    int tuoi;
    float diemTB = 8.5;

    
    tuoi = 2026 - namSinh;

   
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoTen);
    printf("Nam sinh: %d\n", namSinh);
    printf("Tuoi: %d\n", tuoi);
    printf("Diem Trung Binh: %.1f\n", diemTB);

    return 0;
}
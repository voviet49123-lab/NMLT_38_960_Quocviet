#include <stdio.h>

int main(){

    char mssv[] = "PS49960";
    char HoTen[] = "Vo Nguyen Quoc Viet";
    int t,l,h;
    float tb;
    t = 9;
    l = 7;
    h = 6;
    tb = 1.0*(t*2+l+h)/4;
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho va Ten: %s\n", HoTen);
    printf("Diem Trung Binh: %.1f\n", tb);
    return 0;
}

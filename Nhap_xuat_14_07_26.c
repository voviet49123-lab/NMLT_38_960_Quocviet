#include <stdio.h>
int main(){

    int namSinh,namHientai;
    printf("Hay nhap nam sinh cua nguoi yeu ban: ");
    scanf("%d", &namSinh);
    printf("Ban dang song vao nam bao nhieu: ");
    scanf("%d", &namHientai);
    printf("Nam sinh cua nguoi yeu ban la %d\nNam nay co ay %d tuoi\n", namSinh,namHientai-namSinh);
    return 0;
}
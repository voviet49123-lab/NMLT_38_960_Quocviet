#include <stdio.h>
int main(){

    int namSinh;
    printf("Hay nhap nam sinh cua nguoi yeu ban: ");
    scanf("%d", &namSinh);
    printf("Nam sinh cua nguoi yeu ban la %d\nNam nay co ay %d tuoi\n", namSinh,2026-namSinh);
    return 0;
}
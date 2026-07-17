#include <stdio.h>
int main(){
    float a,b,x;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    if (a==0)
    {
      if (b==0)
      {
        printf(" PT vo so nghiem ");/* code */
      }else
       printf(" PT vo nghiem");
        /* code */
    }else
    {
    x= -b/a;
    printf("Nghiem cua phuong trinh %.1fx +%.1f = 0 la: x= %.1f", a,b,x);}
    return 0;
}

//ax + b = 0 => x = -b/a
//a = 0 =>b =0 => PT vô số nghiệm
//a = 0=> b = 2 => PT vô nghiệm
// a != 0,
#include <stdio.h>
int main(){
    int a,b;
    float x;
    printf("nhap a: ");
    scanf("%d",&a);
    printf("nhap b: ");
    scanf("%d",&b);
    if (a==0)
    {
      printf("phuong trinh vo nghiem");  /* code */
    }else{
    x=-(float) b/a;
    printf(" phuong trinh %dx + %d = 0 co nghiem x = %.2f", a,b,x);}
    return 0;
    

}
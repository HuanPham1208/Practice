/*
1. Viết hàm tìm giá trị của đa thức bậc n tại x (hệ số của đa thức là một mảng số thực). Hàm có dạng double Polynom(double * heso, int n, double x)
2. Xây dựng cấu trúc Complex để đại diện cho một số phức với thành phần thực và ảo đều là số thực. Yêu cầu:  
- Hãy viết các hàm tính tổng, hiệu, tích của hai số phức
- Viết một hàm tính đồng thời tổng và hiệu của hai số phức.
- Viết hàm hiển thị một số phức theo đúng định dạng (a+bj với a là thành phần thực, b là thành phần ảo)
- Viết chương trình chính sử dụng các hàm trên.
*/
#include <stdio.h>
#include <math.h>

double Polynom(double *heso,int n,double x){
    double result=0;
    for(int i=0;i<=n;i++){
        result+=heso[i]*pow(x,i);
    }
    return result;
}

typedef struct Complex{
    double re;
    double im;
} Complex;
Complex add(Complex a, Complex b){
    Complex result;
    result.re = a.re + b.re;
    result.im = a.im + b.im;
    return result;
}
Complex sub(Complex a, Complex b){
    Complex result;
    result.re = a.re - b.re;
    result.im = a.im - b.im;
    return result;
}
int main(){
    double a[10];
    int n;
    double x;
    printf("Nhap bac cua da thuc: ");
    scanf("%d",&n);
    printf("Nhap he so cua da thuc \n ");
    for(int i=0;i<=n;i++){
        printf("Nhap vao he so cua bac %d: ",i);
        scanf("%lf",&a[i]);
    }  
    scanf("%lf",&x);
    printf("Gia tri cua da thuc tai x = %.4lf la: ",x);
    printf("f(%.4lf) = %.4lf\n",x,Polynom(a,n,x));
    Complex a1,b1;
    printf("Nhap so phuc a: ");
    scanf("%lf %lf",&a1.re,&a1.im);
    printf("Gia tri cua so phuc a: %.4lf + %.4lfj\n",a1.re,a1.im);
    printf("Nhap so phuc b: ");
    scanf("%lf %lf",&b1.re,&b1.im);
    printf("Gia tri cua so phuc b: %.4lf + %.4lfj\n",b1.re,b1.im);
    Complex sum = add(a1,b1);
    Complex diff = sub(a1,b1);
    printf("Tong cua 2 so phuc :%.4lf + %.4lfj\n",sum.re,sum.im);
    printf("Hieu cua 2 so phuc :%.4lf + %.4lfj\n",diff.re,diff.im); 
    return 0;
}
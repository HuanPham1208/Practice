/*
ĐỀ BÀI: [C] DIỆN TÍCH SÂN TENNIS CHUẨN

Sân tennis tiêu chuẩn ITF có chiều dài 23.77 m và chiều rộng 10.97 m. Cho số lượng sân n (số nguyên), hãy tính tổng diện tích cần cho n sân:

A = n × 23.77 × 10.97.

Ví dụ: n = 1 → A = 260.7569 m². In với 4 chữ số thập phân.

- Định dạng đầu vào:
Một số nguyên n.

- Ràng buộc đầu vào:
0 <= n <= 10^6.

- Định dạng đầu ra:
Một số thực — tổng diện tích m², 4 chữ số thập phân.
*/
#include <stdio.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    double A = n*23.77*10.97;
    printf("%.4lf", A);
    return 0;
}
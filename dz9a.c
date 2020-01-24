#include <stdio.h> 

int main() {
    float x;
    float x_2, x_3, x_4, x_7;
    scanf("%f", &x);
    x_2 = x*x;
    x_3 = x_2*x;
    x_4 = x_2*x_2;
    x_7 = x_3*x_4;
    printf("%f", x_7);

}
 
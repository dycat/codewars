
#include<stdio.h>



double min(x, y) {
    return x < y ? x : y;
}

int main(void) {
    double z = min(2, 3);
    printf("%f",z);
    return 0;
}
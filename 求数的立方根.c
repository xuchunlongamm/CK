/*************************************************************************
	> File Name: c语言基本运算.c
	> Author:xcl 
	> Mail: 
	> Created Time: 2019年04月18日 星期四 19时03分56秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    scanf("%lf", &a);
    b = pow(a, 1.0 / 3.0);
    printf("%lf", b);
    return 0;
}

/*************************************************************************
	> File Name: 64.20.c
	> Author:xcl 
	> Mail: 
	> Created Time: 2019年04月20日 星期六 19时11分17秒
 ************************************************************************/

#include <stdio.h>

int f(int k, int b, int x) {
    return k * x + b;
}

int main() {
    int k, b;
    scanf("%d%d", &k, &b);
    for (int x = 1; x <= 100; x++) {
        printf("f(%d) = %d\n",x, f(k, x, b));
    }
    return 0;
}

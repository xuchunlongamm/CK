/*************************************************************************
	> File Name: 4.20.c
	> Author:xcl 
	> Mail: 
	> Created Time: 2019年04月20日 星期六 15时13分19秒
 ************************************************************************/

#include <stdio.h>
int main() {
        int n;
        scanf("%d", &n);
        if(n == 0) {
            printf("FOOLISH");
        }
        else if(n < 60) {
            printf("FALL");
        } else if( n < 75) {
            printf("MEDIUM");
        } else if(n <= 100) {
            printf("GOOD");
        }
        return 0;
}

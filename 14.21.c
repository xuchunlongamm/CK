/*************************************************************************
	> File Name: 14.21.c
	> Author:xcl 
	> Mail: 
	> Created Time: 2019年04月21日 星期日 15时16分04秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int h(int *n, int a, int b) {
        int head = 0, end = n - 1, mid;
        while (head <= end) {
            mid = (head + end) >> 1;
            if (n[mid] == b) return mid;
            if (n[mid] < b) {
                head = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }





    return 0;
}

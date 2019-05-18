/*************************************************************************
	> File Name: 111.c
	> Author:爱瑞的LS 
	> Mail:2939720340@qq.com 
	> Created Time: 2019年05月18日 星期六 10时06分35秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[], char **env) {
    char file[100];
    char user[1000];
    int i = 0;
    while(1) {
        if ('U' == env[i][0] && 'S' == env[i][1] && 'E' == env[i][2] && 'R' == env[i][3]) {
            strcpy(user, env[i]);
            break;
        }
        i++;
    }
    strcpy(file, argv[0]);
    if (strcmp(file, "./haizeix") == 0 && strcmp(user, "USERNAME=xcl") == 0) {
        printf("%s\n", user);
        printf("可执行\n");

    } else {
        printf("不可执行\n");
    }
    return 0;
}

/*************************************************************************
	> File Name: 14.20.c
	> Author:xcl 
	> Mail: 
	> Created Time: 2019年04月20日 星期六 15时44分12秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>    
    int main() {
        int a;   
        scanf("%d",&a);
        switch(a){
            case(0):
            exit(0);
            case(1):
            printf("one\n");
            case(2): 
            printf("two\n");
            case(3):
            printf("three\n");break;
            default:
            printf("error\n");            
        }
        return 0;
    }

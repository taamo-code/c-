#include <stdio.h>

// 预定义符号
/* int main(){

    // printf("%s\r\n", __FILE__);
    // printf("%d\r\n", __LINE__);
    // printf("%s\r\n", __DATE__);
    // printf("%s\r\n", __TIME__);

    int i = 0;
    int arr[10] = { 0 };
    FILE* pf = fopen("log.txt", "w");
    for(i = 0; i < 10; i++){

        arr[i] = i;
        fprintf(pf, "file:%s  line:%d  data:%s  time:%s  i=%d\r\n",
                __FILE__, __LINE__, __DATE__, __TIME__, i);

        // 打印函数名
        printf("%s\r\n", __FUNCTION__);
    }

    fclose(pf);
    pf = NULL;
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
} */

// define的使用
/* #define MAX 100
#define STR "hehe"
#define do_forever for(;;)
#define SQUARE(X) X * X
#define PRINT(X) printf("the value of "#X" is %d\r\n", X);
#define CAT(X, Y) X##Y

int main(){

    // do_forever;
    printf("%d\r\n", MAX);
    printf("%s\r\n", STR);
    // #define会把参数完全传出去
    printf("%d\r\n", SQUARE(5));
    printf("%d\r\n", SQUARE(5 + 1));

    int a = 10, b = 20;
    PRINT(a);
    PRINT(b);

    int taamo123 = 2019;
    PRINT(CAT(taamo, 123));

    return 0;
} */

#define DEBUG
// 条件编译
/* int main(){


    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {

// #ifndef
#ifdef DEBUG
        arr[i] = i;
        printf("%d ", arr[i]);
#endif 

// ifh后面为真则编译,为假不编译
#if 1
        printf("%d ", arr[i]);
#endif


    }
    
    return 0;
} */

/* int main(){

#if 1 == 2
    printf("aaaa\r\n");
#elif 2 > 3
    printf("bbbb\r\n");
#else
    printf("cccc\r\n");
#endif
    
    return 0;
} */

#ifndef __TEST_H__
#define __TEST_H__
#endif

#pragma once




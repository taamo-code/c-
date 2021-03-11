#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

// malloc   free
/* int main(){

    // 向内存申请10个整型的空间
    int* p = (int* )malloc(10 * sizeof(int));
    if(p == NULL)
        printf("%s\r\n", strerror(errno));
    else{
        for(int i = 0; i < 10; i++){
            *(p + i) = i;
        }
        for(int i = 0; i < 10; i++)
            printf("%d ", *(p + i));
    }

    // 当动态申请的内存不再使用的时候
    // 就应该还给操作系统
    free(p);
    p = NULL;

    return 0;
} */

// calloc
/* int main(){

    int* p = (int* )calloc(10, sizeof(int));
    if(p == NULL)
        printf("%s\r\n", strerror(errno));
    else{

        int i = 0;
        for(i = 0; i < 10; i++){

            printf("%d ", *(p + i));
        }
    }

    // 当动态申请的内存不再使用的时候
    // 就应该还给操作系统
    free(p);
    p = NULL;

    return 0;
}
 */

// realloc   调整动态开辟空间的大小
/* int main(){

    int* p = (int* )malloc(20);
    if(p == NULL)
        printf("%s\r\n", strerror(errno));
    else{

        for(int i = 0; i < 5; i++){
            *(p + i) = i;
        }
    }

    // 假设malloc开辟的20个空间不能满足我们的使用
    // 希望能够有40个字节的空间
    // 这里就可以使用realloc来调整动态开辟的内存

    // realloc 使用的注意事项
    // 1.如果p指向的空间之后有足够的内存空间可以追加,则直接追加,后返回p
    // 2.如果不够,则会重新找一个新的内存区间开辟,并且把原来的数据拷贝过来
    // 3.需要使用一个新的变量来接收realloc函数的返回值
    int* p2 = realloc(p, 40);
    if(p2 == NULL)
        printf("增加失败");
    else{

        for(int i = 0; i < 10; i++)
            printf("%d ", *(p2 + i));
    }

    // 释放内存
    free(p2);
    p = NULL;
    
    return 0;
} */

// malloc越界访问
/* int main(){

    int* p = (int* )malloc(5 * sizeof(int));
    if(p == NULL)
        return 0;
    else{
        int i = 0;
        // 越界访问了,程序崩溃,假死
        for(i = 0; i < 10; i++){

            *(p + i) = i;
        }
    }

    free(p);
    p = NULL;

    return 0;
} */

// free错误用法
int main(){

    // int a = 10;
    // int* p = &a;
    // *p = 20;

    // // 也可以创建
    // int *pt = realloc(pt, 40);

    // // 对非动态开辟内存的free
    // free(p);
    // p = NULL;

    // // pt++导致pt不在指向动态内存的首地址
    // for(int i = 0; i < 10; i++){

    //     *pt++ = i;
    // }

    // free(pt);
    // pt = NULL; 

    // 重复释放free也会报错

    // 动态开辟内存忘记释放(内存泄漏)
    while(1){
        malloc(1);
    }

    // 使用free释放动态开辟内存的一部分
    return 0;
}










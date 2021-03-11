#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/* void GetMemory(char** p){

    *p = (char* )malloc(100);
}

// // err
// void Test(void){

//     char* str = NULL;
//     GetMemory(str);
//     strcpy(str, "hello, world");
//     printf("%s\r\n", str);

// }

void Test(void){

    char* str = NULL;
    GetMemory(&str);
    strcpy(str, "hello, world");

    printf("hello, world\r\n");
    // printf(str);
    printf("%s\r\n", str);
    free(str);
    str = NULL;
}

int main(){

    Test();
    return 0;
} */

// 返回栈空间地址的问题
// 函数运行完就自动释放了
/* char* GetMemory(void){

    char p[] = "hello, world";
    return p;
}

void Test(void){

    char* str = NULL;
    str = GetMemory();
    printf("%s\r\n", str);
}

int main(){

    Test();

    return 0;
} */

/* struct S
{
    int n;
    // 未知大小的 - 柔性数组成员 - 数组的大小是可以调整的
    int arr[];
};

int main(){

    // struct S s;
    // printf("%d\r\n", sizeof(s));

    struct S* ps = (struct S* )malloc(sizeof(struct S) + 5 * sizeof(int));
    ps->n = 100;
    for(int i = 0; i < 5; i++){

        ps->arr[i] = i;
        printf("%d ", ps->arr[i]);
    }
        
    printf("%d\r\n", sizeof(ps)); 
    return 0;
} */

/* struct S
{

    int n;
    int* arr;
};

int main(){

    struct S* ps = (struct S* )malloc(sizeof(struct S));
    ps->arr = (int* )malloc(5 * sizeof(int));
    int i = 0;
    for(i = 0; i < 5; i++){

        ps->arr[i] = i;
        printf("%d ", ps->arr[i]);
    }
    int* ptr = realloc(ps->arr, 10 * sizeof(int));
    for(i = 5; i < 10; i++){

        ps->arr[i] = i;
        printf("%d ", ps->arr[i]);
    }

    free(ps->arr);
    free(ps);
    ps = NULL;
    ps->arr = NULL;
    return 0;
} */

#define OFFSETOF(struct_name, member_name) (int)&(((struct_name* )0)->member_name)
struct S
{
    char c1;
    int a;
    char c2;
};


int main(){

    // struct S s1;
    printf("%d\r\n", OFFSETOF(struct S, c1));
    printf("%d\r\n", OFFSETOF(struct S, a));
    printf("%d\r\n", OFFSETOF(struct S, c2));
    printf("%d\r\n", 23);

}





























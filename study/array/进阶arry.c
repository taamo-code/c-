#include <stdio.h>
#include <stdlib.h>
/* int main(){

    char *p = "abcdef";
    *p = 'w';
    printf("%s\r\n", p);
    return 0;
}
 */
/* int main(){

    char arr1[] = "abcdef";
    char arr2[] = "abcdef";
    char *p1 = "abcdef";
    char *p2 = "abcdef";
    if(arr1 == arr2)
        printf("hahahahha");
    else
        printf("aaaaaaaaa");
    return 0;
} */

// 二维数组传参及 数组指针的指针
/* // void printf1(int arr[3][4], int x, int y){
    
//      char* (*arr)[10] 
//     for(int i = 0; i < x; i++){

//         for(int a = 0; a < y; a++){

//             printf("%d ", arr[i][a]);
//         }
//         printf("\r\n");
//     }
// }


// void printf2(int (*pa)[4], int x, int y){

//     for(int i = 0; i < x; i++){

//         for(int a = 0; a < y; a++){

            int (*(pa))[a] = 数组指针的指针
//             // printf("%d ", *(*(pa + i) + a));
//             // printf("%d ",(*(pa + i))[a]);
//             // printf("%d ", *(pa[i] + a));
//             printf("%d ", pa[i][a]);
//         }
//         printf("\r\n");
//     }
// }

// int main(){

//     int arr [3][4] = {{1,2,3,4}, {2,3,4,5}, {3,4,5,6}};
//     // arr[1] == *(arr + 1) == *(pa + 1) == pa[1]
//     printf1(arr, 3, 4);
//     printf2(arr, 3, 4);
//     return 0;
// } */


// 函数指针
/* void test(int a, int b){

    printf("%d\r\n", a + b);
}

int main(){

    int a = 10,
        b = 20;

    test(a, b);

    void (*pa)(int, int) = test;
    (*pa)(a, b);
    return 0;
} */


//函数指针的 思考
/* void (*  signal(int, void (*)(int))  )(int);

typedef void(* pfun_t)(int);

pfun_t signal(int, pfun_t);

typedef int uint;

continue */


// 函数指针数组  指向函数指针数组的指针
/* int add(int a, int b){

    return a + b;
}

int sub(int a, int b){

    return a - b;
}

int mul(int a, int b){

    return a * b;
}

int div(int a, int b){

    return a / b;
}

int main(){

    int* arr[5];
    // int (*pa)(int, int) = add;   //函数指针
    int (*parr[4])(int, int) = {add, sub, mul, div};
    int (*(*parr[4]))(int, int)     // 指向函数指针数组的指针

    for(int i = 0; i < 4; i++){

        printf("%d\r\n", parr[i](2, 3));
    }
    return 0;
} */

/* char* my_strcpy(char* dest, const char* src){



}
int main(){

    char* (*pf)(char*, const char*) = my_strcpy;
    char* (*pfarr[5])(char*, const char*) = {my_strcpy, my_strcpy1, my_strcpy2, my_strcpy3};
    return 0;
} */

// 函数指针的使用
/* int add(int a, int b){

    return a + b;
}

int sub(int a, int b){

    return a - b;
}

int mul(int a, int b){

    return a * b;
}

int div(int a, int b){

    return a / b;
}


int main(){

    int* arr[5];
    // int (*pa)(int, int) = add; 
    
    int input = 0,
        a = 0,
        b = 0;

    int (*parr[5])(int, int) = {0, add, sub, mul, div};

    do{

        printf("请选择");
        scanf("%d", &input);
        printf("请输入两位数");
        scanf("%d%d", &a, &b);

        if(input >= 1 && input < 4)
            printf("%d\r\n", parr[input](a, b));
        else if(input == 0){

            printf("退出");
            break;
        }
        else 
            printf("输入错误，请重新输入");

    }while(input);
    
    return 0;
} */

// void* 类型的指针
/* int main(){

    int a = 10;
    // int* pa = &a;
    // char* pc = &a;

    // char ch = 'W';
    void* p = &a;

    // *p = 0;
    // p++;
    // p = &ch;
    // void* 类型的指针，可以接受任意类型的地址
    // void* 类型的指针，不能进行解引用操作
    // void* 类型的指针，不能进行+-整数的操作
    return 0;
} */

// void qsort(void *base, 
//             size_t nitems, 
//             size_t size, 
//             int (*compar)(const void *, const void*)
//             );
struct Stu
{
    char name[20];
    int age;
};


int cmp_int(const void* e1, const void* e2){

    return *(int*)e1 - *(int*)e2;
}
void test1(){

    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int sz = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, sz, sizeof(arr[0]), cmp_int);
    for(int i = 0; i < sz; i++){
        printf("%d ", arr[i]);
    }
}

int cmp_stu_by_age(const void* e1, const void* e2){

    return ((struct Stu*)e1) -> age - ((struct Stu*)e2) ->age;
}

void test2(){

    struct Stu s[] = {{"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10}};
    int sz = sizeof(s) / sizeof(s[0]);
    qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
    
    // 第一个参数:带排序数组的首元素地址
    // 第二个参数:带排序数组的元素个数
    // 第三个参数:带排序数组的每个元素的大小 - 单位是字节
    // 第四个参数:是函数指针,比较两个元素的所有函数的地址 - 
    //             这个函数使用者自己实现函数指针的连个参数是:带比较的两个元素的地址
}


int main(){
    
    test1();
    test2();

    return 0;
}












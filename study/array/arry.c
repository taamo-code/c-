#include <stdio.h>
#include <string.h>

/* int main(){
    int arr[10] = {1, 2, 3};
    char arr2[5] = {'a', 98, 'c'};
    char arr3[5] = "ab";
    char arr4[] = "abcdef";
    printf("%lu\n", sizeof(arr4)); //7 计算大小，内存空间包括\0
    printf("%lu\n", strlen(arr4)); //6 计算长度，遇到\0就停止，不算长度
    return 0;
} */

/* int main(){
    char arr[] = "abc";
    char arr2[] = {'a', 'b', 'c'};
    printf("%lu\n", sizeof(arr));
    printf("%lu\n", sizeof(arr2));
    printf("%lu\n", strlen(arr)); // strlen默认返回的是无符号整形，(int)strlen(arr)
    printf("%lu\n", strlen(arr2));// 随机数，因为没有\0
    return 0; 
} */

/* // 二维数组
int main(){
    int arr[3][4] = {{1, 2, 3}, 4, 5, 6};
    int arr2[5][6];
    int arr3[] = {1, 2, 3, 4};
    int arr4[][4] = {1, 2, 3, 4, 5, 6,}; // 二维数组行可以省略，列不能省略
    return 0;
} */

/* // 数组首地址
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("%p\n", arr);    // 首地址
    printf("%p\n", &arr[0]);// 首地址
    printf("%d\n", *arr);

    // 一般数组名就是数组首地址，两种特殊情况
    // 1. sizeof(数组名) -- 计算的是整个数组的大小，单位是字节
    // 2. &数组名 -- 取出的是整个数组的首地址
    printf("%p\n", &arr+1);
    printf("%d\n", sizeof(arr));
    return 0;
} */



int main(){

    int a[] = {1, 2, 3, 4, 5};
    printf("%p\r\n", &a);
    printf("%p\r\n", &a + 1);
    return 0;
}




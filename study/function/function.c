#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// //定义一个函数 实际参数 比大小 传值调用
// 实际参数 可以是常量、变量、表达式、函数。必须有确定的值可以传递
// int get_max(int x, int y){
//     if(x > y)
//         return x;
//     else
//         return y;   
// }
//
// int main(){
//     int a, b;
//     scanf("%d%d", &a, &b);
//     int max = get_max(a, b + 1);
//     int max = get_max(a, get_max(200, 300));  //可以是函数
//     printf("%d\n", max);
//     return 0;
// }

// 定义一个函数 形式参数 交换 传址调用
// 只有在函数被调用的过程中才回实例化，函数执行完成就自动销毁。
// 因此行参只在函数中有效
// //失败，因为x，y和a，b地址不一样，使用point解决
// void Swap(int* x, int* y){
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }
// int main(){
//     int a = 10;
//     int b = 20;
//     Swap(&a,&b);
//     printf("a = %d  b = %d\n", a, b);
// }

// 行参实例化之后相当于实参的一份临时拷贝

// 素数
// int is_prime(int x){
//     for(int j = 2;j <= sqrt(x);j++){    //sqrt()开平方
//         if(x%j == 0)
//             return 0; 
//     }
//     return 1;
// }
// 
// int main(){
//     for(int i = 0;i <= 200;i++){
//         if(is_prime(i) == 1)
//             printf("%d", i);   
//     }
// }

// 闰年
// int is_leap_year(int y){
//     if((y%4==0&&y%100!=0) || (y%400 == 0)){
//         return 1;
//     }else 
//         return 0;
// }
// 
// int main(){
//     for(int year = 1000;year <= 2000;year++){
//         if(1 == is_leap_year(year)){
//             printf("%d ", year);
//         }
//     }
// }

// // 函数 二分查找 binary_search
// int binary_search(int arr[], int k, int ret){
//     // int ret = sizeof(arr)/sizeof(arr[0]);
//     // 数组传参只会把数组的首地址传过来，所以不能在这里求长度
//     int left = 0,right = ret - 1,a;
//     while (left <= right)
//     {
//         a = (left+right)/2;
//         if(arr[a] < k){
//             left = a + 1;
//         }else if(arr[a] > k){
//             right = a - 1;
//         }else{
//             return a;
//         }
//     }
//     return 0;   
// }
// 
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int k = 7;
//     int ret = sizeof(arr)/sizeof(arr[0]);
//     int rum = binary_search(arr, k, ret);
//     if(rum == 0){
//         printf("找不到指定数字");
//     }else{
//         printf("找到了，下标是%d\n", rum);
//     }
//     return 0;
// }

/* // 嵌套调用
void new_lint(){
    printf("hello,world\n");
}

void three_line(){
    for(int i = 0;i<3;i++){
        new_lint();
    }
}

int main(){
    three_line();
    return 0;
} */

/* // 链式访问
int main(){
    // printf return number is print the number of
    // the number returnned is the number that was printed
    // 返回的数字是打印的个数
    printf("%d", printf("%d", printf("%d", 43)));
    return 0;
} */

/* // 函数的声明
#include "add.h"

int main(){
    int a = 10;
    int b = 20;
    Swap(&a, &b);
    printf("a = %d  b = %d\n", a, b);
    printf("a = %d  b = %d\n", a, b);
    printf("a = %d  b = %d\n", a, b);
    printf("a = %d  b = %d\n", a, b);
    printf("a = %d  b = %d\n", a, b);
    return 0;
} */

/*//递归，输入的字符，隔一个空格打印一个字符
 void print(int a){
    if(a > 9){
        print(a/10);
    }
    printf("%d ", a%10);
}

int main(){
    int num = 0;
    scanf("%d", &num);
    print(num);
    return 0;
} */

/* // 判断字符串长度的三种方法，库函数，自定义函数，递归
第二种方法，自定义函数
// int my_strlen(char* a){
//     int sum = 0;
//     while(*a != '\0'){
//         sum += 1;
//         a++;
//     }
//     return sum; 
// }

第三种方法，不创建临时变量，使用递归来判断
// int my_strlen(char* a){
//         if(*a != '\0'){
//             return 1 + my_strlen(a + 1);
//         }else{
//             return 0;
//         }
// }

int main(){
    char arr[] = "hello,world";
    第一种方法，使用库函数
    // int a = strlen(arr);
    int a = my_strlen(arr);
    printf("%d\n", a);
    return 0;
} */

/* // 求n的阶乘两种方法
// int fac(int a){
//     int ret = 1;
//     for(int i = 1;i <= a;i++){
//         ret *= i;
//     }
//     return ret;
// }

int fac(int a){
    // The first way
    // while(a != 1){
    //     return a * fac(a - 1);
    // }
    // return 1;

    // The second way
    // if(a <= 1){
    //     return 1;
    // }else{
    //     return a * fac(a - 1);
    // }

}
int main(){
    int a;
    scanf("%d", &a);
    int ret = fac(a);
    printf("%d", ret);
    return 0;
} */

/* // 斐波那契数列求解 递归和循环
// int fib(int n){
//     if(n <= 2)
//         return 1;
//     else{
//         return fib(n-1) + fib(n-2);
//     }
// }
int fib(int n){
    int a, b, c;
    a = b = c = 1;
    while(n > 2){
        c = a+b;
        a = b;
        b = c;
        n--;
    }
    return c;
}

int main(){
    int n;
    scanf("%d", &n);
    int ret = fib(n);
    printf("%d\n", ret);
    return 0;
} */
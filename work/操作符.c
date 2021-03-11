#include <stdio.h>
#include <math.h>
#include <string.h>

// -1的原 反 补
// 原码: 10000000 00000000 00000000 00000001
// 反码: 11111111 11111111 11111111 11111110   // 符号位不变,其余按位取反
// 补码: 11111111 11111111 11111111 11111111   // 反码加1

// 统计二进制中1的个数, 3种方法   重要!!!!!
/* // 利用余1,判断
// int count_bit_one(unsigned int a){ // 无法计算负数,但是可以用unsigned把有符号数改为无符号数
//     int count = 0;
//     while (a)
//     {
//         if(a % 2 == 1){
//             count++;
//         }
//         a /= 2;
//     }
//     return count;
// }

// 把每个二进制位,分别 & 1. 根据结果判断
// int count_bit_one(int a){
//     int count = 0;
//     for(int i = 0; i < 32; i++){
//         if(1 == ((a >> i) & 1)){
//             count++;
//         }
//     }
//     return count;
// }

//最优解,
// int count_bit_one(int a){
//     // 13
//     // a = 1101
//     // a-1 = 1100
//     // a = a & a - 1 = 1100

//     // a = 1100
//     // a - 1 =1011
//     // a = a & a - 1 = 1000

//     // a = 1000
//     // a - 1 = 0111
//     // a = a & a - 1 = 0000

//     int count;
//     while(a){
//         a = (a & (a-1));
//         count++;
//     }
//     return count;
// }

int main(){
    int a;
    scanf("%d", &a);
    int count = count_bit_one(a);
    printf("%d\n", count);
    return 0;
} */

// 求二进制中不同位的个数
/* int get_diff_bit(int a, int b){
    int count = 0;
    int tmp = a ^ b;
    while(tmp){
        tmp = tmp & (tmp - 1);
        count++;
    }
    return count;
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int count = get_diff_bit(a, b);
    printf("%d\n", count);
    return 0;
} */

// 不增加第三个变量,实现交换数值. 
/* int main(){
   
    int a = 3;
    int b = 5;
    // int tmp = a;
    // b = a;
    // a = tmp;

    // 可能会溢出
    // a = a + b;
    // b = a - b;
    // a = a - b;

    // 两个数异或,再拿异或的结果异或其中一个可以得到另一个里面的数值
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("%d  %d",a ,b);
    return 0;
} */


// 使用指针打印数组内容
/* void print(int* p, int sz){
    for(int i = 0; i < sz; i++){
        printf("%d\n", *(p + i));
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(arr) / sizeof(arr[0]);
    print(arr, sz);
    return 0;
}
 */

// 打印100 -- 200之间的素数
/* int main(){
    int i = 0, sum = 0;
    for(i = 100; i <= 200; i++){
        int j;
        for(j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                break;
            }
        }
        if(j > sqrt(i)){
            sum++;
        }   
    }
    printf("%d\n", sum);
    return 0;
}
 */

// 递归实现字符串逆序排列,,,,     重要!!!!!!!
/* int my_strlen(char* p){
    int count = 0;
    while(*p != '\0'){
        p++;
        count++;
    }
    return count;
}
// void reverse_string(char* arr){
//     char right = strlen(arr) - 1;
//     char left = 0;
//     while (left < right)
//     {
//         int tmp = arr[right];
//         arr[right] = arr[left];
//         arr[left] = tmp;
//         left++;
//         right--;
//     }  
// }

void reverse_string(char* arr){
    int tmp = arr[0];
    int len = my_strlen(arr);
    arr[0] = arr[len - 1];
    arr[len - 1] = '\0';
    if(strlen(arr + 1) > 1)
    reverse_string(arr + 1);
    arr[len - 1] = tmp;
}

int main(){
    char arr[] = {"hello,world"};
    reverse_string(arr);
    printf("%s ", arr);
    return 0;
} */

// 输入一个数,实现每个数字相加.1234 1+2+3+4
/* int DigitSum(int a){
    if(a > 9){
        return DigitSum(a / 10) + a % 10;
    }
    else{
        return a;
    }
}

int main(){
    int a;
    scanf("%d", &a);
    int sum = DigitSum(a);
    printf("%d\n", sum);
    return 0 ;
} */

// 求n的k次方
/* double Pow(int a, int b){
    if(b < 0){
        return (1.0 / (Pow(a, -b)));
    }
    if(b == 0){
        return 1;
    }else{
    return a * Pow(a, b - 1);
    }
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    double rum = Pow(a, b);
    printf("%lf\n", rum);
    return 0;
} */





strlen();








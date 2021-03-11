#include <stdio.h>

// 声明一个结构体类型
// 声明一个学生类型，是想通过学生类型来创建学生变量（对象）
// 描述学生：属性 + 名字 + 电话 + 性别 + 年龄
// struct:结构体关键字
// Stu：结构体标签
// 。。。 成员变量
struct Stu{
    
    char name[20];
    char tele[12];
    char sex[10];
    int age;
}s4, s5, s6;

// s3, s4, s5, s6都是全局变量
struct Stu s3;

// 匿名结构体类型，只能在声明的时候创建结构体变量
struct {

    int a;
    int c;
}sa;

// 结构体重命名
typedef struct Node
{

    int data;
    struct  Node* next;
}Node;

struct T{

    double a;
    int c;
};

struct s{

    char c;
    struct  T st;
    int a;
    int b;
    double e;
};

// int main(){

//     int num;
//     char c;
//     // 创建的结构体变量
//     // struct Stu s1;
//     // struct Stu s2;

//     struct s s1 = {'a', {3.14, 1}, 2, 3, 3.14};
//     printf("%c, %lf, %d, %d, %d, %lf", s1.c, s1.st.a, s1.st.c,
//                                         s1.a, s1.b, s1.e);

//     struct T t1 = {3.14, 4};

//     return 0;
// }

// 位段 - 二进制位
// 按后面的计算
/* struct gh
{
    int a: 2;
    int b: 5;
    int c: 10;
    int d: 30;
};

int main(){

    struct gh s1;
    printf("%d\r\n", sizeof(s1));

    return 0;
} */


// 枚举类型     大小为整型
/* enum Sex{

    // 枚举的可能取值-枚举常量，后面带数字可以改变默认编号
    male = 2,
    female = 4,
    secret = 8
};

enum Color{

    red,        // 0
    yellow,     // 1
    blue        // 2
};

int main(){

    enum Sex s = male;
    enum Color c = yellow;
    return 0;
} */

// 联合，共用体    解决大小端
union Un{

    char c;
    int i;
    short a[7];
};


int main(){

    union Un u;
    printf("%d\r\n", sizeof(u));        // 16

    printf("%p\r\n", &u);
    printf("%p\r\n", &(u.c));
    printf("%p\r\n", &(u.i));

    u.i = 1;
    if(u.c == 1)
        printf("大端");
    else
        printf("小端");
    return 0;
}













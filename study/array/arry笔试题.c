#include <stdio.h>
#include <string.h>

int aaaa(){

    // int a[] = {1, 2, 3, 4};

    // // 1, sizeof(数组名) - 数组名表示整个数组
    // // 2, &数组名 - 数组名表示整个数组
    
    // printf("%d\n",sizeof(a));           // 16
    // printf("%d\n",sizeof(a+0));         // 首元素地址,32位4 地址
    // printf("%d\n",sizeof(*a));          // 4 - *a就是首元素
    // printf("%d\n",sizeof(a+1));         // 4,同a+0 地址
    // printf("%d\n",sizeof(a[1]));        // 4
    // printf("%d\n",sizeof(&a));          // 4 / 8
    // printf("%d\n",sizeof(*&a));         // 4     16
    // printf("%d\n",sizeof(&a+1));        // 4地址
    // printf("%d\n",sizeof(&a[0]));       // 4 / 8
    // printf("%d\n",sizeof(&a[0]+1));     // 4地址


    // char arr[] = {'a','b','c','d','e','f'};
/*     // printf("%d\n", sizeof(arr));        // 6
    // printf("%d\n", sizeof(arr+0));      // 4 / 8
    // printf("%d\n", sizeof(*arr));       // err6     1 
    // printf("%d\n", sizeof(arr[1]));     // 1

    // printf("%d\n", sizeof(&arr));       // 4 / 8
    // printf("%d\n", sizeof(&arr+1));     // 4 / 8
    // printf("%d\n", sizeof(&arr[0]+1));  // 4 / 8

    // printf("%d\n", strlen(arr));        // 随机
    // printf("%d\n", strlen(arr+0));      // 随机
    // // printf("%d\n", strlen(*arr));       // err
    // // printf("%d\n", strlen(arr[1]));     // err
    // printf("%d\n", strlen(&arr));       // 随机
    // printf("%d\n", strlen(&arr+1));     // 随机 差6
    // printf("%d\n", strlen(&arr[0]+1));  // 随机 差1 */



    char arr[] = "abcdef";
/*     printf("%d\n", sizeof(arr));            // 7       
    printf("%d\n", sizeof(arr+0));          // 4 / 8
    printf("%d\n", sizeof(*arr));           // 1
    printf("%d\n", sizeof(arr[1]));         // 1
    printf("%d\n", sizeof(&arr));           // 4 / 8
    printf("%d\n", sizeof(&arr+1));         // 4 / 8
    printf("%d\n", sizeof(&arr[0]+1));      // 4 / 8
    printf("%d\n", strlen(arr));            // 6
    printf("%d\n", strlen(arr+0));          // 6
    // printf("%d\n", strlen(*arr));           // err
    // printf("%d\n", strlen(arr[1]));         // err
    printf("%d\n", strlen(&arr));           // 6
    printf("%d\n", strlen(&arr+1));         // 随机 差6
    printf("%d\n", strlen(&arr[0]+1));      // 随机 差1 */



    char *p = "abcdef";
/*     printf("%d\n", sizeof(p));          // 4 / 8
    printf("%d\n", sizeof(p+1));        // 4 / 8
    printf("%d\n", sizeof(*p));         // 1
    printf("%d\n", sizeof(p[0]));       // 1  p[0] == *(p + 0)
    printf("%d\n", sizeof(&p));         // 4 / 8
    printf("%d\n", sizeof(&p+1));       // 4 / 8
    printf("%d\n", sizeof(&p[0]+1));    // 4 / 8
    printf("%d\n", strlen(p));          // 6
    printf("%d\n", strlen(p+1));        // 5
    // printf("%d\n", strlen(*p));         // err
    // printf("%d\n", strlen(p[0]));       // err  
    printf("%d\n", strlen(&p));         // 随机
    printf("%d\n", strlen(&p+1));       // 随机+1
    printf("%d\n", strlen(&p[0]+1));    // 5 */


    int a[3][4] = {0};
/*     printf("%d\n",sizeof(a));               // 48  二维数组a是首元素地址,第一行的地址
    printf("%d\n",sizeof(a[0][0]));         // 4
    printf("%d\n",sizeof(a[0]));            // 16
    printf("%d\n",sizeof(a[0]+1));          // 
    printf("%d\n",sizeof(*(a[0]+1)));
    printf("%d\n",sizeof(a+1));
    printf("%d\n",sizeof(*(a+1)));
    printf("%d\n",sizeof(&a[0]+1));
    printf("%d\n",sizeof(*(&a[0]+1)));
    printf("%d\n",sizeof(*a));
    printf("%d\n",sizeof(a[3]));
    return 0; */

    return 0;
}

// 试题1
/* int main()
{
    int a[5] = { 1, 2, 3, 4, 5 };

    // 1, sizeof(数组名) - 数组名表示整个数组
    // 2, &数组名 - 数组名表示整个数组
    int *ptr = (int *)(&a + 1);
    printf( "%d,%d", *(a + 1), *(ptr - 1));
    return 0;
}
 */

// 试题2
//由于还没学习结构体，这里告知结构体的大小是20个字节
/* struct Test
{
    int Num;
    char *pcName;
    short sDate;
    char cha[2];
    short sBa[4];
}*p;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
int main()
{
    p = 0x100000;
    printf("%p\n", p + 0x1);
    printf("%p\n", (unsigned long)p + 0x1);
    printf("%p\n", (unsigned int*)p + 0x1);
    // 指针 +- 整数
    // 取决于指针类型
    return 0;
} */

// 试题3
/* int main()
{
    int a[4] = { 1, 2, 3, 4 };
    int *ptr1 = (int *)(&a + 1);
    // int *ptr2 = (int* )((int)a + 1);
    // printf( "%x,%x", ptr1[-1], *ptr2);
    printf( "%x", ptr1[-1]);
    printf("aaaa");
    return 0;
} */

// 试题4
/* #include <stdio.h>
int main()
{
    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
    int *p;
    p = a[0];
    printf( "%d", p[0]);
    return 0;
} */

// 试题5
/* int main()
{
    int a[5][5];
    int(*p)[4];
    p = a;
    printf( "%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
    return 0;
} */


/* int main()
{
    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int *ptr1 = (int *)(&aa + 1);
    int *ptr2 = (int *)(*(aa + 1));
    printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));
    return 0;
} */


int main()
{
 char *a[] = {"work","at","alibaba"};
 char**pa = a;
 pa++;
 printf("%s\n", *pa);
 return 0;
}












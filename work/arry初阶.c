#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <math.h>

// 逆序字符串
/* void reverse(char* str){
    assert(str);
    int len = strlen(str);

    char* left = str;
    char* right = str + len - 1;

    while(left < right){

        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }  
}

int main(){

    char arr[256] = {0};
    // scanf("%s", arr);
    gets(arr);
    reverse(arr);

    printf("%s\r\n", arr);
    return 0;
} */



// 水仙花数
/* int main(){

    int i = 0;
    for(i = 0; i < 100000; i++){
        // 判断i是否为水仙花数(自幂数)
        // 1,计算i的位数,   n位数
        int n = 1;
        int tmp = i;
        int sum = 0;
        while (tmp /= 10){

            n++;
        }
        // 2,计算i的每一位的n次方之和  sum
        tmp = i;
        while (tmp){
            // pow求次方
            sum += pow(tmp % 10, n);
            tmp /= 10;
        }
        
        // 3,比较i == sum
        if(i == sum)
            printf("%d ", i);

    }
    return 0;
} */


// 打印菱形
/* int main(){

    int line = 0;
    scanf("%d", &line);

    // 打印上半部分
    for(int i = 0; i < line; i++){

        for(int a = 0; a < line - 1 - i; a++){

            printf(" ");
        }
        for (int a = 0; a < 2*i + 1; a++){
            
            printf("*");
        }
        printf("\r\n");
        
    }

    // 打印下半部分
    for(int i = 0; i < line - 1; i++){

        for(int a = 0; a <= i; a++){

            printf(" ");
        }
        for(int a = 0; a < (line - 1 - i) * 2 - 1; a++){
            printf("*");
        }
        printf("\r\n");
    }

    return 0;
} */

// 一块钱一瓶汽水,连个汽水瓶可以换一个,求可以喝多少
/* int main(){

    int money = 0,
        total = 0,
        empty = 0;

    scanf("%d", &money);

    total = empty = money;

    while (empty >= 2){
        
        total += empty / 2;
        empty = empty / 2 + empty % 2;
    }
    printf("total = %d\r\n", total);
    
    return 0;
} */

// 数组,奇数,偶数分开
/* void prinf(char arr[], int sz){

    for(int i = 0; i < sz; i++){

        printf("%d", arr[i]);
    }
    printf("\r\n");
}

void move(char arr[], int sz){

    int left = 0;
    int right = sz - 1;

    while (left < right){

        while(left < right && arr[left] % 2 == 1){

            left++;
        }

        while(left < right && arr[right] % 2 == 0){

            right--;
        }

        if(left < right){

            char tmp = arr[left];
            arr[left] = arr[right];
            arr[right] = tmp;
        }
    }
    
}


int main(){

    char arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sz = sizeof(arr) / sizeof(arr[0]);
    move(arr, sz);
    prinf(arr, sz);
    return 0;
} */

// 整型提升
/* int main(){

    unsigned char a = 200;
    unsigned char b = 100;
    unsigned char c = 0;


    c = a + b;

    printf("%d, %d", a + b, c); 
    return 0;
} */

// 大小端存储
/* int main(){

    unsigned int a = 0x1234;
    unsigned char b = *(unsigned char*)&a;
    printf("%d\r\n", b);
    return 0;
} */

// 127 + 1 == —128

// 杨辉三角
/* int main(){

    int i,
        j;
    int arr[10][10] = {0};
    for (i = 0; i < 10; i++){

        for(j = 0; j < 10; j++){

            if(j == 0)
                arr[i][j] = 1;
            if(j == i)
                arr[i][j] = 1;
            if(i >= 2 && j >= 1)
                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
        }
    }

    for(i = 0; i < 10; i++){

        for(j = 0; j <= i; j++){

            printf("%d ", arr[i][j]);
        }
        printf("\r\n");
    }

    return 0;
} */

// a, 不是我
// b, 是c
// c, 是d
// d, c在胡说
/* int main(){

    int killer = 0;
    for(killer = 'a'; killer <= 'd'; killer++){

        if((killer != 'a') + (killer == 'c') + 
            (killer == 'd') + (killer != 'd') == 3){

                printf("killer = %c\n", killer);
            }
                
            
    }
    return 0;
} */

// 判断题
/* int main(){

    int a = 0,
        b = 0,
        c = 0,
        d = 0,
        e = 0;

    for(a = 1; a <= 5; a++){

        for(b = 1; b <= 5; b++){

            for(c = 1; c <= 5; c++){

                for(d = 1; d <= 5; d++){

                    for(e = 1; e <= 5; e++){

                        if(((b == 2) + (a == 3) == 1) &&
                            ((b == 2) + (e == 4) == 1) &&
                            ((c == 1) + (d == 2) == 1) &&
                            ((c == 5) + (d == 3) == 1) &&
                            ((e == 4) + (a == 1) == 1)){

                                if(a*b*c*d*e == 120)
                                    printf("a = %d, b = %d, c = %d, d = %d, e = %d", a, b, c, d, e);
                            }
                    }
                }
            }
        }
    }
    return 0;
} */

// 判断题
/* int main(){

    int* p = NULL;
    int arr[10] = {0};

    // a,p = arr
    // b,int (*ptr)[10] = &arr;
    // c,p = &arr[0];
    // d,p = &arr;              err

    a,数组名arr和&arr是一样的       err
    b,sizeof(arr), arr表示整个数组
    c,&arr, arr表示整个数组
    d,除了sizeof(arr)和&arr中的数组名,其他地方出现的数组名arr,都是数组首元素的地址
    return 0;
} */















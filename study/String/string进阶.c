#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
// my_strcpy    高级实现方法
/* char* my_strcpy(char* dest, const char* src){

    assert(dest != NULL);
    assert(src != NULL);

    char* ret = dest;
    while (*dest++ = *src++)
    {
    
    }
    return ret;
    
}

int main(){

    char arr1[] = "abcdefhi";
    char arr2[] = "bit";

    // 第二个拷贝至第一个
    my_strcpy(arr1, arr2);
    printf("%s\n", arr1);
    return 0;
} */


// strcat 字符串添加函数
/* int main(){

    // char arr1[30] = "abcd";
    char arr1[30] = "abcd\0xxxxxxxx";
    char arr2[] = "world";

    strcat(arr1, &("aaaaa"));
    printf("%s\r\n", arr1);
    return 0;
} */

// strcmp 字符串比较函数
/* int my_strcmp(const char* str1, const char* str2){

    assert(str1 && str2);
    while(*str1 == *str2){

        if(*str1 == '\0')
            return 0;
        *str1++;
        *str2++;
    }

    return (*str1 - *str2);
}

int main(){

    
    char* p1 = "abc";
    char* p2 = "cbc";
    // 大于返回>0, 小于返回<0, 等于返回0
    // 第一个和第二个比较，按一个字符的ASCII值比较，相同就进一位
    // int ret = strcmp(p1, p2);
    int ret = my_strcmp(p1, p2);
    printf("%d\r\n", ret);
    return 0;
}
 */

// strncpy
/* int main(){

    char arr1[10] = "abc";
    char arr2[] = "hello.bit";

    // 不会添加\0,如果拷贝的值大于arr2，后面则会补0
    strncpy(arr1, arr2, 5);

    for(int i = 0; i < 10; i++){

        printf("%c\r\n", arr1[i]);
    }
    
    
    return 0;
} */

// strncat
/* int main(){

    char arr1[30] = "hello\0xxxxxx";
    char arr2[] = "world";
    // 添加完毕后会加\0, 添加的如果超过arr2的大小，不会继续添加
    strncat(arr1, arr2, 8);             
    return 0;
} */

// strncmp
/* int main(){

    const char* pt1 = "abcd";
    const char* pt2 = "cade";
    int ret = strncmp(pt1, pt2, 4);
    printf("%d\r\n", ret);

    return 0;
} */

// strstr       字符串字段判断函数
// kmp 算法  可以了解
/* char* my_strstr(const char* p1, const char* p2){

    assert(p1 != NULL);
    assert(p2 != NULL);

    char* s1 = NULL;
    char* s2 = NULL;
    char* cur = (char* )p1;
    
    if(*p2 == '\0')
        return (char* )p1;

    while(*cur){

        s1 = cur;
        s2 = (char* )p2;
        // *s1不等于0
        while(*s1 && *s2 && *s1 == *s2){

            s1++;
            s2++;
        }
        if(*s2 == '\0')
            return cur;
        if(*s1 == '\0')
            return NULL;

        cur++;
    }
    return NULL;
}
int main(){

    char* p1 = "abcddedef";
    char* p2 = "def";
    // char* ret = strstr(p1, p2);
    char* ret = my_strstr(p1, p2);
    if(ret == NULL)
        printf("不存在");
    else
        printf("%s\r\n", ret);
    return 0;
} */

// strtok       分隔符函数
/* int main(){

    char arr = "www.baidu.com@123";
    char* p = "@.";

    char buf[1024] = {0};

    strcpy(buf, arr);

    char* ret = NULL;
    for(ret = strtok(buf, p); ret != NULL; ret = strtok(NULL, p))
        printf("%s\r\n", ret);

    return 0;
} */

// strerror
/* int main(){

    // 每个错误码对应每个错误信息
    // 0 - No error
    // 1 - Operation not permitted
    // 2 - No such file or directory
    // errno是一个全局的错误码的变量
    // 当c语言的库函数在执行过程中,发生了错误,就会把对应的错误码,赋值到errno中

    char* str = strerror(errno);
    printf("%s\r\n", str);
    return 0;
} */
























#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

/* int main(){

    // ..表示上一级路径
    // ,表示当前路径
    FILE* pf = fopen("test.txt", "r");
    if(pf == NULL){

        printf("%s\r\n", strerror(errno));
        return 0;
    }

    // 打开文件
    // 读文件
    // 关闭文件
    fclose(pf);
    pf = NULL;
    printf("打开成功\r\n");
        
    return 0;
} */

// fputc写文件
/* int main(){

    // ..表示上一级路径
    // ,表示当前路径
    FILE* pfWrite = fopen("test1.txt", "w");
    if(pfWrite == NULL){

        printf("%s\r\n", strerror(errno));
        return 0;
    }

    // 写文件
    fputc('b', pfWrite);
    fputc('i', pfWrite);
    fputc('t', pfWrite);
    // 读文件
    // 关闭文件
    fclose(pfWrite);
    pfWrite = NULL;
    printf("打开成功\r\n");
        
    return 0;
} */

// fgetc读文件
/* int main(){

    // ..表示上一级路径
    // ,表示当前路径
    FILE* pfRead = fopen("test1.txt", "r");
    if(pfRead == NULL){

        printf("%s\r\n", strerror(errno));
        return 0;
    }

    // 读文件
    printf("%c\r\n", fgetc(pfRead));
    printf("%c\r\n", fgetc(pfRead));
    printf("%c\r\n", fgetc(pfRead));

    // 读文件
    // 关闭文件
    fclose(pfRead);
    pfRead = NULL;
    printf("打开成功\r\n");
        
    return 0;
} */

// stdin键盘输入,屏幕打印
/* int main(){

    char ch = fgetc(stdin);
    fputc(ch, stdout);
    return 0;
} */

// fgets读文件
/* int main(){

    char buf[1024] = {0};
    FILE* pfread = fopen("test.txt", "r");
    if(pfread == NULL){

        printf("%s\r\n", strerror(errno));
    }


    fgets(buf, 1024, pfread);
    // printf("%s", buf);
    puts(buf);

    fgets(buf, 1024, pfread);
    // printf("%s", buf);
    puts(buf);

    fclose(pfread);
    pfread = NULL;
    return 0;
} */

// fputs写文件
/* int main(){

    char buf[1024] = {0};
    FILE* pf = fopen("test.txt", "w");
    if(pf == NULL){

        printf("%s\r\n", strerror(errno));
    }

    fputs("hello,world\r\n", pf);
    fputs("hello,world\r\n", pf);

    fclose(pf);
    pf = NULL;
    return 0;
} */

// 键盘输入一行,读取一行
/* int main(){

    char buf[1024] = {0};
    // //  从标准输入流读取
    // fgets(buf, 1024, stdin);
    // // 输出到标准输出流
    // fputs(buf, stdout);
    gets(buf);
    puts(buf);
    return 0;
} */

// fprintf 格式化写文件
/* struct S
{
    int n;
    float score;
    char arr[10];
};

int main(){

    struct S s = {100, 3.14, "hello"};
    FILE* pf = fopen("test.txt", "w");
    if(pf == NULL)
        return 0;
    fprintf(pf, "%d %f %s", s.n, s.score, s.arr);

    fclose(pf);
    pf = NULL;
    return 0;
} */

// fscanf 写入
/* struct S
{
    int n;
    float score;
    char arr[10];
};

int main(){

    struct S s = {0};
    FILE* pf = fopen("test.txt", "r");
    if(pf == NULL)
        return 0;
    
    // fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
    // printf("%d %f %s", s.n, s.score, s.arr);

    fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
    fprintf(stdout, "%d %.3f %s", s.n, s.score, s.arr);


    fclose(pf);
    pf = NULL;
    return 0;
} */

// sscanf   sprintf
/* struct S
{
    int n;
    float score;
    char arr[10];
};

int main(){

    struct S s = {100, 3.14, "hello"};
    struct S tmp = {0};
    char buf[1024] = {0};

    // 把格式化的数据转换成字符串存储到buf
    sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
    // printf("%s\r\n", buf);

    // 从buf中读取格式化的数据到tmp中
    sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
    printf("%d %f %s\r\n", tmp.n, tmp.score, tmp.arr);
    return 0;
} */

// fread fwrite  二进制读写保存
/* struct S
{
    char name[20];
    int age;
    double score;
};

int main(){

    // struct S s = {"zhangsan", 20, 55.6};
    struct S tmp = {0};
    FILE* pf = fopen("test.txt", "rb");
    if(pf == NULL){
        return 0;
    }

    // fwrite(&s, sizeof(struct S), 1, pf);
    fread(&tmp, sizeof(struct S), 1, pf);
    printf("%s %d %lf", tmp.name, tmp.age, tmp.score);

    fclose(pf);
    pf = NULL;
    return 0;
} */

// fseek  随机读取,  rewind  将文件指针恢复到起始位置
/* int main(){

    FILE* pf = fopen("test.txt", "r");
    if(pf == NULL)
        return 0;

    // 1、定位文件指针
    // fseek(pf, 4, SEEK_SET);
    // fseek(pf, -2, SEEK_END);
    fgetc(pf);

    // 将文件指针恢复到起始位置
    rewind(pf);

    // 2、读取文件
    int ch = fgetc(pf);
    int pos = ftell(pf);
    printf("%c\n", ch);
    printf("%d\r\n", pos);

    fclose(pf);
    pf = NULL;
    return 0;
} */

// 
/* int main(){

    // EOF
    // feof();  
    // EOF - end of file - 文件结束标志
    FILE* pf = fopen("test.txt", "r");
    if(pf == NULL)
        return 0 ;
    int ch = fgetc(pf);
    printf("%d\r\n", ch);

    fclose(pf);
    pf = NULL;

    return 0;
} */

int main(){

     FILE* pf = fopen("test2.txt", "r");
     if(pf == NULL){

         perror("open file test2.txt");
         return 0;
     }
    return 0;
}








// scanf / printf      是针对标准输入流 / 输出流的格式化输入 / 输出语句
// fscanf / fprintf    是针对所有输入流 / 输出流的格式化输入 / 输出语句
// sscanf              是从字符串中读取格式化的数据
// sprintf             是把格式化数据输出成(存储到)字符串
// c语言操作MySQL数据库

















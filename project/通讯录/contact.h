#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

// #define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3

enum Option{

    EXTI,       // 0
    ADD,        // 1
    DEL,
    SEARCH,
    MODIFY,
    SHOW,
    SORT,
    SAVE
};

struct PeoInfo{

    char name[MAX_NAME];
    char age;
    char sex[MAX_SEX];
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
};

struct Contact{

    // 存放一个信息
    struct PeoInfo* data;
    // 记录当前已经有的元素个数
    int size;
    // 当前通讯录的最大容量
    int capacity;
};

// 声明函数
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);
void DelContact(struct Contact* ps);
void SearchContact(struct Contact* ps);
void ModifyContact(struct Contact* ps);
void SortContact(struct Contact* ps);
void DestroyContact(struct Contact* ps);
void SaveContact(struct Contact* ps);
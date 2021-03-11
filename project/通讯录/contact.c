#include "contact.h"

// 声明增容函数
void CheckCapacity(struct Contact* ps);

void LoadContact(struct Contact* ps){

    struct PeoInfo tmp = {0};
    FILE* pfRead = fopen("contact.dat", "rb");
    if(pfRead == NULL){

        printf("LoadContact: %s\r\n", strerror(errno));
        return;
    }
    // 读取文件,存放到通讯录中
    while(fread(&tmp, sizeof(struct PeoInfo), 1, pfRead)){

        CheckCapacity(ps);
        ps->data[ps->size] = tmp;
        ps->size++;
    }

    printf("加载成功\r\n");
    fclose(pfRead);
    pfRead = NULL;
}

// 初始化通讯录
void InitContact(struct Contact* ps){

    // memset(ps->data, 0, sizeof(ps -> data));
    // // 设置通讯录最初只有0个元素
    // ps -> size = 0;

    ps->data = malloc(3 * sizeof(struct PeoInfo));
    if(ps->data == NULL){
        printf("InitContact: %s\r\n", strerror(errno));
        return;
    }

    ps->size = 0;
    ps->capacity = DEFAULT_SZ;

    // 把文件中已经存放的信息加载到通讯录中
    LoadContact(ps);
}

// 增容
void CheckCapacity(struct Contact* ps){

     if(ps->size == ps->capacity){

        struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2)*sizeof(struct PeoInfo));
        if(ptr != NULL){

            ps->data = ptr;
            ps->capacity += 2;
            printf("增容成功\r\n");
        }else{
            printf("增容失败\r\n");
        }
     }
 }

// 增加一个人的信息
void AddContact(struct Contact* ps){

    // 检测当前通讯录的容量
    // 1、如果满了就增加空间
    // 2、如果不满,啥事都不干
    CheckCapacity(ps);

    printf("请输入名字:>\r\n");
    scanf("%s", ps->data[ps->size].name);
    printf("请输入年龄:>\r\n");
    scanf("%s", &(ps->data[ps->size].age));
    printf("请输入性别:>\r\n");
    scanf("%s", ps->data[ps->size].sex);
    printf("请输入电话:>\r\n");
    scanf("%s", ps->data[ps->size].tele);
    printf("请输入地址:>\r\n");
    scanf("%s", ps->data[ps->size].addr);

    ps->size++;
    printf("添加成功!");

    // if(ps->size == MAX)
    //     printf("通讯录已满，无法增加\r\n");
    // else{
    //     printf("请输入名字:>\r\n");
    //     scanf("%s", ps->data[ps->size].name);
    //     printf("请输入年龄:>\r\n");
    //     scanf("%s", &(ps->data[ps->size].age));
    //     printf("请输入性别:>\r\n");
    //     scanf("%s", ps->data[ps->size].sex);
    //     printf("请输入电话:>\r\n");
    //     scanf("%s", ps->data[ps->size].tele);
    //     printf("请输入地址:>\r\n");
    //     scanf("%s", ps->data[ps->size].addr);
    //     ps->size++;
    //     printf("添加成功!");
    // }
}

// 打印通讯录
void ShowContact(const struct Contact* ps){

    if(ps->size == 0)
        printf("通讯录为空\r\n");
    else{

        int i = 0;
        printf("%-20s\t %-4s\t %-5s\t %-12s\t %-20s\r\n", "名字", "年龄", "性别", "电话", "地址");

            for(i = 0; i < ps->size; i++)
                printf("%-20s\t %-4d\t %-5s\t %-12s\t %-20s\r\n", 
                            ps->data[i].name,
                            ps->data[i].age,
                            ps->data[i].sex,
                            ps->data[i].tele,
                            ps->data[i].addr); 
/*         for(i = 0; i < ps->size; i++)
            printf(" %s %-20s\r\n %s %-4d\r\n %s %-5s\r\n %s %-12s\r\n %s %-20s\r\n", 
                        "名字",
                        ps->data[i].name,
                        "年龄",
                        ps->data[i].age,
                        "性别",
                        ps->data[i].sex,
                        "电话",
                        ps->data[i].tele,
                        "地址",
                        ps->data[i].addr); */
    }
}

static int FindByName(const struct Contact* ps, char name[MAX_NAME]){

    int i = 0;
    for(i = 0; i < ps->size; i++){

        if(0 == strcmp(ps->data[i].name, name))
            return i;
    }
    return -1;
}

// 删除一个人
void DelContact(struct Contact* ps){

    char name[MAX_NAME];
    printf("请输入要删除人的名字\r\n");
    scanf("%s", name);
    // 1.查找要删除的人在什么位
    int pos = FindByName(ps, name);

    // 2.删除
    if(pos == -1)
        printf("要删除的人不存在\r\n");
    else{

        // 删除数据
        int j = 0;
        for(j = pos; j < ps->size - 1; j++){

            ps->data[j] = ps->data[j+1];
        }
        ps->size--;
        printf("删除成功\r\n");
    }
}

// 查找
void SearchContact(struct Contact* ps){

    char name[MAX_NAME];
    printf("输入要查找人的名字:>");
    scanf("%s", name);
    int pos = FindByName(ps, name);
    if(pos == -1)
        printf("要查找的人不存在");
    else
        printf(" %s %-20s\r\n %s %-4d\r\n %s %-5s\r\n %s %-12s\r\n %s %-20s\r\n", 
                    "名字",
                    ps->data[pos].name,
                    "年龄",
                    ps->data[pos].age,
                    "性别",
                    ps->data[pos].sex,
                    "电话",
                    ps->data[pos].tele,
                    "地址",
                    ps->data[pos].addr);
}

// 修改
void ModifyContact(struct Contact* ps){

    char name[MAX_NAME];
    printf("请输入要修改人的名字:>");
    scanf("%s", name);
    int pos = FindByName(ps, name);
    if(pos == -1)
        printf("通讯录中没有找到");
    else{

        printf("请输入名字:>\r\n");
        scanf("%s", ps->data[pos].name);
        printf("请输入年龄:>\r\n");
        scanf("%s", &(ps->data[pos].age));
        printf("请输入性别:>\r\n");
        scanf("%s", ps->data[pos].sex);
        printf("请输入电话:>\r\n");
        scanf("%s", ps->data[pos].tele);
        printf("请输入地址:>\r\n");
        scanf("%s", ps->data[pos].addr);

        printf("修改完成");
    }
}

void SortContact(struct Contact* ps){


}

// 释放动态开辟的内存
void DestroyContact(struct Contact* ps){

    free(ps->data);
    ps->data = NULL;
}

void SaveContact(struct Contact* ps){

    FILE* pfWrite = fopen("contact.dat", "wb");
    if(pfWrite == NULL){

        printf("SaveContact: %s\r\n", strerror(errno));
        return;
    }
    // 写通讯录的数据到文件中
    int i = 0;
    for(i = 0; i < ps->size; i++){

        fwrite(&(ps->data[i]), sizeof(struct PeoInfo), 1, pfWrite);
    }

    fclose(pfWrite);
    pfWrite = NULL;


}



















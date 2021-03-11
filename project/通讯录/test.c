// 1.存放1000好友信息
// 2.名字，电话，性别，住址，年龄
// 3.增加好友信息
// 4，删除指定名字的好友信息
// 5，修改好友信息
// 6，打印好友信息
#include "contact.h"

void menu(){

    printf("*************************************\r\n");
    printf("******1. add         2. del    ******\r\n");
    printf("******3. search      4. modify ******\r\n");
    printf("******5. show        6. sort   ******\r\n");
    printf("******7. save        0. exit   ******\r\n");
    printf("*************************************\r\n");

}

int main(){

    int input = 0;
    // 创建通讯录
    // con就是通讯录，里面包含：data指针和size、capacity    
    struct Contact con;

    // 初始化通讯录
    InitContact(&con);

    

    do{
        menu();
        printf("请选择；>");
        scanf("%d", &input);
        switch (input)
        {
        case ADD:
            AddContact(&con);
            break;
        case DEL:
            DelContact(&con);
            break;
        case SEARCH:
            SearchContact(&con);
            break;
        case MODIFY:
            ModifyContact(&con);
            break;
        case SHOW:
            ShowContact(&con);
            break;
        case SORT:
            SortContact(&con);
            break;
        case EXTI:
            // 销毁通讯录-释放动态开辟的内存
            SaveContact(&con);
            DestroyContact(&con);
            printf("退出通讯录\r\n");
            break;
        case SAVE:
            SaveContact(&con);
            printf("保存成功");
            break;
        default:
            printf("选择错误，请重新选择\r\n");
            break;
        }
    }while(input);
    return 0;
}











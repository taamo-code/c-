#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu(){
    printf("*********************\n");
    printf("*******猜数字游戏******\n");
    printf("*******输入1进入游戏，输入0退出游戏*****\n");   
}

void game(){
    int rum = 1;
    int ret = rand() % 100;
    printf("猜数字\n");
    // 生成一个随机数∏∏
    printf("请输入一个数字：");
   
    while (1){
        scanf("%d",&rum);
            if(rum > ret){
                printf("猜大了，在猜一次\n");
            
            }else if(rum < ret){
                printf("猜小了，在猜一次\n");
            
            }else{
                printf("猜对了\n");
                break;
            }
    }

}
int main(){   
    int str = 1;
    // srand((unsigned int) time(NULL));
    do{
        menu();
        scanf("%d", &str);
        switch (str)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break; 
        default:
            printf("选择错误，请重新选择\n");
            break;
    }
    }while (str);
   
    return 0;
} 
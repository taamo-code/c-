#include "game.h"

void start(){
    printf("************************\n");
    printf("******   1. play  ******\n");
    printf("******   0. exit  ******\n");
    printf("************************\n");
}

void game(){
    // int a = COLS;
    char mine[ROWS][COLS] = {0};
    char show[ROWS][COLS] = {0};
    InitBoard(mine, ROWS, COLS, '0');
    InitBoard(show, ROWS, COLS, '*');

    // DisplayBoard(mine, ROW, COL);
    DisplayBoard(show, ROW, COL);

    SetMine(mine, ROW, COL);
    // DisplayBoard(mine, ROW, COL);
    FindMine(mine, show, ROW, COL);


}

int main(){
    int a;
    srand((int)time(NULL));
    do{
        start();
        printf("请输入：>  ");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            game();
            break;
        case 0:
            break;
        default:
            printf("输入错误，请重新输入\n");
            break;
        }
    }while(a);
    return 0;
}
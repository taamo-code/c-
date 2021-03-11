                                                                                                                            // #include <stdio.h>

#include "game.h"

void start() {
    printf("*****************************\n");
    printf("******1, plat   0. exit******\n");
    printf("*****************************\n");
}

void game() {
    char board[ROW][COL] = { 0 };
    char ret = '*';
    // printf("%d\n", board[0][2]);
    // printf("%d\n", COL);
    InitBoard(board, ROW, COL);
    // printf(" %c ", board[0][1]);
    DisplayBoard(board, ROW, COL);
    while (1)
    {
        playerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        ret = IsWin(board, ROW, COL);
        if(ret != 'C'){
            break;
        }
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        ret = IsWin(board, ROW, COL);
        if(ret != 'C'){
            break;
        }
    }
    if(ret == '*'){
        printf("玩家获胜 \n");
    }else if(ret == '#'){
        printf("电脑获胜 \n");
    }else{
        printf("平局 \n");
    }
    
    

}

int main() {
    
    srand((int)time(NULL));
    int a = 1;
    
    do{
        start();
        printf("请选择：>");
        scanf("%d", &a);
        while(!a){
            printf("非法输入，请重新输入");
        }
        switch (a)
        {
        case 1:
            game();
            break;
        case 0:
            break;
        default:
            printf("选择错误，请重新选择\n");
            break;
        }
    }while(a);
    return 0;
}
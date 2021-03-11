#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col) {
    for (int a = 0; a < row; a++) {
        for (int b = 0; b < col; b++) {
            board[a][b] = 20;
        }
    }
}

// 打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col){
    for (int a = 0; a < row; a++) {
        for (int b = 0; b < col; b++) {
            printf(" %c ", board[a][b]);
            if (b < col - 1) {
                printf("|");
            }  
        }    
                printf("\n");
        while(a < row -1)
        {
            for (int i = 0; i < col; i++)
            {
                printf("-- ");
            }
                printf("\n");
                break;
        }      
    }
}

// 玩家输入
void playerMove(char board[ROW][COL], int row, int col){
    int a, b;
    while(1){
            printf("玩家下:> ");
            scanf("%d%d", &a, &b);
            if(a >= 1 && a <= ROW && b >= 1 && b <= COL){
                if(board[a-1][b-1] == 20){
                    board[a-1][b-1] = '*';
                    break;
                }
                else{
                    printf("当前位置已经被占用，请重新选择\n");
                }
             }else{
                printf("输入范围超过棋盘，请重新输入\n");
                }
        }
    }

// 电脑输入
void ComputerMove(char board[ROW][COL], int row, int col){
    int a, b;
    while(1){
        
        a = rand() % row;
        b = rand() % col;
        if(board[a][b] == 20){
            board[a][b] = '#';
            printf("电脑下:>\n");
            break;
        }
    }
    
}

int IsFull(char board[ROW][COL], int row, int col){
    for(int a = 0; a < row; a++){
        for (int b = 0; b < col; b++)
        {
            if(board[a][b] == 20){
                return 1;
            }
        }
        
    }
    return 0;
}

// * # Q C
char IsWin(char board[ROW][COL], int row, int col){
    for(int i = 0; i < row; i++){
        if(board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != 20){
            return board[0][i];
        }
        }
    for(int i = 0; i < col; i++){
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != 20){
            return board[i][0];
        }
    }
        if(board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != 20){
            return board[0][0];
        }
        if(board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != 20){
            return board[0][2];
        }
        if(IsFull(board, ROW, COL) == 1){
            return 'C';
        }else{
            return 'Q';
        }
    
}




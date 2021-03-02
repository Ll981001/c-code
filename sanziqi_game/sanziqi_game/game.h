#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>
#include <stdlib.h>
#include<time.h>

//声明
void init_board(char board[ROW][COL], int row, int col);
void display_board(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char iswin(char board[ROW][COL], int row, int col);
//返回* 玩家赢
//返回# 电脑赢
//返回C  继续游戏
//返回P  平局
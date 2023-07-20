#ifndef TicTacToe_H
#define TicTacToe_H

char board[3][3]={ '1','2', '3', '4', '5', '6', '7', '8', '9'};
void show_board();
void move1(char X, char O);
void move2(char O, char X);
int check_win();
void ttt_fun();
void basic();
#endif
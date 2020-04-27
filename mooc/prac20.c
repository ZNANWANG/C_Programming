/**
 * Tic-tac-toe (普通版和优化版）
 *
 * @Author: Wang An
 * @Date: 4/27/2020 9:58 PM
 */
#include <stdio.h>

int checkRow(int board[3][3]);

int checkCol(int board[3][3]);

int checkMajorDiagonal(int board[3][3]);

int checkMinorDiagonal(int board[3][3]);

int checkStraight(int board[3][3], int flag);

int checkDiagonal(int board[3][3], int flag);

int main() {
    const int length = 3;
    int board[length][length];
    int i, j;
    int result = -1;
    for (i = 0; i < length; i++) {
        for (j = 0; j < length; j++) {
            scanf("%d", &board[i][j]);
        }
    }

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }

    //检查行
//    result = checkRow(board);
    result = checkStraight(board, 0);

    //检查列
    if (result == -1) {
//        result = checkCol(board);
        result = checkStraight(board, 1);
    }

    //检查正对角线
    if (result == -1) {
        result = checkDiagonal(board, 0);
//        result = checkMajorDiagonal(board);
    }

    //检查反对角线
    if (result == -1) {
        result = checkDiagonal(board, 1);
//        result = checkMinorDiagonal(board);
    }


    if (result == 1) {
        printf("x win");
    } else if (result == 0) {
        printf("o win");
    } else {
        printf("no winner");
    }
    return 0;
}

int checkDiagonal(int board[3][3], int flag) {
    int result = -1;
    const int length = 3;
    int o = 0, x = 0;
    for (int i = 0; i < length; i++) {
        if (flag == 0) {
            if (board[i][i] == 1) {
                x++;
            } else if (board[i][i] == 0) {
                o++;
            }
        } else if (flag == 1) {
            if (board[i][length - 1 - i] == 1) {
                x++;
            } else if (board[i][length - 1 - i] == 0) {
                o++;
            }
        }
    }
    if (x == length) {
        result = 1;
    } else if (o == length) {
        result = 0;
    }
    return result;
}

/**
 * 检查直线
 * @param board 棋盘二维数组
 * @param flag 0 —— 检查行， 1 —— 检查列
 * @return 1 —— x赢， 0 —— o赢， -1 —— 没人赢
 */
int checkStraight(int board[3][3], int flag) {
    int result = -1;
    const int length = 3;
    for (int i = 0; i < length; i++) {
        int o = 0, x = 0;
        for (int j = 0; j < length; j++) {
            if (flag == 0) {
                if (board[i][j] == 0) {
                    o++;
                } else if (board[i][j] == 1) {
                    x++;
                }
            } else if (flag == 1) {
                if (board[j][i] == 0) {
                    o++;
                } else if (board[j][i] == 1) {
                    x++;
                }
            }
        }
        if (o == length) {
            result = 0;
            break;
        } else if (x == length) {
            result = 1;
            break;
        }
    }
    return result;
}

/**
 * 检查副对角线
 * @param board 棋盘数二维组
 * @return 1 —— x赢， 0 —— o赢， -1 —— 没人赢
 */
int checkMinorDiagonal(int board[3][3]) {
    int result = -1;
    const int length = 3;
    int o = 0;
    int x = 0;
    for (int i = 0; i < length; i++) {
        if (board[i][length - 1 - i] == 1) {
            x++;
        } else {
            o++;
        }
    }

    if (x == length) {
        result = 1;
    } else if (o == length) {
        result = 0;
    }
    return result;
}

/**
 * 检查主对角线
 * @param board 棋盘数二维组
 * @return 1 —— x赢， 0 —— o赢， -1 —— 没人赢
 */
int checkMajorDiagonal(int board[3][3]) {
    int result = -1;
    const int length = 3;
    int o = 0;
    int x = 0;
    for (int i = 0; i < length; i++) {
        if (board[i][i] == 1) {
            x++;
        } else {
            o++;
        }
    }

    if (x == length) {
        result = 1;
    } else if (o == length) {
        result = 0;
    }
    return result;
}

/**
 * 检查直线（行或者列）
 * @param board 棋盘二维数组
 * @return 1 —— x赢， 0 —— o赢， -1 —— 没人赢
 */
int checkRow(int board[3][3]) {
    int result = -1;
    const int length = 3;
    for (int i = 0; i < length; i++) {
        int o = 0, x = 0;
        for (int j = 0; j < length; j++) {
            if (board[i][j] == 1) {
                x++;
            } else if (board[i][j] == 0) {
                o++;
            }
        }
        if (o == length) {
            result = 0;
            //o成功则结束遍历，返回结果值0
            break;
        } else if (x == length) {
            result = 1;
            //成功则结束遍历，返回结果值1
            break;
        }
    }
    return result;
}

int checkCol(int board[3][3]) {
    int result = -1;
    const int length = 3;
    for (int i = 0; i < length; i++) {
        int o = 0, x = 0;
        for (int j = 0; j < length; j++) {
            if (board[j][i] == 1) {
                x++;
            } else if (board[j][i] == 0) {
                o++;
            }
        }
        if (o == length) {
            result = 0;
            //o成功则结束遍历，返回结果值0
            break;
        } else if (x == length) {
            result = 1;
            //成功则结束遍历，返回结果值1
            break;
        }
    }
    return result;
}

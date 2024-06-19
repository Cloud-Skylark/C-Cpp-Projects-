/*HOW TO PLAY :-
  player ko row or colum ko numer dekar select krna he hai jaise row number 0 or column number 0 toh ye
  kuchh aisa dikhega  
  Player X's turn (row, col): 0, 0
    X |   |   |
     |   |   |
    |   |   |  
    ye sab matrik form me hai "0" row or "0" column
    */ 

#include <stdio.h>

#define X 'X' // xoya
#define O 'O' // om
#define EMPTY ' '

void printBoard(char board[3][3])
{
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf(" %c |", board[i][j]);
    }
    printf("\n");
  }
}

int checkWinner(char board[3][3], char player)
{
  // Check rows
  for (int i = 0; i < 3; i++) {
    if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
    {
      return 1;
    }
  }

  // Check columns
  for (int j = 0; j < 3; j++) {
    if (board[0][j] == player && board[1][j] == player && board[2][j] == player)
    {
      return 1;
    }
  }

  // Check diagonals bord ke liya 
  if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
  {
    return 1;
  }
  if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
  {
    return 1;
  }

  return 0;
}

int makeMove(char board[3][3], char player, int row, int col)
{
  if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != EMPTY){
    return 0; // Invalid move
  }

  board[row][col] = player;
  return 1; // Valid move
}

int main() {
  char board[3][3] = {{EMPTY, EMPTY, EMPTY},
                       {EMPTY, EMPTY, EMPTY},
                       {EMPTY, EMPTY, EMPTY}
                       };

 char player = X; // Start with player X

  while (1) {
    printBoard(board);

    printf("Player %c's turn (row, col): ", player);
    int row, col;
    scanf("%d %d", &row, &col);

    if (makeMove(board, player, row, col))
    {
      if (checkWinner(board, player))
      {
        printBoard(board);
        printf("Player %c wins!\n", player);
        break;
      }

      player = (player == X) ? O : X; // Switch players ==>
    } else {
      printf("Invalid move. Try again.\n");
    }
  }

  return 0;
}
// Remember the third sem memory bahut jada effort lagaye the practical or baki jisso me 
// Bahut si baate hai third sem se judi...
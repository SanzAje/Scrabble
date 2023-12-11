#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "cs50.h"
#include <windows.h>
#include <time.h>
#include <stdlib.h>	

#define BOARD_SIZE 15
#define PLAYER1 1
#define PLAYER2 2
#define MAX_THINKING_TIME 60
#define FILENAME "words.txt"
#define MAX_WORD_LENGTH 50

typedef struct {
    char letter;
    int score;
} Tile;

typedef struct {
    char *name;
    int score;
} Player;

Player player1, player2;
char *word;
char *lines;
int i, x, y;
int point[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

void inputPlayerName();
void initializeBoard(Tile board[BOARD_SIZE][BOARD_SIZE]);
int applyDoubleWord(int wordScore);
int applyTripleWord(int wordScore);
int applyDoubleLetter(int letterScore);
int applyTripleLetter(int letterScore);
void displayBoard(Tile board[BOARD_SIZE][BOARD_SIZE]);
void loading();
void header();
void start(int *i);
void exitGame();
void backToMain();
void chooseNumberOfPlayers();
void invalidChoose();
void confirmExit(int *i);
void alertExit();
void twoPlayers(int whoseTurn);
void fourPlayers();
void startGame();
void placeWord(Tile board[BOARD_SIZE][BOARD_SIZE], int x, int y, char *word, char *lines);
int scoring(char *word);
void inputWord(Tile board[BOARD_SIZE][BOARD_SIZE], char* whoseTurn);
void showPlayer();
bool isFirstRowFilled(Tile scrabbleBoard[BOARD_SIZE][BOARD_SIZE]);
bool isLastRowFilled(Tile scrabbleBoard[BOARD_SIZE][BOARD_SIZE]);
bool isDoubleWord(int row, int col);
bool isTripleWord(int row, int col);
bool isDoubleLetter(int row, int col);
bool isTripleLetter(int row, int col);
void checkWin();
void saveScoreToFile(Player arrPlayer[2]);
void endGame();
void clueSpecialTiles();
void getRandomWord(char *word);
void placeStartingWord(Tile board[BOARD_SIZE][BOARD_SIZE]);
void displayScoresFromFile();


#ifndef VARIABLEHEADER_H_INCLUDED
#define VARIABLEHEADER_H_INCLUDED
#define MAX_STRING_SIZE 5000

char str[MAX_STRING_SIZE], pick[MAX_STRING_SIZE];
FILE *fp;
FILE **fpp = &fp;
char word2[5000];

int readCount = 0;
string word1 = "";
int numOfBlank = 0, dashInd = 0, gap = 0, curRanNum = 0, prevRanNum = 0, ind, scr, dash[4];
int *d = dash;
int dash1[4] = {0, 1, 2}, dash2[3] = {3, 4, 5}, dash3[4] = {0, 1, 2}, dash4[2] = {3, 4}, dash5[3] = {5, 6, 7}, dash6[2] = {0, 1}, dash7[2] = {2, 3}, dash8[3] = {4, 5, 6}, dash9[2] = {7, 8};
char letter;
int mposx, mposy;
int gameState = 0;
int dif = 0;
int charbg = 0;
int x = 0;
int y = 0;
int encryptX = 150;
int encryptY = 350;
bool musicOn = false;
bool soundOn = true;
bool input = true;
string rootWord = "";
int bwIndex = 0;
int sx = 1000;
int sy = 570;
int bcIndex = 0;
int score = 0;
int scx, scy, scs;
int zero = 6;
int a = 0;
int live = 15;
int b = 0;
int lx, ly;
int wc = 0;
int level = 0;
int c = 0;
int lvx, lvy;
int word = 0;
int gTime = 0;
int cTime = 0;
int hScore[10];
int scored;

struct highscoreStruct
{
	int score;
} highscores[5];

string inputWord = "";
int index = 0;
int xAxis;
int yAxis;
int clockTime = 200;
int flag = 0;
int currentRow = 0;
int point = 0;
string rows[6] = {"", "", "", "", "", ""};
bool isClock;
char answer[6];
int lvl2 = 1;

#endif
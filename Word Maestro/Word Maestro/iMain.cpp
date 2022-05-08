#include <iostream>
using namespace std;

#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>
#include <dos.h>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <random>
#include <irrKlang.h>
#pragma comment(lib, "irrKlang.lib")
irrklang::ISoundEngine *engine;
#include "iGraphics.h"

void pickWord();
int alph(char ch);
int randNum();

void clockShow();
void randWordle();
void resetAll();
void resetGame();
void showHighscore();
void highscoreFunc();

#include "arrayHeader.h"
#include "variableHeader.h"
#include "functionsHeader.h"
#include "wordleFunction.h"
#include "keyboardHeader.h"
#include "mouseHeader.h"

#define screenwidth 1280
#define screenheight 720

void iDraw()
{
	if (gameState == 0)
	{
		iShowBMP(0, 0, "Buttons\\menu.bmp");
	}
	else if (gameState == 1)
	{
		iShowBMP(0, 0, "Buttons\\difsel.bmp");
		iShowBMP2(45, 60, "Buttons\\back.bmp", 0);
		iShowBMP2(30, 620, "score\\home.bmp", 0);
	}
	else if (gameState == 2)
	{
		iShowBMP(0, 0, "Buttons\\hs.bmp");
		if (score == 0)
		{
			iShowBMP2(45, 60, "Buttons\\back.bmp", 0);
			iShowBMP2(30, 620, "score\\home.bmp", 0);
		}
		else
		{
			iShowBMP2(1090, 650, "Buttons\\resume.bmp", 0);
		}
		hscrShow();
		showHighscore();
	}
	else if (gameState == 3)
	{
		iShowBMP(0, 0, "Buttons\\ins.bmp");
		iShowBMP2(45, 60, "Buttons\\back.bmp", 0);
		iShowBMP2(30, 620, "score\\home.bmp", 0);
	}
	else if (gameState == 4)
	{
		iShowBMP(0, 0, "Buttons\\options.bmp");
		iShowBMP2(320, 300, "Buttons\\snd.bmp", 0);
		iShowBMP2(320, 70, "Buttons\\msc.bmp", 0);
		if (soundOn)
			iShowBMP2(580, 330, "Buttons\\on.bmp", 0);
		else if (!soundOn)
			iShowBMP2(580, 330, "Buttons\\off.bmp", 0);
		if (musicOn)
			iShowBMP2(580, 100, "Buttons\\on.bmp", 0);
		else if (!musicOn)
			iShowBMP2(580, 100, "Buttons\\off.bmp", 0);
		if (score == 0)
		{
			iShowBMP2(45, 60, "Buttons\\back.bmp", 0);
			iShowBMP2(30, 620, "score\\home.bmp", 0);
		}
		else
		{
			iShowBMP2(1090, 650, "Buttons\\resume.bmp", 0);
		}
	}
	else if (gameState == 5)
	{
		iShowBMP(0, 0, "Buttons\\Credits.bmp");
		iShowBMP2(45, 60, "Buttons\\back.bmp", 0);
	}
	else if (gameState == 6)
	{
		iShowBMP(0, 0, "Buttons\\pause.bmp");
		pscrshow();
	}
	else if (gameState == 7)
	{
		iShowBMP(0, 0, "Buttons\\charsel.bmp");
		iShowBMP2(45, 60, "Buttons\\back.bmp", 0);
		iShowBMP2(30, 620, "score\\home.bmp", 0);
	}
	else if (gameState == 8)
	{
		levelbg();
		lifepg();
		scrshow();
		charwordshow();
		pickWordCall();
		iShowBMP2(30, 620, "score\\home.bmp", 0);
		iShowBMP2(38, 62, "score\\pause.bmp", 0);
	}
	else if (gameState == 9)
	{

		iShowBMP2(0, 0, "Buttons\\gameover.bmp", 0);
		iShowBMP2(30, 620, "score\\home.bmp", 0);
	}
	else if (gameState == 10)
	{
		iShowBMP(0, 0, "Buttons\\lvlup.bmp");
	}
	else if (gameState == 11)
	{
		iShowBMP(0, 0, "Buttons\\modesel.bmp");
		iShowBMP2(45, 60, "Buttons\\back.bmp", 0);
		iShowBMP2(30, 620, "score\\home.bmp", 0);
	}
	else if (gameState == 12)
	{
		iShowBMP(0, 0, "Background//instruction.bmp");
		iShowBMP2(30, 620, "score\\home.bmp", 0);
	}
	else if (gameState == 13)
	{
		iShowBMP(0, 0, "Background//modeselect.bmp");
		iShowBMP2(45, 60, "Buttons\\back.bmp", 0);
		iShowBMP2(30, 620, "score\\home.bmp", 0);
	}
	else if (gameState == 14)
	{
		iShowBMP(0, 0, "Background//won.bmp");
		iShowBMP2(30, 620, "score\\home.bmp", 0);
	}
	else if (gameState == 15)
	{
		iShowBMP(0, 0, "Buttons\\modesel.bmp");
		iShowBMP2(45, 60, "Buttons\\back.bmp", 0);
		iShowBMP2(30, 620, "score\\home.bmp", 0);
	}
	else if (gameState == 17)
	{
		maingame();
	}
}

int main()
{
	iSetTimer(25, change);
	iSetTimer(100, gTimeI);
	iSetTimer(1000, gameTime);
	krr();
	if (musicOn)
		engine->play2D("music/gamemusic.wav", true);
	iInitialize(screenwidth, screenheight, "Word Maestro");
	iStart();
	return 0;
}
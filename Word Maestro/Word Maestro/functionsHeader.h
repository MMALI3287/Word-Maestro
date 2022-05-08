#ifndef FUNCTIONHEADER_H_INCLUDED
#define FUNCTIONHEADER_H_INCLUDED
#define MAX_STRING_SIZE 5000

#include <ctime>
#include <iostream>
#include <random>
#include "variableHeader.h"

void reverse(char str[], int length)
{
	int start = 0;
	int end = length - 1;
	while (start < end)
	{
		swap(*(str + start), *(str + end));
		start++;
		end--;
	}
}

int randNum()
{
	mt19937 mt(time(nullptr));
	unsigned int a = mt() % 100 + 1;
	return a;
}

void levelUp()
{
	if (dif == 1)
		dif = 2;
	else if (dif == 2)
		dif = 3;
	level = 0;
	wc = 0;
	live = 15;
	for (unsigned int i = 0; i < word1.length(); i++)
	{
		word2[i] = ' ';
	}
}

void pickWord1()
{
	numOfBlank = 0;
	dashInd = 0;
	cout << "New Word" << endl;
	srand(time(0));
	fopen_s(fpp, "Text\\WM_Easy.txt", "r");
	if (fp)
	{
		if (fgets(pick, MAX_STRING_SIZE, fp) != NULL)
		{
			readCount = 1;
			while (fgets(str, MAX_STRING_SIZE, fp) != NULL)
			{

				if ((rand() % ++readCount) == 0)
				{
					strcpy_s(pick, str);
				}
				// printf("%d\t%s", readCount, str);
			}
		}
	}
	fclose(fp);
	int i;
	for (i = 0; pick[i] != '\0'; i++)
		;
	pick[i - 1] = '\0';
	word1 = pick;
	cout << pick << endl;
	// filling other index of word2 which does not include '_'//
	for (unsigned int i = 0; i <= word1.length() - 1; i++)
	{

		word2[i] = word1[i];
		cout << word2 << endl;
	}
	// entering '_' in random index in word2//
	ind = randNum() % 2;
	cout << ind << " ";
	word2[dash1[ind]] = '_';
	cout << word1[dash1[ind]] << endl;
	numOfBlank++;
	*dash = dash1[ind];
	ind = randNum() % 2;
	cout << ind << " ";
	word2[dash2[ind]] = '_';
	cout << word1[dash2[ind]] << endl;
	numOfBlank++;
	*(dash+1) = dash2[ind];
	cout << word1[dash[0]] << endl;
	cout << word1[dash[1]] << endl;
	// printing word2//
	for (unsigned int i = 0; i <= word1.length() - 1; i++)
	{
		cout << word2[i] << " ";
	}
}

void pickWord2()
{
	numOfBlank = 0;
	dashInd = 0;
	cout << "New Word" << endl;
	srand(time(0));
	fopen_s(fpp, "Text\\WM_Medium.txt", "r");
	if (fp)
	{
		if (fgets(pick, MAX_STRING_SIZE, fp) != NULL)
		{
			readCount = 1;
			while (fgets(str, MAX_STRING_SIZE, fp) != NULL)
			{

				if ((rand() % ++readCount) == 0)
				{
					strcpy_s(pick, str);
				}
				// printf("%d\t%s", readCount, str);
			}
		}
	}
	fclose(fp);
	int i;
	for (i = 0; pick[i] != '\0'; i++)
		;
	pick[i - 1] = '\0';
	word1 = pick;
	cout << pick << endl;
	// filling other index of word2 which does not include '_'//
	for (unsigned int i = 0; i <= word1.length() - 1; i++)
	{

		word2[i] = word1[i];
		cout << word2 << endl;
	}
	// entering '_' in random index in word2//
	ind = randNum() % 2;
	cout << ind << " ";
	word2[dash3[ind]] = '_';
	cout << word1[dash3[ind]] << endl;
	numOfBlank++;
	dash[0] = dash3[ind];
	ind = randNum() % 1;
	cout << ind << " ";
	word2[dash4[ind]] = '_';
	cout << word1[dash4[ind]] << endl;
	numOfBlank++;
	dash[1] = dash4[ind];
	ind = randNum() % 2;
	cout << ind << " ";
	word2[dash5[ind]] = '_';
	cout << word1[dash5[ind]] << endl;
	numOfBlank++;
	dash[2] = dash5[ind];
	cout << word1[dash[0]] << endl;
	cout << word1[dash[1]] << endl;
	cout << word1[dash[2]] << endl;
	// printing word2//
	for (unsigned int i = 0; i <= word1.length() - 1; i++)
	{
		cout << word2[i] << " ";
	}
}

void pickWord3()
{
	numOfBlank = 0;
	dashInd = 0;
	cout << "New Word" << endl;
	srand(time(0));
	fopen_s(fpp, "Text\\WM_Hard.txt", "r");
	if (fp)
	{
		if (fgets(pick, MAX_STRING_SIZE, fp) != NULL)
		{
			readCount = 1;
			while (fgets(str, MAX_STRING_SIZE, fp) != NULL)
			{

				if ((rand() % ++readCount) == 0)
				{
					strcpy_s(pick, str);
				}
				// printf("%d\t%s", readCount, str);
			}
		}
	}
	fclose(fp);
	int i;
	for (i = 0; pick[i] != '\0'; i++)
		;
	pick[i - 1] = '\0';
	word1 = pick;
	cout << pick << endl;
	// filling other index of word2 which does not include '_'//
	for (unsigned int i = 0; i <= word1.length() - 1; i++)
	{

		word2[i] = word1[i];
		cout << word2 << endl;
	}
	// entering '_' in random index in word2//
	ind = randNum() % 1;
	cout << ind << " ";
	word2[dash6[ind]] = '_';
	cout << word1[dash6[ind]] << endl;
	numOfBlank++;
	dash[0] = dash6[ind];
	ind = randNum() % 1;
	cout << ind << " ";
	word2[dash7[ind]] = '_';
	cout << word1[dash7[ind]] << endl;
	numOfBlank++;
	dash[1] = dash7[ind];
	ind = randNum() % 2;
	cout << ind << " ";
	word2[dash8[ind]] = '_';
	cout << word1[dash8[ind]] << endl;
	numOfBlank++;
	dash[2] = dash8[ind];
	ind = randNum() % 1;
	cout << ind << " ";
	word2[dash9[ind]] = '_';
	cout << word1[dash9[ind]] << endl;
	numOfBlank++;
	dash[3] = dash9[ind];
	cout << word1[dash[0]] << endl;
	cout << word1[dash[1]] << endl;
	cout << word1[dash[2]] << endl;
	cout << word1[dash[3]] << endl;
	// printing word2//
	for (unsigned int i = 0; i <= word1.length() - 1; i++)
	{
		cout << word2[i] << " ";
	}
}

int alph(char ch)
{
	if (ch == '_')
		return 26;
	else if (ch == ' ')
		return 27;
	else
		return ch - 65;
}

void change()
{
	if (bwIndex < 6)
	{
		sx += 19;
		bwIndex++;
	}
	else if (bwIndex == 6)
	{
		bwIndex++;
	}
	else if (bwIndex < 13)
	{
		sx -= 19;
		bwIndex++;
	}
	else
	{
		bwIndex = 0;
	}
}

void levelbg()
{
	if (dif == 1)
	{
		if (wc >= 0 && wc < 10)
		{
			bcIndex = 0;
			level = 1;
		}
		else if (wc >= 10 && wc < 20)
		{
			bcIndex = 1;
			level = 2;
		}
		else if (wc >= 20 && wc < 30)
		{
			bcIndex = 2;
			level = 3;
		}
		else if (wc >= 30 && wc < 40)
		{
			bcIndex = 3;
			level = 4;
		}
		else if (wc >= 40 && wc < 50)
		{
			bcIndex = 4;
			level = 5;
		}
		else if (wc >= 50 && wc < 60)
		{
			bcIndex = 5;
			level = 6;
		}
		else if (wc >= 60 && wc < 70)
		{
			bcIndex = 6;
			level = 7;
		}
		else if (wc >= 70 && wc < 80)
		{
			bcIndex = 7;
			level = 8;
		}
		else if (wc >= 80 && wc < 90)
		{
			bcIndex = 8;
			level = 9;
		}
		else if (wc >= 90 && wc < 100)
		{
			bcIndex = 9;
			level = 10;
		}
		else if (wc >= 100)
		{
			levelUp();
		}

		iShowBMP(0, 0, bge[bcIndex]);
	}
	else if (dif == 2)
	{
		if (wc >= 0 && wc < 15)
		{
			bcIndex = 0;
			level = 1;
		}
		else if (wc >= 15 && wc < 30)
		{
			bcIndex = 1;
			level = 2;
		}
		else if (wc >= 30 && wc < 45)
		{
			bcIndex = 2;
			level = 3;
		}
		else if (wc >= 45 && wc < 60)
		{
			bcIndex = 3;
			level = 4;
		}
		else if (wc >= 60 && wc < 75)
		{
			bcIndex = 4;
			level = 5;
		}
		else if (wc >= 75 && wc < 90)
		{
			bcIndex = 5;
			level = 6;
		}
		else if (wc >= 90 && wc < 105)
		{
			bcIndex = 6;
			level = 7;
		}
		else if (wc >= 105 && wc < 120)
		{
			bcIndex = 7;
			level = 8;
		}
		else if (wc >= 120 && wc < 135)
		{
			bcIndex = 8;
			level = 9;
		}
		else if (wc >= 135 && wc < 150)
		{
			bcIndex = 9;
			level = 10;
		}
		else if (wc >= 150)
		{
			levelUp();
		}

		iShowBMP(0, 0, bgm[bcIndex]);
	}
	else if (dif == 3)
	{
		if (wc >= 0 && wc < 20)
		{
			bcIndex = 0;
			level = 1;
		}
		else if (wc >= 20 && wc < 40)
		{
			bcIndex = 1;
			level = 2;
		}
		else if (wc >= 40 && wc < 60)
		{
			bcIndex = 2;
			level = 3;
		}
		else if (wc >= 60 && wc < 80)
		{
			bcIndex = 3;
			level = 4;
		}
		else if (wc >= 80 && wc < 100)
		{
			bcIndex = 4;
			level = 5;
		}
		else if (wc >= 100 && wc < 120)
		{
			bcIndex = 5;
			level = 6;
		}
		else if (wc >= 120 && wc < 140)
		{
			bcIndex = 6;
			level = 7;
		}
		else if (wc >= 140 && wc < 160)
		{
			bcIndex = 7;
			level = 8;
		}
		else if (wc >= 160 && wc < 180)
		{
			bcIndex = 8;
			level = 9;
		}
		else if (wc >= 180 && wc < 200)
		{
			bcIndex = 9;
			level = 10;
		}
		iShowBMP(0, 0, bgh[bcIndex]);
	}
}

void lifepg()
{
	if (live <= 15 && live > 12)
	{
		iSetColor(255, 255, 0);
		iFilledPolygon(xa1, ya1, 4);
		iSetColor(0, 0, 0);
		iPolygon(xa1, ya1, 4);
		iSetColor(255, 128, 128);
		iFilledPolygon(xa1, ya2, 4);
		iSetColor(0, 0, 0);
		iPolygon(xa1, ya2, 4);
		iSetColor(0, 255, 255);
		iFilledPolygon(xa1, ya3, 4);
		iSetColor(0, 0, 0);
		iPolygon(xa1, ya3, 4);
		iSetColor(55, 55, 255);
		iFilledPolygon(xa1, ya4, 4);
		iSetColor(0, 0, 0);
		iPolygon(xa1, ya4, 4);
		iSetColor(255, 155, 55);
		iFilledPolygon(xa1, ya5, 4);
		iSetColor(0, 0, 0);
		iPolygon(xa1, ya5, 4);
	}
	else if (live <= 12 && live > 9)
	{
		iSetColor(255, 128, 128);
		iFilledPolygon(xa1, ya2, 4);
		iSetColor(0, 0, 0);
		iPolygon(xa1, ya2, 4);
		iSetColor(0, 255, 255);
		iFilledPolygon(xa1, ya3, 4);
		iSetColor(0, 0, 0);
		iPolygon(xa1, ya3, 4);
		iSetColor(55, 55, 255);
		iFilledPolygon(xa1, ya4, 4);
		iSetColor(0, 0, 0);
		iPolygon(xa1, ya4, 4);
		iSetColor(255, 155, 55);
		iFilledPolygon(xa1, ya5, 4);
		iSetColor(0, 0, 0);
		iPolygon(xa1, ya5, 4);
	}
	else if (live <= 9 && live > 6)
	{
		iSetColor(0, 255, 255);
		iFilledPolygon(xa1, ya3, 4);
		iSetColor(0, 0, 0);
		iPolygon(xa1, ya3, 4);
		iSetColor(55, 55, 255);
		iFilledPolygon(xa1, ya4, 4);
		iSetColor(0, 0, 0);
		iPolygon(xa1, ya4, 4);
		iSetColor(255, 155, 55);
		iFilledPolygon(xa1, ya5, 4);
		iSetColor(0, 0, 0);
		iPolygon(xa1, ya5, 4);
	}
	else if (live <= 6 && live > 3)
	{
		iSetColor(55, 55, 255);
		iFilledPolygon(xa1, ya4, 4);
		iSetColor(0, 0, 0);
		iPolygon(xa1, ya4, 4);
		iSetColor(255, 155, 55);
		iFilledPolygon(xa1, ya5, 4);
		iSetColor(0, 0, 0);
		iPolygon(xa1, ya5, 4);
	}
	else if (live <= 3 && live > 0)
	{
		iSetColor(255, 155, 55);
		iFilledPolygon(xa1, ya5, 4);
		iSetColor(0, 0, 0);
		iPolygon(xa1, ya5, 4);
	}
	if (live <= 15 && live > 12)
	{
		sy = 570;
	}
	else if (live <= 12 && live > 9)
	{
		sy = 540;
	}
	else if (live <= 9 && live > 6)
	{
		sy = 510;
	}
	else if (live <= 6 && live > 3)
	{
		sy = 480;
	}
	else if (live <= 3 && live > 0)
	{
		sy = 450;
	}
}

void scrshow()
{
	a = 0;
	zero = 6;
	scx = 685;
	scy = 605;
	iShowBMP2(scx - 127, scy - 37, "Buttons\\scrback.bmp", 0);
	if (score < 0)
	{
		score = 0;
	}
	scs = score;
	while (scs != 0)
	{
		iShowBMP2(scx, scy, sc[scs % 10], 0); // String directory
		scs /= 10;
		scx -= 20;
		a++;
	}
	zero -= a;
	while (zero > 0)
	{
		iShowBMP2(scx, scy, sc[0], 0);
		scx -= 20;
		zero--;
	}
	lx = 1100;
	ly = 680;
	iShowBMP2(lx - 115, ly - 13, "Buttons\\life.bmp", 0);
	if (live < 0)
	{
		live = 0;
	}
	b = live;
	while (b != 0)
	{
		iShowBMP2(lx, ly, sc[b % 10], 0);
		b /= 10;
		lx -= 20;
	}
	c = 0;
	lvx = 1100;
	lvy = 55;
	iShowBMP2(lvx - 115, lvy - 13, "Buttons\\lvlback.bmp", 0);

	c = level;
	while (c != 0)
	{
		iShowBMP2(lvx, lvy, sc[c % 10], 0);
		c /= 10;
		lvx -= 20;
	}
}

void pscrshow()
{
	a = 0;
	zero = 6;
	scx = 733;
	scy = 650;
	iShowBMP2(scx - 330, scy - 35, "score//scback.bmp", 0);
	if (score < 0)
	{
		score = 0;
	}
	scs = score;
	while (scs != 0)
	{
		iShowBMP2(scx, scy, sc[scs % 10], 0); // String directory
		scs /= 10;
		scx -= 20;
		a++;
	}
	zero -= a;
	while (zero > 0)
	{
		iShowBMP2(scx, scy, sc[0], 0);
		scx -= 20;
		zero--;
	}
}

void hscrShow()
{
	scy = 435;
	for (int i = 0; i < 9; i++)
	{
		a = 0;
		zero = 6;
		scx = 415;
		scs = hScore[i];
		iShowBMP2(scx - 155, scy, sc[i + 1], 0);
		while (scs != 0)
		{

			iShowBMP2(scx, scy, sc[scs % 10], 0); // String directory
			scs /= 10;
			scx -= 22;
			a++;
		}
		zero -= a;
		while (zero > 0)
		{
			iShowBMP2(scx, scy, sc[0], 0);
			scx -= 22;
			zero--;
		}
		scy -= 42;
	}
}

void pickWordCall()
{
	int j = 0;
	for (unsigned int i = 0; i < word1.length(); i++)
	{
		if (word2[i] == '_')
			j++;
	}
	if (dif == 1 && j == 0)
	{
		pickWord1();
		word++;
	}

	if (dif == 2 && j == 0)
	{
		pickWord2();
		word++;
	}
	if (dif == 3 && j == 0)
	{
		pickWord3();
		word++;
	}
}

void reset()
{
	score = 0;
	level = 0;
	wc = 0;
	live = 15;
	dif = 0;
	charbg = 0;
	word = 0;
	for (unsigned int i = 0; i < word1.length(); i++)
	{
		word2[i] = ' ';
	}
}

void levelup()
{
	int j = 0;
	for (unsigned int i = 0; i < word1.length(); i++)
	{
		if (word2[i] == '_')
			j++;
	}
	if ((word % 5 == 0) && j == 0 && cTime + 1 > gTime)
	{
		score += 5000;
		gameState = 10;
		if (soundOn)
		{
			engine->play2D("music/lvlup.wav");
		}
	}
	if (cTime + 1 < gTime)
	{
		gameState = 8;
	}
}

void gTimeI()
{
	gTime++;
}

void highScore()
{
	ifstream read("Text\\highScore.txt");
	for (int i = 0; i < 10; i++)
	{
		read >> hScore[i];
	}
	scored = score;
	for (int i = 0; i < 10; i++)
	{
		if (scored > hScore[i])
		{
			for (int j = 9; j > i; j--)
			{
				hScore[j] = hScore[j - 1];
			}
			hScore[i] = scored;
			break;
		}
	}
	read.close();
	ofstream write("Text\\highScore.txt");
	for (int i = 0; i < 5; i++)
	{
		write << hScore[i] << endl;
	}
	write.close();
}

void lifeMinus()
{
	if (live <= 15 && live > 12)
	{
		score = score - (300 * dif);
	}
	else if (live <= 12 && live > 9)
	{
		score = score - (600 * dif);
	}
	else if (live <= 9 && live > 6)
	{
		score = score - (900 * dif);
	}
	else if (live <= 6 && live > 3)
	{
		score = score - (1200 * dif);
	}
	else if (live <= 3 && live > 0)
	{
		score = score - (1500 * dif);
	}
	live--;
	if (soundOn)
	{
		if (live == 12 || live == 9 || live == 6 || live == 3)
			engine->play2D("music/tileshatter.wav");
		else

			engine->play2D("music/wrong.wav");
	}
}

void scrPlus(char a)
{
	cTime = gTime;
	word2[dash[dashInd]] = a;
	dashInd++;
	score = score + (level * live * dif * 5);
	wc++;
	if (soundOn)
		engine->play2D("music/type.wav");
	levelup();
}

void krr()
{
	engine = irrklang::createIrrKlangDevice();
	irrklang::ISound *primX;
}

void charwordshow()
{
	if (charbg == 1)
	{
		iShowBMP2(sx, sy, bw[bwIndex], 0);
	}
	if (charbg == 2)
	{
		iShowBMP2(sx, sy, gw[bwIndex], 0);
	}
	if (dif == 1)
	{
		encryptX = 500;
	}
	else if (dif == 2)
	{
		encryptX = 467;
	}
	else if (dif == 3)
	{
		encryptX = 405;
	}
	for (unsigned int i = 0; i < word1.length(); i++)
	{

		iShowBMP2(encryptX, encryptY, Alphabets[alph(word2[i])], 0);
		encryptX += 50;
	}
	Sleep(200);
}
#endif
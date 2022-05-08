#ifndef WORDLEFUNCTION_H_INCLUDE
#define WORDLEFUNCTION_H_INCLUDE

void highscoreFunc()
{
	cout << "HS callled" << endl;
	string buffer;
	int size;
	bool flag = false;
	ifstream ofs("Text\\HighScore2.txt", std::ifstream::in);
	if (ofs.is_open())
	{
		cout << "is opened" << endl;
		ofs >> size;
		for (int i = 0; i < size; i++)
		{
			ofs >> highscores[i].score;
		}
		for (int i = 0; i < size; i++)
		{
			if (highscores[i].score < point)
			{
				for (int j = size - 1; j >= i; j--)
				{
					highscores[j + 1].score = highscores[j].score;
				}
				highscores[i].score = point;
				flag = true;
				break;
			}
		}
		if (!flag && size < 10)
		{
			highscores[size].score = point;
		}
		if (size < 10)
		{
			size++;
		}
		ofs.close();
		ofstream ofs2("Text\\HighScore2.txt", std::ofstream::out);
		ofs2 << size << endl;
		for (int i = 0; i < size; i++)
		{
			ofs2 << " " << highscores[i].score << endl;
		}
		ofs2.close();
	}
	else
	{
		ofstream ofs2("Text\\HighScore2.txt", std::ofstream::out);
		ofs2 << 1 << endl;
		ofs2 << " " << point << endl;
		ofs2.close();
	}
	cout << "finished" << endl;
}

void gameTime()
{
	if (isClock)
	{
		clockTime -= 1;
	}
	if (clockTime == 0)
	{
		highscoreFunc();
		resetGame();
		gameState = 11;
	}
}

void clockShow()
{
	int temp = clockTime;
	int temp2;
	int x = 1130;
	int y = 550;
	int i;
	for (i = 0; temp != 0; i++)
	{
		temp2 = temp % 10;
		iShowBMP2(x, y, number[temp2], 0);
		x -= 32;
		temp = temp / 10;
	}
	for (int j = 3 - i; j != 0; j--)
	{
		iShowBMP2(x, y, number[0], 0);
		x -= 32;
	}
}

void resetAll()
{
	string inputWord = "";
	index = 0;
	clockTime = 150;
	flag = 0;
	currentRow = 0;
	rows[0].clear();
	rows[1].clear();
	rows[2].clear();
	rows[3].clear();
	rows[4].clear();
	rows[5].clear();
	randWordle();
}

void resetGame()
{
	point = 0;
	lvl2 = 1;
	resetAll();
}

void showHighscore()
{
	int a;
	ifstream ofs("Text\\highScore2.txt");
	ofs >> a;
	for (int i = 0; i < 10; i++)
	{
		ofs >> highscores[i].score;
	}
	ofs.close();
	scy = 435;
	for (int i = 0; i < 9; i++)
	{
		a = 0;
		zero = 6;
		scx = 1015;
		scs = highscores[i].score;
		iShowBMP2(scx - 155, scy, sc[i+1], 0);
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

void randWordle()
{
	mt19937 mt(time(nullptr));
	long long int count = mt() % 486 + 1; /// % 248
	cout << count << endl;
	FILE *fp;
	FILE **fpp = &fp;
	fopen_s(fpp, "Text\\Word List.txt", "r");
	while (count--)
	{
		fscanf_s(fp, "%s", &answer, sizeof(answer));
	}
	fclose(fp);
	cout << answer << endl;
}

void maingame()
{
	if (isClock)
	{
		iShowBMP(0, 0, "Background//back2.bmp");
	}
	else
	{
		iShowBMP(0, 0, "Background//back1.bmp");
	}

	iShowBMP2(10, 620, "score\\home.bmp", 0);
	iShowBMP2(880, 550, number[lvl2], 0);
	if (isClock)
	{
		clockShow();
	}
	xAxis = 100;
	yAxis = 600;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i >= currentRow)
			{
				iSetColor(100, 100, 100);
			}
			else
			{
				flag = 0;
				if (rows[i][j] == answer[j])
				{
					iSetColor(0, 128, 0);
				}
				else
				{
					for (int k = 0; k < 5; k++)
					{
						if (rows[i][j] == answer[k])
						{
							flag = 1;
						}
					}
					if (flag)
					{
						iSetColor(255, 255, 0);
					}
					else
					{
						iSetColor(128, 0, 0);
					}
				}
			}
			iFilledRectangle(xAxis - 10, yAxis - 10, 80, 80);
			xAxis += 120;
		}
		xAxis = 100;
		yAxis -= 100;
	}
	xAxis = 100;
	yAxis = 600;
	for (int i = 0; i <= currentRow; i++)
	{
		if (i == currentRow)
		{
			for (unsigned int j = 0; j < inputWord.length(); j++)
			{
				iShowBMP(xAxis, yAxis, Alphabet[inputWord[j] - 97]);
				xAxis += 120;
			}
		}
		else
		{
			for (int j = 0; j < 5; j++)
			{
				iShowBMP(xAxis, yAxis, Alphabet[rows[i][j] - 97]);
				xAxis += 120;
			}
		}
		yAxis -= 100;
		xAxis = 100;
	}
}

#endif
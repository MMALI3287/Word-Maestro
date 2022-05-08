#ifndef KEYBOARDHEADER_H_INCLUDE
#define KEYBOARDHEADER_H_INCLUDE

void iKeyboard(unsigned char key)
{
	if (key == '\r')
	{
	}
	else if (key == '\b')
	{
	}
	if (key == VK_RETURN)
	{
	}
	if (gameState == 8)
	{
		if (input)
		{
			int j = 0;
			for (unsigned int i = 0; i < word1.length(); i++)
			{
				if (word2[i] == '_')
					j++;
			}
			if (j != 0)
			{
				if (key == 'A' || key == 'a')
				{
					if (word1[dash[dashInd]] == 'A')
					{
						scrPlus('A');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'B' || key == 'b')
				{
					if (word1[dash[dashInd]] == 'B')
					{
						scrPlus('B');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'C' || key == 'c')
				{
					if (word1[dash[dashInd]] == 'C')
					{
						scrPlus('C');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'D' || key == 'd')
				{
					if (word1[dash[dashInd]] == 'D')
					{
						scrPlus('D');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'E' || key == 'e')
				{
					if (word1[dash[dashInd]] == 'E')
					{
						scrPlus('E');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'F' || key == 'f')
				{
					if (word1[dash[dashInd]] == 'F')
					{
						scrPlus('F');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'G' || key == 'g')
				{
					if (word1[dash[dashInd]] == 'G')
					{
						scrPlus('G');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'H' || key == 'h')
				{
					if (word1[dash[dashInd]] == 'H')
					{
						scrPlus('H');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'I' || key == 'i')
				{
					if (word1[dash[dashInd]] == 'I')
					{
						scrPlus('I');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'J' || key == 'j')
				{
					if (word1[dash[dashInd]] == 'J')
					{
						scrPlus('J');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'K' || key == 'k')
				{
					if (word1[dash[dashInd]] == 'K')
					{
						scrPlus('K');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'L' || key == 'l')
				{
					if (word1[dash[dashInd]] == 'L')
					{
						scrPlus('L');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'M' || key == 'm')
				{
					if (word1[dash[dashInd]] == 'M')
					{
						scrPlus('M');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'N' || key == 'n')
				{
					if (word1[dash[dashInd]] == 'N')
					{
						scrPlus('N');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'O' || key == 'o')
				{
					if (word1[dash[dashInd]] == 'O')
					{
						scrPlus('O');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'P' || key == 'p')
				{
					if (word1[dash[dashInd]] == 'P')
					{
						scrPlus('P');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'Q' || key == 'q')
				{
					if (word1[dash[dashInd]] == 'Q')
					{
						scrPlus('Q');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'R' || key == 'r')
				{
					if (word1[dash[dashInd]] == 'R')
					{
						scrPlus('R');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'S' || key == 's')
				{
					if (word1[dash[dashInd]] == 'S')
					{
						scrPlus('S');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'T' || key == 't')
				{
					if (word1[dash[dashInd]] == 'T')
					{
						scrPlus('T');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'U' || key == 'u')
				{
					if (word1[dash[dashInd]] == 'U')
					{
						scrPlus('U');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'V' || key == 'v')
				{
					if (word1[dash[dashInd]] == 'V')
					{
						scrPlus('V');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'W' || key == 'w')
				{
					if (word1[dash[dashInd]] == 'W')
					{
						scrPlus('W');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				else if (key == 'X' || key == 'x')
				{
					if (word1[dash[dashInd]] == 'X')
					{
						scrPlus('X');
					}
					else if (word1[dash[dashInd]] != key)
					{

						lifeMinus();
					}
				}
				else if (key == 'Y' || key == 'y')
				{
					if (word1[dash[dashInd]] == 'Y')
					{
						scrPlus('Y');
					}
					else if (word1[dash[dashInd]] != key)
					{

						lifeMinus();
					}
				}
				else if (key == 'Z' || key == 'z')
				{
					if (word1[dash[dashInd]] == 'Z')
					{
						scrPlus('Z');
					}
					else if (word1[dash[dashInd]] != key)
					{
						lifeMinus();
					}
				}
				if ((key >= 65 && key <= 90) || (key >= 97 && key <= 122))
				{
					levelup();
					if (live == 0)
					{
						input = false;
						if (soundOn)
							engine->play2D("music/gameover.wav");
						highScore();
						cout << "The word was: ";
						for (unsigned int i = 0; i < word1.length(); i++)
						{
							cout << word1[i];
						}
						gameState = 9;
					}
				}
				if (key == 27)
				{
					gameState = 6;
				}
			}
		}
		cout << "Your score is:" << score << endl;
	}
	if (gameState == 10)
	{
		if ((key >= 65 && key <= 90) || (key >= 97 && key <= 122))
		{
			levelup();
		}
	}
	if (gameState == 17)
	{
		if (inputWord.length() < 5)
		{
			if (key >= 97 && key <= 122)
			{
				inputWord += key;
				index++;
			}
			else if (key == '\b')
			{
				if (index > 0)
				{
					inputWord.erase(index - 1, 1);
					index--;
				}
			}
		}
		else if (key == '\r')
		{
			rows[currentRow] += inputWord;
			currentRow++;
			index = 0;
			inputWord.clear();
			if (rows[currentRow - 1] == answer)
			{
				point += (6 - currentRow + 1) * 100;
				if (lvl2 < 5)
				{
					lvl2++;
					resetAll();
				}
				else
				{
					cout << "yes!!!!!!!!!!!!!!!!!!!!!!" << endl;
					highscoreFunc();
					resetGame();
					gameState = 14;
				}
			}
			else if (currentRow == 6)
			{
				highscoreFunc();
				resetGame();
				gameState = 9;
			}
		}
		else if (key == '\b')
		{
			if (index > 0)
			{
				inputWord.erase(index - 1, 1);
				index--;
			}
		}
	}
	else if (gameState == 12)
	{
		if (key == 27)
		{
			gameState = 11;
		}
	}
}

void iSpecialKeyboard(unsigned char key)
{
	if (key == GLUT_KEY_RIGHT)
	{
	}
	if (key == GLUT_KEY_LEFT)
	{
	}
	if (key == GLUT_KEY_HOME)
	{
	}
}
#endif
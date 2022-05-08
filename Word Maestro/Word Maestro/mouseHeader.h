#ifndef MOUSEHEADER_H_INCLUDE
#define MOUSEHEADER_H_INCLUDE

void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (gameState == 0)
		{
			if (mx >= 30 && mx <= 225 && my >= 45 && my <= 100)
			{
				gameState = 11;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			if (mx >= 235 && mx <= 425 && my >= 45 && my <= 100)
			{
				gameState = 2;
				ifstream read("Text\\highScore.txt");
				for (int i = 0; i < 10; i++)
				{
					read >> hScore[i];
				}
				read.close();
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			if (mx >= 440 && mx <= 630 && my >= 45 && my <= 100)
			{
				gameState = 15;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			if (mx >= 645 && mx <= 835 && my >= 45 && my <= 100)
			{
				gameState = 4;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			if (mx >= 845 && mx <= 1040 && my >= 45 && my <= 100)
			{
				gameState = 5;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			if (mx >= 1050 && mx <= 1240 && my >= 45 && my <= 100)
			{
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
				exit(2);
			}
		}
		else if (gameState == 1)
		{
			if (mx >= 515 && mx <= 760 && my >= 390 && my <= 500)
			{
				dif = 1;
				gameState = 7;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else if (mx >= 515 && mx <= 760 && my >= 240 && my <= 355)
			{
				dif = 2;
				gameState = 7;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else if (mx >= 515 && mx <= 760 && my >= 90 && my <= 200)
			{
				dif = 3;
				gameState = 7;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else if (mx >= 45 && mx <= 115 && my >= 60 && my <= 130)
			{
				gameState = 11;
				reset();
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else if (mx >= 35 && mx <= 105 && my >= 620 && my <= 690)
			{
				gameState = 0;
				reset();
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
		}
		else if (gameState == 2)
		{
			if (score == 0)
			{
				if (mx >= 45 && mx <= 115 && my >= 60 && my <= 160)
				{
					gameState = 0;
					reset();
					resetGame();
					if (soundOn)
					{
						engine->play2D("music/mouse.wav");
					}
				}
				else if (mx >= 35 && mx <= 105 && my >= 620 && my <= 690)
				{
					gameState = 0;
					reset();
					resetGame();
					if (soundOn)
					{
						engine->play2D("music/mouse.wav");
					}
				}
			}
			else
			{
				if (mx >= 1095 && mx <= 1250 && my >= 655 && my <= 695)
				{
					gameState = 8;
					if (soundOn)
					{
						engine->play2D("music/mouse.wav");
					}
				}
			}
		}
		else if (gameState == 3)
		{
			if (mx >= 45 && mx <= 145 && my >= 60 && my <= 130)
			{
				gameState = 0;
				reset();
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else if (mx >= 35 && mx <= 105 && my >= 620 && my <= 690)
			{
				gameState = 0;
				reset();
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
		}
		else if (gameState == 4)
		{
			if (mx >= 580 && mx <= 950 && my >= 330 && my <= 470)
			{
				if (soundOn)
				{
					soundOn = false;
				}
				else
				{
					soundOn = true;
				}
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else if (mx >= 580 && mx <= 950 && my >= 100 && my <= 470)
			{
				if (musicOn)
				{
					musicOn = false;
					engine->stopAllSounds();
				}
				else
				{
					musicOn = true;
					engine->play2D("music/gamemusic.wav", true);
				}
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			if (score == 0)
			{
				if (mx >= 45 && mx <= 115 && my >= 60 && my <= 130)
				{
					gameState = 0;
					reset();
				}
				else if (mx >= 35 && mx <= 105 && my >= 620 && my <= 690)
				{
					gameState = 0;
					reset();
				}
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else
			{
				if (mx >= 1095 && mx <= 1250 && my >= 655 && my <= 695)
				{
					gameState = 8;
				}
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
		}
		else if (gameState == 5)
		{
			if (mx >= 45 && mx <= 115 && my >= 60 && my <= 160)
			{
				gameState = 0;
				reset();
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else if (mx >= 35 && mx <= 105 && my >= 620 && my <= 690)
			{
				gameState = 0;
				reset();
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
		}
		else if (gameState == 6)
		{
			if (mx >= 455 && mx <= 830 && my >= 190 && my <= 285)
			{
				gameState = 8;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else if (mx >= 345 && mx <= 555 && my >= 315 && my <= 420)
			{
				gameState = 0;
				reset();
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else if (mx >= 585 && mx <= 700 && my >= 315 && my <= 420)
			{
				ifstream read("Text\\highScore.txt");
				for (int i = 0; i < 10; i++)
				{
					read >> hScore[i];
				}
				read.close();
				gameState = 2;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else if (mx >= 730 && mx <= 840 && my >= 315 && my <= 420)
			{
				gameState = 4;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
		}
		else if (gameState == 7)
		{
			if (mx >= 200 && mx <= 455 && my >= 120 && my <= 240)
			{
				charbg = 1;
				gameState = 8;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
				input = true;
			}
			else if (mx >= 835 && mx <= 1095 && my >= 120 && my <= 240)
			{
				charbg = 2;
				gameState = 8;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
				input = true;
			}
			else if (mx >= 45 && mx <= 115 && my >= 60 && my <= 130)
			{
				gameState = 1;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else if (mx >= 35 && mx <= 105 && my >= 620 && my <= 690)
			{
				gameState = 0;
				reset();
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
		}
		else if (gameState == 8)
		{
			if (mx >= 35 && mx <= 105 && my >= 620 && my <= 690)
			{
				gameState = 0;
				reset();
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else if (mx >= 40 && mx <= 110 && my >= 60 && my <= 130)
			{
				gameState = 6;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
		}
		else if (gameState == 9)
		{
			if (mx >= 35 && mx <= 105 && my >= 620 && my <= 690)
			{
				gameState = 0;
				reset();
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
		}
		else if (gameState == 11)
		{
			if (mx >= 120 && mx <= 530 && my >= 250 && my <= 420)
			{
				gameState = 1;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else if (mx >= 750 && mx <= 1160 && my >= 250 && my <= 420)
			{
				gameState = 13;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else if (mx >= 45 && mx <= 115 && my >= 60 && my <= 130)
			{
				gameState = 0;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else if (mx >= 35 && mx <= 105 && my >= 620 && my <= 690)
			{
				gameState = 0;
				reset();
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
		}
		else if (gameState == 12)
		{
			if (mx >= 45 && mx <= 115 && my >= 60 && my <= 130)
			{
				gameState = 15;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else if (mx >= 35 && mx <= 105 && my >= 620 && my <= 690)
			{
				gameState = 0;
				reset();
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
		}
		else if (gameState == 13)
		{
			if (mx >= 435 && mx <= 835 && my >= 340 && my <= 460) // 436  835 380 260
			{
				isClock = false;
				gameState = 17;
				randWordle();
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else if (mx >= 435 && mx <= 835 && my >= 145 && my <= 260) // 436  835 575 460
			{
				isClock = true;
				gameState = 17;
				randWordle();
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}

			else if (mx >= 45 && mx <= 115 && my >= 60 && my <= 130)
			{
				gameState = 11;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else if (mx >= 35 && mx <= 105 && my >= 620 && my <= 690)
			{
				gameState = 0;
				reset();
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
		}
		else if (gameState == 14)
		{
			if (mx >= 35 && mx <= 105 && my >= 620 && my <= 690)
			{
				gameState = 0;
				reset();
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
		}
		else if (gameState == 15)
		{
			if (mx >= 120 && mx <= 530 && my >= 250 && my <= 420)
			{
				gameState = 3;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else if (mx >= 750 && mx <= 1160 && my >= 250 && my <= 420)
			{
				gameState = 12;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else if (mx >= 45 && mx <= 115 && my >= 60 && my <= 130)
			{
				gameState = 0;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
			else if (mx >= 35 && mx <= 105 && my >= 620 && my <= 690)
			{
				gameState = 0;
				reset();
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
			}
		}
		else if (gameState == 17)
		{
			if (mx >= 10 && mx <= 85 && my >= 620 && my <= 690)
			{
				gameState = 0;
				if (soundOn)
				{
					engine->play2D("music/mouse.wav");
				}
				resetGame();
			}
		}
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
	}
}

void iMouseMove(int mx, int my)
{
}

void iPassiveMouseMove(int mx, int my)
{
}
#endif
#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;

#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include "consthandle.h"
//#include "mystd.h"

static int _input_text_lw_ = 0;

void SetConsoleColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y)
{
	COORD pos = {x, y};
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE); // 获取标准输出设备句柄
	SetConsoleCursorPosition(hOut, pos);		   //两个参数分别是指定哪个窗体，具体位置
}

std::string get(int NowLine, int Maxline)
{
	bool find = false;
	int start = 1;
	int NowLine_ = 1;
	int MaxLine_ = 1;
	std::string space_s = "";
	while (!find)
	{
		start = start * 10;
		if (NowLine >= start)
		{
			NowLine_++;
			MaxLine_++;
		}
		else if (Maxline >= start)
		{
			MaxLine_++;
		}
		else
		{
			find = true;
		}
	}
	_input_text_lw_ = MaxLine_ + 1;
	for (int i = 0; i < MaxLine_ - NowLine_; i++)
	{
		space_s += " ";
	}
	return space_s;
}

struct wMouse
{
	unsigned int x;
	unsigned int y;
};

class codeBox
{
	private:
	public:
};

int main()
{
	/*
	string fileName = "F:\CODE\c_free\myc_ide\test.cpp";
	FILE *fp = fopen(fileName.data(),"r");
	if(fp == NULL)
	    return 1;
    else{
    	
    }
    */
	wMouse mouse;
	mouse.x = 0;
	mouse.y = 0;
	int line = 1;
	std::vector<std::string> _data_(line, "");
	char letter;
	int ch;
	int mode = 0;
	SetConsoleColor(10);
	cout << get(line, 100) << line << "|";
	SetConsoleColor(12);

	for (;;)
	{
		if (_kbhit())
		{
			ch = _getch();
			mode = CHE::getLetter(ch, &letter);
			if (mode == CHE::GLOK)
			{
				mouse.x += 1;
				_data_[_data_.size() - 1] += letter;
				cout << letter;
			}
			else
			{
				if (ch == CHE::INPUT_KEY_FKEY || ch == CHE::INPUT_KEY_DIR)
				{
					ch = _getch();
					if (ch == CHE::INPUT_KEY_DIR_W && mouse.y > 0)
					{
						mouse.y--;
						gotoxy(_input_text_lw_ + mouse.x, mouse.y);
					}
				}
				else if (ch == CHE::INPUT_KEY_ENTER)
				{
					line++;
					mouse.y++;
					mouse.x = 0;
					_data_.resize(_data_.size() + 1, "");
					cout << endl;
					SetConsoleColor(10);
					cout << get(line, 100) << line << "|";
					SetConsoleColor(12);
				}
				else if (ch = CHE::INPUT_KEY_BACKSPACE)
				{
					if (mouse.x == _data_[mouse.y].length - 1)
					{
						if (_data_[line - 1] == "\0" && line > 1)
						{
							mouse.x = _data_[--line - 1].length();
							gotoxy(_input_text_lw_ + mouse.x, --mouse.y);
							_data_.resize(_data_.size() - 1);
						}
						else if (_data_[line - 1] != "\0")
						{
							gotoxy(_input_text_lw_ + --mouse.x, mouse.y);
							cout << " ";
							gotoxy(_input_text_lw_ + mouse.x, mouse.y);
							_data_[_data_.size() - 1].resize(_data_[_data_.size() - 1].length() - 1);
						}
					}
					else
					{
						if(_data_)
					}
				}

				else if (ch == CHE::INPUT_KEY_ESC)
				{

					system("cls");
					for (unsigned long i = 0; i < _data_.size(); i++)
					{
						cout << _data_[i] << endl;
					}
					cin.get();
					cin.get();
					return 0;
				}
			}
		}
	}
}
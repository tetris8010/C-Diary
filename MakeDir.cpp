#include "Diary.h"

void MakeDir(char filename[20], char *year, char* month) {// ��������(ex.2018.06)
	strcat(filename, year);
	strcat(filename, ".");
	strcat(filename, month);
	_mkdir(filename);
}
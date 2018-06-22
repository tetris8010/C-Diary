#pragma once 
#include "Diary.h"
#include "DiaryF.h"


void GetDairy() {
	char wh, em;
	char letter[500];
	char filename[20];
	Date date;
	Emotion emotion;

	cout << "��¥(YYYY MM DD): ";
	cin >> date.year >> date.month >> date.day;
	cout << "����: ";
	cin >> wh;
	cout << "����(���:H, ����:J, ����:S, ȭ��:A, ����:B): ";
	cin >> em;
	emotion.GetEmotion(em);

	cout << "�ϱ⸦ �Է��ϼ���." << endl;
	LoadQuest();
	cin.getline(letter, 500, '��');

	WriteTxt(date.year, date.month, date.day, letter);

}

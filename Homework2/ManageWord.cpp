#include <iostream>
#include "ManageWord.h"

struct info_quest {
	char* name;
	fp func;
};

info_quest quests[] = {
	{ "02_1_1",&A02_1_1 },
	{ "02_1_2",&A02_1_2 },
	{ "02_1_3",&A02_1_3 },
	{ "02_2",A02_2 },
	{ "02_3",A02_3 },
	{ "02_4_1",A02_4_1 },
	{ "02_4_2",A02_4_2 }

};

void callFunc(int q_list) {
	int tmp;
	print_word(QUEST_COME, Q02_1_3); // display now quest number 

	quests[q_list].func();

	print_word(END_MESSAGE);
	std::cin >> tmp;
}

void print_word(word_list p_word, question_list q_list) {
	switch (p_word)
	{
	case word_list::WELLCOME_WORD:
		std::cout << "�ȳ��ϼ���! ������ �����Դϴ�." << std::endl;
		break;
	case word_list::SELECT_PAGE:
		std::cout << "��������Ʈ: " << std::endl;
		for (int i = START_NUMBER; i < END_NUMBER; i++) {
			std::cout << i<<".\t" << quests[i].name<< std::endl;
		}
		break;
	case SELECT_NUBER:
		std::cout << "���Ͻô� ��ȣ�� �Է����ּ���: ";
		break;
	case word_list::QUEST_COME:
		std::cout << "���� �����ϰ� �ִ� ������" << quests[q_list].name << "�Դϴ�" << std::endl;
		break;
	case END_MESSAGE:
		std::cout << "�ƹ�Ű�� �Է����ּ���~!" << std::endl;
		break;
	default:
		break;
	}
}
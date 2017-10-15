#include <iostream>
#include "ManageWord.h"


#define CHAPTER_NUMBER 4

struct info_quest {
	char* name;
	fp func;
};

struct chapters { //1
private:
	info_quest** chapter;
	int index;
public:
	chapters() {
		chapter = (info_quest**)malloc(sizeof(info_quest*) * CHAPTER_NUMBER);
		index = 0;
	}
	void setChapter(info_quest* data) {
		chapter[index] = data;
		index++;
	}
};


info_quest chapter2[] = {
	{ "02_1_1",&A02_1_1 },
	{ "02_1_2",&A02_1_2 },
	{ "02_1_3",&A02_1_3 },
	{ "02_2",A02_2 },
	{ "02_3",A02_3 },
	{ "02_4_1",A02_4_1 },
	{ "02_4_2",A02_4_2 }
};


info_quest** quest_info_list;



int chapter_n[] = {
	0,7,2,3
};

int getNumberINC(int n) {
	int result = 0;
	for (int i = 0; i < n;3 i++) {
		result += chapter_n[i];
	}
	return result;
}

void callFunc(int q_list) {
	int tmp;
	print_word(QUEST_COME, Q02_1_3); // display now quest number 

	quests[q_list].func();

	print_word(END_MESSAGE);
	std::cin >> tmp;
}

void print_word(word_list p_word, int data) {
	switch (p_word)
	{
	case word_list::WELLCOME_WORD:
		std::cout << "안녕하세요! 성주의 과제입니다." << std::endl;
		break;
	case word_list::SELECT_PAGE:
		std::cout << "문제리스트: " << std::endl;
		for (int i = getNumberINC(data); i < getNumberINC(data)+chapter_n[data+1]; i++) {
			std::cout << i<<".\t" << quests[i].name<< std::endl;
		}
		break;
	case SELECT_CHEPTER:
		std::cout << "원하시는 챕터번호를 입력해주세요: ";
			break;
	case SELECT_NUBER:
		std::cout << "원하시는 번호를 입력해주세요: ";
		break;
	case word_list::QUEST_COME:
		std::cout << "지금 실행하고 있는 문제는" << quests[data].name << "입니다" << std::endl;
		break;
	case END_MESSAGE:
		std::cout << "아무키나 입력해주세요~!" << std::endl;
		break;
	default:
		break;
	}
}
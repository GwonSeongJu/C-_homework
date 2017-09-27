#ifndef MANAGEWORD_H

#include "A02_1.h"
#include "A02_2.h"
#include "A02_3.h"
#include "A02_4.h"

typedef void(*fp)(void);

enum word_list { WELLCOME_WORD, SELECT_PAGE, QUEST_COME, SELECT_NUBER , END_MESSAGE};


enum question_list {START_NUMBER =0,Q02_1_1=0,Q02_1_2,Q02_1_3,Q02_2,Q02_3,Q02_4_1,Q02_4_2,END_NUMBER}; 



void callFunc(int q_list);
void print_word(word_list p_word, question_list q_list = question_list::START_NUMBER);

#endif // !MANAGEWORD_H

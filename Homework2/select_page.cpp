#include <iostream>
#include "ManageWord.h"

void goSelect() {
	int input_Value;
	fp f_tmp;
	print_word(word_list::WELLCOME_WORD);
	while (true) {
		print_word(word_list::SELECT_PAGE);
		print_word(SELECT_NUBER);

		std::cin >> input_Value;
		if (input_Value == -1) break;
		if (input_Value >= START_NUMBER && input_Value < END_NUMBER) {
			callFunc(input_Value);
		}

	}
	print_word(END_MESSAGE);
	std::cin >> input_Value;
}
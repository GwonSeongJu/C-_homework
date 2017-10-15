#include <iostream>
#include "ManageWord.h"

#define START_C 0
#define LAST_C 4

void goSelect() {
	int input_Value, ch_inc_val;
	fp f_tmp;
	print_word(word_list::WELLCOME_WORD);
	while (true) {
		
		
		for (int i = START_C; i <= LAST_C; i++) {
			std::cout << i << "ц╘ем" << std::endl;
		}
		print_word(SELECT_CHEPTER);
		std::cin >> input_Value;
		ch_inc_val = getNumberINC(input_Value);

		print_word(word_list::SELECT_PAGE);
		print_word(SELECT_NUBER);
		std::cin >> input_Value;
		input_Value += ch_inc_val;
		if (input_Value == -1) break;
		if (input_Value >= START_NUMBER && input_Value < END_NUMBER) {
			callFunc(input_Value);
		}

	}
	print_word(END_MESSAGE);
	std::cin >> input_Value;
}
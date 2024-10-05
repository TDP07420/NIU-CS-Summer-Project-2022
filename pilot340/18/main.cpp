#include <iostream>
#include <string>
#include <cstring>

int main()
{
	std::cin >> std::noskipws;
	std::string input;
	
	int n = input.length();

	
	std:getline(std::cin >> std::noskipws, input);
	
	char input_char[n + 1];
	
	std::strcpy(input_char, input.c_str());
	
	for(size_t i = 0; i < strlen(input_char); i++)
	{
		switch(input.at(i))
		{
			case '&':
				input_char[i] = '&amp';
				break;
			case '<':
				input_char[i] = '&lt';
				break;
			case '>':
				input_char[i] = '&gt';
				break;
			case '"':
				input_char[i] = '&quot';
				break;
			case "'":
				input_char[i] = '&apos';
				break;
		}
	}
	
	return 0;
}

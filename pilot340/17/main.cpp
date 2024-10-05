#include <iostream>
#include <ctype.h>
#include <cstring>

using namespace std;

int main()
{
	//declare string input
	string input;
	int n = input.length();
	
	//read from stdin
	while(getline(cin,input))
	{
		cout << input << endl;
		
		cout << "input = " << input << endl;
	
		//declare array to store string
		char inchar[n + 1];
	
		//copy string into char array
		strcpy(inchar, input.c_str());
		/*for(size_t i = 0; i < input.size(); i++)
		{
			inchar[i] = input.at(i);
		}*/
	
		cout << "char array : " << endl;
	
	}
	

	
	
	return 0;
}

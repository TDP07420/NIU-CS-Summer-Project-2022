#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
	//declare input stream
	string istream;
	
	//read from stdin
	while(cin)
	{
		getline(cin,istream);
		cout << istream << endl;
	}
	
	return 0;
}

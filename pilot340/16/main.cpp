#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	//declare infile stream
	ifstream infile;
	
	
	
	//Open input file, test for failure
	infile.open(argv[1]);
	if(!infile)
	{
		cerr << "unable to open" << argv[1] << endl;
		exit(1);
	}
	
	//declare input holder
	string input;
	
	//read from file
	while(infile)
	{
		getline(infile,input);
		
		//create stringstream from input
		//stringstream ss(input);
		
		/*for(string i; ss >> i;)
		{
			size_t pos = input.find(' '); // search for space
			if(pos != string::npos)
				//i.replace(pos, 5, ',');
		}
		*/
		
		cout << input;
		
		//infile.close();
	}
	
	
	return 0;
}

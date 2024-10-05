#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

bool valid_sudoku(vector<vector<int>> &s)
{
	//boolean for traversal
	bool traverse[s.size()];
	
	//checking for valid 9x9 matrix
	if(s.size() != 9 || s[0].size() != 9)
	{
		return false;
	}
	
	//check for column validation
	for(int i = 0; i < s.size(); i++)
	{
		//initialize traverse array
		memset(traverse, false, sizeof(traverse));
		
		for(int j = 0; j < s[i].size(); j++)
		{
			//store value of [i][j]
			int value = s[i][j];
			
			//check for duplications
			if(traverse[value])
			{
				return false;
			}
			traverse[value] = true;
		}
	}
	
	//check for row validation
	for(int i = 0; i < s.size(); i++)
	{
		memset(traverse,false,sizeof(traverse));
		
		for(int j = 0; j < s.size(); j++)
		{
			int value = s[i][j];
		
			if(traverse[value])
			{
				return false;
			}
			traverse[value] = true;	
		}	
	}
	
	//check for block validation
	
	
	
}


static void print_matrix(vector<vector<int>> &m)
{

    if (m.size() == 0)
        return;

    int nr = m.size();
    int r, c;

    for (r = 0; r < nr; r ++)
    {
	int nc = m[r].size();
        for (c = 0; c < nc; c ++)
            cout << m[r][c] << " ";
        cout << endl;
    } // endfor 

    return;

} // end print_matrix()

int main(int argc, char *argv[])
{

// https://sandiway.arizona.edu/sudoku/examples.html

// valid
vector<vector<int>>  s1 =
    {   
	{4,3,5,2,6,9,7,8,1},
	{6,8,2,5,7,1,4,9,3},
	{1,9,7,8,3,4,5,6,2},
	{8,2,6,1,9,5,3,4,7},
	{3,7,4,6,8,2,9,1,5},
	{9,5,1,7,4,3,6,2,8},
	{5,1,9,3,2,6,8,7,4},
	{2,4,8,9,5,7,1,3,6},
	{7,6,3,4,1,8,2,5,9}
    };
    print_matrix(s1);
    cout << (valid_sudoku(s1) ? "valid" : "invalid")  << endl; // valid

// invalid, swapped 4,3 in upper left corner from s1
vector<vector<int>>  s2 =
    {   
	{3,4,5,2,6,9,7,8,1}, 
	{6,8,2,5,7,1,4,9,3},
	{1,9,7,8,3,4,5,6,2},
	{8,2,6,1,9,5,3,4,7},
	{3,7,4,6,8,2,9,1,5},
	{9,5,1,7,4,3,6,2,8},
	{5,1,9,3,2,6,8,7,4},
	{2,4,8,9,5,7,1,3,6},
	{7,6,3,4,1,8,2,5,9}
    };
    print_matrix(s2);
    cout << (valid_sudoku(s2) ? "valid" : "invalid")  << endl; // invalid

// valid
vector<vector<int>>  s3 =
    {   
	{1,5,2,4,8,9,3,7,6},
	{7,3,9,2,5,6,8,4,1},
	{4,6,8,3,7,1,2,9,5},
	{3,8,7,1,2,4,6,5,9},
	{5,9,1,7,6,3,4,2,8},
	{2,4,6,8,9,5,7,1,3},
	{9,1,4,6,3,7,5,8,2},
	{6,2,5,9,4,8,1,3,7},
	{8,7,3,5,1,2,9,6,4}
    };
    print_matrix(s3);
    cout << (valid_sudoku(s3) ? "valid" : "invalid")  << endl; // valid

// invalid, swapped upper left corner 1 and lower right corner 4 from s3
vector<vector<int>>  s4 =
    {   
	{4,5,2,4,8,9,3,7,6},
	{7,3,9,2,5,6,8,4,1},
	{4,6,8,3,7,1,2,9,5},
	{3,8,7,1,2,4,6,5,9},
	{5,9,1,7,6,3,4,2,8},
	{2,4,6,8,9,5,7,1,3},
	{9,1,4,6,3,7,5,8,2},
	{6,2,5,9,4,8,1,3,7},
	{8,7,3,5,1,2,9,6,1}
    };
    print_matrix(s4);
    cout << (valid_sudoku(s4) ? "valid" : "invalid")  << endl; // valid

// invalid, swapped 1,2 in upper left corner of center 3x3 block from s3
vector<vector<int>>  s5 =
    {   
	{1,5,2,4,8,9,3,7,6},
	{7,3,9,2,5,6,8,4,1},
	{4,6,8,3,7,1,2,9,5},
	{3,8,7,2,1,4,6,5,9},
	{5,9,1,7,6,3,4,2,8},
	{2,4,6,8,9,5,7,1,3},
	{9,1,4,6,3,7,5,8,2},
	{6,2,5,9,4,8,1,3,7},
	{8,7,3,5,1,2,9,6,4}
    };
    print_matrix(s5);
    cout << (valid_sudoku(s5) ? "valid" : "invalid")  << endl; // valid

    exit(0);

} // end main()


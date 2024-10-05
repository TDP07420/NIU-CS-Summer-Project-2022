#include <iostream>
#include <vector>
using namespace std;

int maxtreasure(vector<vector<int>> &d)
{
	//declare row and col iterators
	vector<vector<int>>::iterator row;
	vector<int>::iterator col;
	
	//validate if vector is a rectangle
	for(size_t i = 0; i < d.size(); i++)
	{
		if(d[i].size() != d.size())
			return -1;
	}
	
	for(row = d.begin(); row != d.end(); row++)
	{
		for(col = row->begin(); col != row->end(); col++)
		{
			//if(d.at(row).at(col) < )
		}
	}
	
};

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

vector<vector<int>>  d1 =
    {   
	{1, 1, 1, 1},
        {4, 4, 4, 4},
        {2, 2, 2, 2},
        {3, 3, 3, 3}
    };
    print_matrix(d1);
    cout << maxtreasure(d1) << endl; // 16

vector<vector<int>>  d2 =
    {   {14, 11, 12, 13},
        {13, 14, 11, 12},
        {12, 13, 14, 11},
        {11, 12, 13, 14}
    };
    print_matrix(d2);
    cout << maxtreasure(d2) << endl; // 56

vector<vector<int>>  d3 =
    {   {1, 3, 1, 5},
        {2, 2, 4, 1},
        {5, 0, 2, 3},
        {0, 6, 1, 2}
    };
    print_matrix(d3);
    cout << maxtreasure(d3) << endl; // 16

vector<vector<int>>  d4 =
    {   {0, 2, 0, 0},
        {2, 0, 2, 0},
        {0, 0, 0, 2},
        {0, 0, 3, 0}
    };
    print_matrix(d4);
    cout << maxtreasure(d4) << endl; // 8

vector<vector<int>>  d5 =
    {   {0, 2, 0, 0},
        {2, 0, 2, 0},
        {0, 2, 0, 2},
        {0, 0, 3, 0}
    };
    print_matrix(d5);
    cout << maxtreasure(d5) << endl; // 9

vector<vector<int>>  d6 =
    {   
	{100}
    };
    print_matrix(d6);
    cout << maxtreasure(d6) << endl; // 100


vector<vector<int>>  d7 =
    {   
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };
    print_matrix(d7);
    cout << maxtreasure(d7) << endl; // 10

vector<vector<int>>  d8 =
    {   
	{1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
	{0, 1, 0, 1, 0, 1, 0, 1, 0, 1}
    };
    print_matrix(d8);
    cout << maxtreasure(d8) << endl; // 10

vector<vector<int>>  d9 =
    {   
	{0, 0, 0, 0, 100},
	{0, 0, 0, 0, 0},
	{1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1}
    };
    print_matrix(d9);
    cout << maxtreasure(d9) << endl; // 103

vector<vector<int>>  d10 =
    {   
	{1, 3, 1, 5},
	{2, 2, 4, 1}
    };
    print_matrix(d10);
    cout << maxtreasure(d10) << endl; // 14

vector<vector<int>>  d11 =
    {   
	{1, 3, 1},
	{2, 2},
	{5, 0, 2}
    };
    print_matrix(d11);
    cout << maxtreasure(d11) << endl; // -1, not a rectangle


    exit(0);

} // end main()

#include <iostream>
#include <vector>
using namespace std;

vector<int>  diamondsequence(vector<vector<int>> &m)
{
	//initialize sequence
	vector<int> dseq;
	
	//validate if m is a square matrix
	for(long unsigned int i = 0; i < m.size(); i++)
	{
		if(m[i].size() != m.size())
			return dseq; 
	}
	
	//validate if matrix is odd
	for(long unsigned int i = 0; i < m.size(); i++)
	{
		if(m.size() % 2 == 0 || m[i].size() % 2 == 0)
			return dseq;
	}
	
	//traversal
	for(long unsigned int i = 0; i < m.size(); i++)
	{
		for(long unsigned int j = 0, k = 0; j < m[i].size(); j++, k++)
		{
			if(i == (m.size() / 2) || j == (m[i].size() / 2) || i == (m.size() / 2) + k + 1||
					 j == (m[i].size() / 2) + k + 1 || i == (m.size() / 2) - k || j == (m[i].size() / 2) - k)
			{
				dseq.push_back(m[i][j]);
			}
		}
	}

	return dseq;
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

static void print_vec(vector<int> &v)
{
    int i;
    int s = v.size();

    for (i = 0; i < s; i ++)
        cout << v[i] << " ";
    cout << endl;

    return;

} // end print_vec() 

int main(int argc, char *argv[])
{

vector<vector<int>>  m1 =
    {   {1, 2, 3},
        {7, 8, 9},
        {4, 5, 6}
    };
    print_matrix(m1);
    vector<int> v1 = diamondsequence(m1); 
    print_vec(v1); cout << endl;
    // 2 9 5 7

vector<vector<int>>  m2 =
    {   
	{ 1,  2,  3,  4,  5},
	{11, 12, 13, 14, 15},
	{ 6,  7,  8,  9, 10},
	{21, 22, 23, 24, 25},
	{16, 17, 18, 19, 20}
    };
    print_matrix(m2);
    vector<int> v2 = diamondsequence(m2); 
    print_vec(v2); cout << endl;
    // 3 14 10 24 18 22 6 12

vector<vector<int>>  meven =
    {   
	{ 1,  2,  4,  5},
	{ 6,  7,  9, 10},
	{21, 22, 24, 25},
	{16, 17, 19, 20}
    };
    print_matrix(meven);
    vector<int> veven = diamondsequence(meven); 
    print_vec(veven); cout << endl;
    // empty

vector<vector<int>>  mrect =
    {   {1, 2, 3},
        {4, 5, 6}
    };
    print_matrix(mrect);
    vector<int> vrect = diamondsequence(mrect); 
    print_vec(vrect); cout << endl;
    // empty

    exit(0);

} // end main()


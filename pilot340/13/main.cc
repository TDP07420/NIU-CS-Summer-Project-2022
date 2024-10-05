#include <iostream>
#include <vector>
using namespace std;

vector<int> RotatingCornerSpiral(vector<vector<int>> &m)
{
	vector<vector<bool>> visited;	//to check if element has been visited
	
	vector<int> spiral;	//initialize spiral vector for list input
	
	int corner1 = m[0][0];	//left top corner
	int corner2 = m[0][m.size()-1];	//right top corner
	int corner3 = m[m.size()-1][m.size()-1];	//right bottom  corner
	int corner4 = m[m.size()-1][0]; //left bottom corner
	
	for(long unsigned int i = 0; i < m.size(); ++i)
	{
		spiral.push_back(corner1);
		spiral.push_back(corner2);
		spiral.push_back(corner3);
		spiral.push_back(corner4);
		
		corner1 = m[0][0] + 1;
		corner2++;
		corner3++;
		corner4++;
	}	
	
	return spiral;
};

static void print_matrix(vector<vector<int>> &m)
{

    if (m.size() == 0)
	return;

    int nr = m.size();
    int nc = m[0].size();
    int r, c;

    for (r = 0; r < nr; r ++)
    {
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

vector<vector<int>> a4{ { 1,  2,  3,  4},
                        { 5,  6,  7,  8},
                        { 9, 10, 11, 12},
                        {13, 14, 15, 16}};
    print_matrix(a4);
    vector<int> v4 = RotatingCornerSpiral(a4); 
    print_vec(v4); cout << endl;
    // 1 4 16 13  2 8 15 9  3 12 14 5 
    //6 7 11 10

vector<vector<int>> a2{ { 1,  2},
                        { 3,  4}};
    print_matrix(a2);
    vector<int> v2 = RotatingCornerSpiral(a2); 
    print_vec(v2); cout << endl;
    // 1 2 4 3

vector<vector<int>> a3{ { 1,  2,  3},
                        { 4,  5,  6},
                        { 7,  8,  9}};
    print_matrix(a3);
    vector<int> v3 = RotatingCornerSpiral(a3); 
    print_vec(v3); cout << endl;
    // 1 3 9 7  2 6 8 4 
    // 5

vector<vector<int>> a1{ {100} };
    print_matrix(a1);
    vector<int> v1 = RotatingCornerSpiral(a1); 
    print_vec(v1); cout << endl;
    // 100

vector<vector<int>> a6{ 
			{ 1,  2,  3,  4,  5,  6},
                        {13, 14, 15, 16, 17, 18},
                        { 7,  8,  9, 10, 11, 12},
                        {19, 20, 21, 22, 23, 24},
                        {31, 32, 33, 34, 35, 36},
                        {25, 26, 27, 28, 29, 30}
		    };
    print_matrix(a6);
    vector<int> v6 = RotatingCornerSpiral(a6); 
    print_vec(v6); cout << endl;
    // 1 6 30 25    2 18 29 31   3 12 28 19  4 24 27 7  5 36 26 13 
    // 14 17 35 32  15 11 34 20  16 23 33 8
    // 9 10 22 21

vector<vector<int>> a7{ 
			{ 1,  2,  3,  4,  5,  6,  7},
			{15, 16, 17, 18, 19, 20, 21},
			{ 8,  9, 10, 11, 12, 13, 14},
			{29, 30, 31, 32, 33, 34, 35},
			{22, 23, 24, 25, 26, 27, 28},
			{43, 44, 45, 46, 47, 48, 49},
			{36, 37, 38, 39, 40, 41, 42}
		    };
    print_matrix(a7);
    vector<int> v7 = RotatingCornerSpiral(a7); 
    print_vec(v7); cout << endl;
    // 1 7 42 36     2 21 41 43   3 14 40 22  4 35 39 29  5 28 38 8  6 49 37 15
    // 16 20 48 44  17 13 47 23  18 34 46 30  19 27 45 9
    // 10 12 26 24  11 33 25 31
    // 32


vector<vector<int>> anotsquare{ 
				{ 1,  2,  3},
				{ 7,  8,  9}
			    };
    print_matrix(anotsquare);
    vector<int> vnotsquare = RotatingCornerSpiral(anotsquare); 
    print_vec(vnotsquare); cout << endl;

    exit(0);

} // end main()


#include <iostream>
#include <vector>
using namespace std;

#include "l1.h"
#include "l2.h"
#include "l3.h"
#include "l4.h"
#include "l5.h"
#include "l10.h"
#include "l20.h"
#include "l50.h"
#include "l100.h"

#define BOT    1
#define RIGHT  (1 << 1)

void labyrinth(vector<vector<int>> &l, vector<vector<bool>> &p)
{
    //initialize x,y coordinates
    int x = 0;
    int y = 0;
    
    // l is at <N-1,N-1>
    if(l[x][y] == l[l.size()-1][l[x].size()-1])
    {
    	p[x][y] = true;
	}
	
	//check if current coord in already part of the path
	if(p[x][y] == true)
	{
		p[x][y] = false;
	}
	
	//mark coord for solution path
	p[x][y] = true;
	
	//move to x direction
	/*if(p[x+1][y] == true)
	{
		p[x][y] == true;
	}*/
		
}

static void print_labyrinth(vector<vector<int>> &l)
{
    int r, c;

    for (r = 0; r < l.size(); r ++)
    {
	for (c = 0; c < l[r].size(); c ++)
	    cout << l[r][c] << " ";
	cout << endl;
    } // endfor 

    cout << "+";
    for (c = 0; c < l.size(); c ++)
        cout << "-+";
    cout << endl;
    for (r = 0; r <l.size(); r ++)
    {
        cout << "|";
        for (c = 0; c < l[r].size(); c ++)
            cout <<  ' ' << (l[r][c] & RIGHT ? '|' : ' ');
	cout << endl;

        cout << "+";
        for (c = 0; c < l[r].size(); c ++)
            cout << (l[r][c] & BOT ? '-' : ' ') << '+';
	cout << endl;
    } /* endfor */
    cout << endl;

    return;

} // end print_labyrinth()

static void print_path(vector<vector<int>> &l, vector<vector<bool>> &p)
{
    int r, c;

    for (r = 0; r < p.size(); r ++)
    {
	for (c = 0; c < p[r].size(); c ++)
	    cout << p[r][c] << " ";
	cout << endl;
    } // endfor 

    cout << "+";
    for (c = 0; c < p.size(); c ++)
        cout << "-+";
    cout << endl;
    for (r = 0; r < p.size(); r ++)
    {
        cout << "|";
        for (c = 0; c < p[r].size(); c ++)
            cout <<  (p[r][c] ? '*' : ' ') << (l[r][c] & RIGHT ? '|' : ' ');
	cout << endl;

        cout << "+";
        for (c = 0; c < p[r].size(); c ++)
            cout << (l[r][c] & BOT ? '-' : ' ') << '+';
	cout << endl;
    } /* endfor */
    cout << endl;

    return;

} // end print_path()

int main(int argc, char *argv[])
{

    print_labyrinth(l1);
    labyrinth(l1, p1);
    print_path(l1, p1);
    cout << "-------------------" << endl;

    print_labyrinth(l2);
    labyrinth(l2, p2);
    print_path(l2, p2);
    cout << "-------------------" << endl;

    print_labyrinth(l3);
    labyrinth(l3, p3);
    print_path(l3, p3);
    cout << "-------------------" << endl;

    print_labyrinth(l4);
    labyrinth(l4, p4);
    print_path(l4, p4);
    cout << "-------------------" << endl;

    print_labyrinth(l5);
    labyrinth(l5, p5);
    print_path(l5, p5);
    cout << "-------------------" << endl;

    print_labyrinth(l10);
    labyrinth(l10, p10);
    print_path(l10, p10);
    cout << "-------------------" << endl;

    print_labyrinth(l20);
    labyrinth(l20, p20);
    print_path(l20, p20);
    cout << "-------------------" << endl;

    print_labyrinth(l50);
    labyrinth(l50, p50);
    print_path(l50, p50);
    cout << "-------------------" << endl;

    print_labyrinth(l100);
    labyrinth(l100, p100);
    print_path(l100, p100);
    cout << "-------------------" << endl;

    exit(0);

} // end main()


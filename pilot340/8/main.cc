#include <iostream>
using namespace std;

int captured(int kr, int kc, int pr, int pc, int maxmoves)
{
	if(kr < 0 || kr > 7 || kc < 0 || kc > 7 || pr < 0 || pr > 7 ||
	   pc < 0 || pc > 7)
	{
		return -1;	//knight and pawn are out of bounds
	}
	else if (kr == pr && kc == pc && maxmoves == 0)
	{
		return -1;	//knight and pawn are in same square
	}
	else if(maxmoves < 1)
	{
		return -1;	//invalid amt of moves	
	}
	else if(kr == pr || kc == pc)
	{
		
		return 1;	//knight can capture in n moves
	}
	else 
	{
		if(kr < pr)
			kr = kr + 2;
		else
			kr = kr -2;
		
		if (kc < pc)
			kc++;
		else
			kc--;
		
		return 0;	//connot capture in n moves
	}
};

static void print_board(int kr, int kc, int pr, int pc)
{
    cout << "  ";
    for (int i = 0; i < 8; i ++)
    cout << i << " ";
    cout << endl;
    for (int i = 0; i < 8; i ++)
    {
	cout << i << " ";
	for (int j = 0; j < 8; j ++)
	{
	    if (i == kr && j == kc)
		cout << "K ";
	    else if (i == pr && j == pc)
		cout << "p ";
	    else
		cout << "- "; 
	} /* endfor */
	cout << endl;
    } /* endfor */

    return;

} /* end print_board() */

int main(int argc, char *argv[])
{
    int maxmoves, kr, kc, pr, pc; 
    bool caught;

    kr=3; kc=0; pr=0; pc=1;
    for (caught = false, maxmoves = 1; !caught; maxmoves ++)
    {
	print_board(kr, kc, pr, pc);
	cout << "maxmoves=" << maxmoves << endl;
	if (caught = captured(kr, kc, pr, pc, maxmoves))
	    cout <<"captured" << endl;
	else
	    cout <<"not captured" << endl;
    } // endfor
    cout << "--------------------" << endl;


    kr=4; kc=0; pr=0; pc=1; 
    for (caught = false, maxmoves = 1; !caught; maxmoves ++)
    {
	print_board(kr, kc, pr, pc);
	cout << "maxmoves=" << maxmoves << endl;
	if (caught = captured(kr, kc, pr, pc, maxmoves))
	    cout <<"captured" << endl;
	else
	    cout <<"not captured" << endl;
    } // endfor
    cout << "--------------------" << endl;

    kr=3; kc=3; pr=4; pc=4; // 2 moves
    for (caught = false, maxmoves = 1; !caught; maxmoves ++)
    {
	print_board(kr, kc, pr, pc);
	cout << "maxmoves=" << maxmoves << endl;
	if (caught = captured(kr, kc, pr, pc, maxmoves))
	    cout <<"captured" << endl;
	else
	    cout <<"not captured" << endl;
    } // endfor
    cout << "--------------------" << endl;

    kr=3; kc=3; pr=3; pc=4; // 3 moves
    for (caught = false, maxmoves = 1; !caught; maxmoves ++)
    {
	print_board(kr, kc, pr, pc);
	cout << "maxmoves=" << maxmoves << endl;
	if (caught = captured(kr, kc, pr, pc, maxmoves))
	    cout <<"captured" << endl;
	else
	    cout <<"not captured" << endl;
    } // endfor
    cout << "--------------------" << endl;

    kr=7; kc=0; pr=0; pc=0; // 5 moves
    for (caught = false, maxmoves = 1; !caught; maxmoves ++)
    {
	print_board(kr, kc, pr, pc);
	cout << "maxmoves=" << maxmoves << endl;
	if (caught = captured(kr, kc, pr, pc, maxmoves))
	    cout <<"captured" << endl;
	else
	    cout <<"not captured" << endl;
    } // endfor
    cout << "--------------------" << endl;

    exit(0);

} /* end main() */

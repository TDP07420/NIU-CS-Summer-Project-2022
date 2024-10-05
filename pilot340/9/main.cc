#include <iostream>
using namespace std;

int captured(int r1, int c1, int r2, int c2)
{
	int nmoves = 1; // initialize nmoves
	
	//possible x and y moves for a knight piece
	int kx[] = { 2, 2, -2, -2, 1, 1, -1, -1 };
	int ky[] = { -1, 1, 1, -1, 2, -2, 2, -2 };
				
	if(r1 < 0 || r1 > 7 || c1 < 0 || c1 > 7 || r2 < 0 || r2 > 7 ||
	   c2 < 0 || c2 > 7)
	{
		return -1;	//knight and pawn are out of bounds
	}
	else if (r1 == r2 && c1 == c2 && nmoves == 1)
	{
		return -1;	//knight and pawn are in same square
	}
	else if(nmoves < 1)
	{
		return -1;	//invalid amt of moves	
	}
	else
	{
		while(!(r1 == r2 && c1 == c2))	//while not captured
		{
			
		}
		
		return nmoves;	//knight captured
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
    int kr, kc, pr, pc; 

    kr=3; kc=0; pr=0; pc=1; // 2 moves
    print_board(kr, kc, pr, pc);
    cout <<"captured in " << captured(kr, kc, pr, pc) << " moves" << endl;
    cout << "--------------------" << endl;

    kr=4; kc=0; pr=0; pc=1; // 3 moves
    print_board(kr, kc, pr, pc);
    cout <<"captured in " << captured(kr, kc, pr, pc) << " moves" << endl;
    cout << "--------------------" << endl;

    kr=3; kc=3; pr=4; pc=4; // 2 moves
    print_board(kr, kc, pr, pc);
    cout <<"captured in " << captured(kr, kc, pr, pc) << " moves" << endl;
    cout << "--------------------" << endl;

    kr=3; kc=3; pr=3; pc=4; // 3 moves
    print_board(kr, kc, pr, pc);
    cout <<"captured in " << captured(kr, kc, pr, pc) << " moves" << endl;
    cout << "--------------------" << endl;

    kr=7; kc=0; pr=0; pc=0; // 5 moves
    print_board(kr, kc, pr, pc);
    cout <<"captured in " << captured(kr, kc, pr, pc) << " moves" << endl;
    cout << "--------------------" << endl;

    exit(0);

} /* end main() */


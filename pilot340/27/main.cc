#include <iostream>
using namespace std;

bool pentalpha(int place_order[])
{
	bool traversal[sizeof(place_order)];
	
	//stone is places in first spot once function is called
	traversal[place_order[0]] = true;
	
	for(int i = 0; i < sizeof(place_order); )
	{
		//place stone 2 pos away
		place_order[i] = i + 2;
		
		if(traversal[i] == false)
		{
			//record travel
			traversal[i] = true;
		}
	}
	
	//check traversal
	for(int i = 0; i < sizeof(traversal); i++)
	{
		if(traversal[i] == true)
			return true;
		else
			return false;
	}

	return true;
}

int main(int argc, char *argv[])
{

    int place_order[9];
    int i, j;

    for (i = 0; i < 10; i ++) 
    {
	place_order[0] = i;
	if (pentalpha(place_order))
	{
	    if (place_order[0] == i)
	    {
		for (j = 0; j < 10; j ++)
		    cout << place_order[j] << " ";
		cout << endl;
	    }
	    else
		cout << "ERROR: changed first move from " << i 
		    << " to " << place_order[0] << endl;
	}
	else
	{
	    cout << "starting on " << i << " has no solution" << endl;
	} // endif
    } // endfor

    exit(0);

} // end main()


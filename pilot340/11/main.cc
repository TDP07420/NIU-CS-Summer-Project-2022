#include <iostream>
#include <climits>
using namespace std;

int mintokens(int c, int a[], int len)
{
	
	if(c < 1)
		return -1;
	
	//declare result	
	int change = INT_MAX;		//check later to prevent overflow
	
	//Try every coin with smaller value of c
	for(int i = 0; i < len; i++)
	{
		if(a[i] <= c)
		{
			int sub_change = mintokens(c - a[i], a, len);
			
			//Checking for INT_MAX and see if change can be minimized
			if(sub_change != INT_MAX && sub_change + 1 < change )
				change = sub_change + 1;		
		}	
	}
	
	if(change != INT_MAX)
		return change;		
	else
		return -1;		//change not possible
}

static void print_array(int a[], int len)
{
    int i;

    cout << "[";
    if (len > 0)
    {
	for (i = 0; i < len-1; i ++)
	    cout << a[i] << ", ";
	cout << a[len-1];
    } //
    cout << "]" << endl;

    return;

} // end print_array()

int main(int argc, char *argv[])
{
    int a1[] = {5, 10, 25}, n1=3, c1=30; // 2
    cout << c1 << ": "; print_array(a1, n1);
    cout << mintokens(c1, a1, n1) << endl << endl;

    int a2[] = {5, 9, 1, 6}, n2=4, c2=11; // 2
    cout << c2 << ": "; print_array(a2, n2);
    cout << mintokens(c2, a2, n2) << endl << endl;

    int a3[] = {3, 17, 1, 4}, n3=4, c3=15; // 4
    cout << c3 << ": "; print_array(a3, n3);
    cout << mintokens(c3, a3, n3) << endl << endl;

    int a4[] = {5, 9, 3, 6}, n4=4, c4=7; // -1, not possible to make change
    cout << c4 << ": "; print_array(a4, n4);
    cout << mintokens(c4, a4, n4) << endl << endl;

    exit(0);

} // end main()


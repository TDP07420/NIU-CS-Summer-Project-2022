#include <iostream>
using namespace std;

int howmuchwater(unsigned int a[], int n)
{
	int area;				//water held between each space
	int left;				//height of left wall
	int right;				//height of right wall
	
	
	//checking for possible walls
	for(int i = 0; i < n -1; i++)
	{
		//find left maximum height
		left = a[i];
		for(int j = 0; j < i; j++)
		{
			left = max<int>(left, a[j]);
		}
		
		
		//find right maximum height
		right = a[i];
		for(int j = i + 1; j < n; j++)
		{
			right = max<int>(right, a[j]);
		}
		
		//find area within walls
		area = area + (min(left,right) - a[i]);
		cout << "area = " << area << endl;
	}
	
	cout << endl;
	return area;
}

static void print_array(unsigned int a[], int n)
{
    unsigned h, maxh;
    int i;

    if (a == nullptr || n < 1)
	return;

    maxh = 0;
    for (i = 0; i < n; i ++)
	if (a[i] > maxh)
	    maxh = a[i];

    for (h = maxh; h > 0; h --)
    {
	for (i = 0; i < n; i ++)
	    cout << (a[i] >= h ? 'b' : ' ');
	cout << endl;
    } // endfor

    for (i = 0; i < n; i ++)
	cout << '+';
    cout << endl;
    
    return;

} // end print_array()


int main(int argc, char *argv[])
{
    unsigned a1[] = {0, 0, 2, 0, 2, 0, 0, 0, 0, 0}; // 2
    int n1 = 10;
    print_array(a1, n1);
    cout << howmuchwater(a1, n1) << endl << endl;

    unsigned a2[] = {0, 0, 0, 3, 0, 2, 0, 4, 0, 0}; // 7
    int n2 = 10;
    print_array(a2, n2);
    cout << howmuchwater(a2, n2) << endl << endl;

    unsigned a3[] = {1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1, 1, 0}; // 6
    int n3 = 13;
    print_array(a3, n3);
    cout << howmuchwater(a3, n3) << endl << endl;

    unsigned a4[] = {0, 0, 0}; // 0
    int n4 = 3;
    print_array(a4, n4);
    cout << howmuchwater(a4, n4) << endl << endl;

    unsigned a5[] = {0, 0, 1}; // 0
    int n5 = 3;
    print_array(a5, n5);
    cout << howmuchwater(a5, n5) << endl << endl;

    int n6 = 3; 
    print_array(nullptr, n6); 
    cout << howmuchwater(nullptr, n6) << endl << endl; // -1

    unsigned a7[] = {0}; // -1
    int n7 = -1; 
    print_array(a7, n7); 
    cout << howmuchwater(a7, n7) << endl << endl; 

    int n8 = -1; 
    print_array(nullptr, n8); 
    cout << howmuchwater(nullptr, n8) << endl << endl; // -1

    exit(0);

} // end main()


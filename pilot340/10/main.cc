#include <iostream>
using namespace std;

int bricklayers(int b, int a[], int len)
{
	if (b <= 0 || len <= 0) //validating b and len
		return -1;
	else
	{
		for(int i = 0; i < len; i++)	//validating a[]
		{
			if(a[i] <= 0)
				return -1;
		}
	}
	
	int walltime; //initializing time for wall building.
	int total = 0;	  // total time 
	
	for(int i = 0; i < len; i++)
	{
		if(walltime != a[i])
		{
			walltime = 1 * b;
		}
		else
		{
			total = total + walltime;
		}
	}
	
	cout << "total test= " << total << endl;
	return total;
};

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
    int a1[] = {10,10, 10, 10}, n1=4, b1=0; // -1
    cout << b1 << ": "; print_array(a1, n1);
    cout << bricklayers(b1, a1, n1) << endl << endl;

    int a2[] = {1}, n2=0, b2=1; // -1
    cout << b2 << ": "; print_array(a2, n2);
    cout << bricklayers(b2, a2, n2) << endl << endl;

    int a3[] = {0}, n3=1, b3=1; // -1
    cout << b3 << ": "; print_array(a3, n3);
    cout << bricklayers(b3, a3, n3) << endl << endl;

    int a4[] = {10, 10}, n4=2, b4=1; // 20
    cout << b4 << ": "; print_array(a1, n1);
    cout << bricklayers(b4, a4, n4) << endl << endl;

    int a5[] = {10, 10}, n5=2, b5=2; // 10
    cout << b5 << ": "; print_array(a5, n5);
    cout << bricklayers(b5, a5, n5) << endl << endl;

    int a6[] = {10, 10}, n6=2, b6=5; // 10
    cout << b6 << ": "; print_array(a6, n6);
    cout << bricklayers(b6, a6, n6) << endl << endl;

    int a7[] = {40, 10, 30, 20}, n7=4, b7=1; // 100
    cout << b7 << ": "; print_array(a7, n7);
    cout << bricklayers(b7, a7, n7) << endl << endl;

    int a8[] = {40, 10, 30, 20}, n8=4, b8=2; // 50
    cout << b8 << ": "; print_array(a8, n8);
    cout << bricklayers(b8, a8, n8) << endl << endl;

    int a9[] = {40, 10, 30, 20}, n9=4, b9=3; // 40
    cout << b9 << ": "; print_array(a9, n9);
    cout << bricklayers(b9, a9, n9) << endl << endl;

    int a10[] = {40, 10, 30, 20}, n10=4, b10=4; // 40
    cout << b10 << ": "; print_array(a10, n10);
    cout << bricklayers(b10, a10, n10) << endl << endl;

    int a11[] = {40, 10, 30, 20}, n11=4, b11=10; // 40
    cout << b11 << ": "; print_array(a11, n11);
    cout << bricklayers(b11, a11, n11) << endl << endl;

    exit(0);

} // end main()

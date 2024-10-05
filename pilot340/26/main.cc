#include <iostream>
using namespace std;

int sumisn(int a[], int len, int m, int n)
{
	//initialize sum variable
	int sum = 0;
	
	//find sum of arrays
	for(int i = 0; i < len; i++)
	{
		
		for(int j = 0; j < len; j++)
		{
			
			sum = sum + a[i];
		}
	}
	
	//base case, if sum == n return 
	if(sum == n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
	return sumisn(a, len - 1, m, n);
}


void print_array(int *A, int len)
{
    int i;

    cout << " A[] = {";
    for (i = 0; i < len-1; i ++) cout << A[i] << ", ";
    cout << A[len-1] << "}" << endl;

    return;

} // end print_array()

int main(int argc, char *argv[])
{

    int A1[] = {1, 2, 3, 4}, l1=4, m1=2, n1=10; // 0
    print_array(A1, l1);
    cout << "m=" << m1 << " sum=" << n1 
	<< (sumisn(A1, l1, m1, n1) ? " found" : " not found") << endl << endl;

    int A2[] = {1, 2, 3, 4}, l2=4, m2=4, n2=10; // 1
    print_array(A2, l2);
    cout << "m=" << m2 << " sum=" << n2 
	<< (sumisn(A2, l2, m2, n2) ? " found" : " not found") << endl << endl;

    int A3[] = {1}, l3=1, m3=4, n3=1; // 0
    print_array(A3, l3);
    cout << "m=" << m3 << " sum=" << n3 
	<< (sumisn(A3, l3, m3, n3) ? " found" : " not found") << endl << endl;

    int A4[] = {1}, l4=1, m4=1, n4=1; // 1
    print_array(A4, l4);
    cout << "m=" << m4 << " sum=" << n4 
	<< (sumisn(A4, l4, m4, n4) ? " found" : " not found") << endl << endl;

    int A5[] = {-1, 0, -2, 5, 1, 6, 2}, l5=7, m5=4, n5=0; // 1
    print_array(A5, l5);
    cout << "m=" << m5 << " sum=" << n5 
	<< (sumisn(A5, l5, m5, n5) ? " found" : " not found") << endl << endl;

    int A6[] = {30, 19, -4, 45, 10, -5, 90, 2, 45}, l6=9, m6=3, n6=180; // 1
    print_array(A6, l6);
    cout << "m=" << m6 << " sum=" << n6 
	<< (sumisn(A6, l6, m6, n6) ? " found" : " not found") << endl << endl;

    int A7[] = {1, 1, 1, 1, 1}, l7=5, m7=1, n7=1; // 1
    print_array(A7, l7);
    cout << "m=" << m7 << " sum=" << n7 
	<< (sumisn(A7, l7, m7, n7) ? " found" : " not found") << endl << endl;
    m7=1; n7=2; // 0
    print_array(A7, l7);
    cout << "m=" << m7 << " sum=" << n7 
	<< (sumisn(A7, l7, m7, n7) ? " found" : " not found") << endl << endl;


    exit(0);

} // end main() 


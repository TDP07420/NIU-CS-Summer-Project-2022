#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int loghaul(vector<int> &logs, int nw)
{
	//initialize variables
	int haul;
	int minhaul;
	
	//validation
	if(logs.empty())
		return -1;
	else if(nw < 1)
		return -1;
	else if(!std::is_sorted(logs.begin(),logs.end()))
		return -1;
	
	/*for(int i = 0; i < logs.size(); i++)
	{
		haul = 
	}*/
	
	
}

static void print_vector(vector<int> &v)
{
    int l = v.size();
    int i;
    cout << "{";
    for (i = 0; i < l; i ++)
    {
	cout << v[i];
	if (i < l-1) 
	    cout <<", ";
    } // endfor
    cout << "}" << endl;

    return;

} // end print_vector()

int main(int argc, char *argv[])
{
    vector<int> l1 = {2, 1}; int n1=3; // -1
    cout << "nw=" << n1 << ' '; print_vector(l1); 
    cout << loghaul(l1, n1) << endl << endl;
    vector<int> l3 = {1, 2}; int n3=0; // -1
    cout << "nw=" << n3 << ' '; print_vector(l3); 
    cout << loghaul(l3, n3) << endl << endl;
    vector<int> l4 = {}; int n4=5;     // -1
    cout << "nw=" << n4 << ' '; print_vector(l4); 
    cout << loghaul(l4, n4) << endl << endl;

    vector<int> l5 = {2, 4, 6}; int n5=2; // 6
    cout << "nw=" << n5 << ' '; print_vector(l5); 
    cout << loghaul(l5, n5) << endl << endl;

    vector<int> l6 = {1, 2}; int n6=3; // 2
    cout << "nw=" << n6 << ' '; print_vector(l6); 
    cout << loghaul(l6, n6) << endl << endl;

    vector<int> l7 = {12, 34, 67, 90}; int n7=2; // 113
    cout << "nw=" << n7 << ' '; print_vector(l7); 
    cout << loghaul(l7, n7) << endl << endl;

    vector<int> l8 = {10}; int n8=100; // 10
    cout << "nw=" << n8 << ' '; print_vector(l8); 
    cout << loghaul(l8, n8) << endl << endl;

    vector<int> l10 = {1, 1, 4, 6, 6, 10}; int n10; 
    // nw=1 => 28
    // nw=2 => 16
    // nw=3 => 12
    // nw=4,5,6 => 10
    for (n10 = 1; n10 <=6; n10++)
    {
	cout << "nw=" << n10 << ' '; print_vector(l10); 
	cout << loghaul(l10, n10) << endl << endl;
    } // endfor

    vector<int> l11 = {1, 1, 4, 6, 6, 8, 20}; int n11; 
    // nw=1 => 46
    // nw=2 => 26
    // nw=3,4,5,6,7 => 20
    for (n11 = 1; n11 <=7; n11++)
    {
	cout << "nw=" << n11 << ' '; print_vector(l11); 
	cout << loghaul(l11, n11) << endl << endl;
    } // endfor

    vector<int> l12 = {1, 2, 3, 4, 5, 6}; int n12; 
    // nw=1 => 21
    // nw=2 => 11
    // nw=3 => 9
    // nw=4,5,6 => 6
    for (n12 = 1; n12 <=6; n12++)
    {
	cout << "nw=" << n12 << ' '; print_vector(l12); 
	cout << loghaul(l12, n12) << endl << endl;
    } // endfor

    exit(0);

} // end main()


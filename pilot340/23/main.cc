#include <iostream>
#include <algorithm>
#include "tree.h"
using namespace std;

const int MaxNodes = 10;

enum NodeType {Root, Left, Right};

static void init(tree *v)
{
    int i;
    for (i = 0; i < MaxNodes; i ++)
	v[i].lc = v[i].rc = nullptr;
    return;
} // end init()

static void print_tree(tree *t, NodeType ty, int lvl)
{
    int i;

    if (t)
    {
	for (i = 0; i < lvl; i ++) cout << (ty == Left ? 'l' : 'r');
	cout << t->val << endl;
	print_tree(t->lc, Left,  lvl+1);
	print_tree(t->rc, Right, lvl+1);
    } // endif

    return;

} // end print_tree()


void sequencetree(tree *root)
{
	int tree_array[MaxNodes];	//initialize array to store tree values
	
	for(int i = 0; i < 10; i++)
	{	
		tree_array[i] = root[i].val;
	}
	
	cout << "size of array" << sizeof(tree_array) << endl;
	
	std::sort(std::begin(tree_array), std::end(tree_array));
	
	for(int i = 0; i < sizeof(tree_array); i++)
		cout << tree_array[i] << " ";
		cout << endl;
}

int main(int argc, char *argv[])
{

    tree t[MaxNodes];

    //   2
    //  / \
    // 3   52
    //    /
    //   3
    //  / \
    // 16  7
    // Output: 2 3 3 7 16 52
    init(t);
    t[0].lc = t+1; t[0].rc = t+2; t[0].val = 2;
                                  t[1].val = 3;
    t[2].lc = t+3;                t[2].val = 52;
    t[3].lc = t+4; t[3].rc = t+5; t[3].val = 3;
                                  t[4].val = 16;
                                  t[5].val = 7;
    print_tree(t, Root, 0); cout << "---------------" << endl;
    sequencetree(t); cout << endl;

    //   10
    // Output: 10
    init(t);
                                  t[0].val = 10;
    print_tree(t, Root, 0); cout << "---------------" << endl;
    sequencetree(t); cout << endl;

    //   8
    //  / \
    // 8   8
    //    / \
    //   8   8
    //  / \   \
    // 8   8   8
    // Output: 8 8 8 8 8 8 8 8
    init(t);
    t[0].lc = t+1; t[0].rc = t+2; t[0].val = 8;
                                  t[1].val = 8;
    t[2].lc = t+3; t[2].rc = t+4; t[2].val = 8;
    t[3].lc = t+5; t[3].rc = t+6; t[3].val = 8;
                   t[4].rc = t+7; t[4].val = 8;
                                  t[5].val = 8;
                                  t[6].val = 8;
                                  t[7].val = 8;
    print_tree(t, Root, 0); cout << "---------------" << endl;
    sequencetree(t); cout << endl;

    //     3
    //    / 
    //   2 
    //  / 
    // 1 
    // Output: 1 2 3
    init(t);
    t[0].lc = t+1;                t[0].val = 3;
    t[1].lc = t+2;                t[1].val = 2;
                                  t[2].val = 1;
    print_tree(t, Root, 0); cout << "---------------" << endl;
    sequencetree(t); cout << endl;

    //     1
    //      \
    //       2 
    //      / 
    //     3 
    // Output: 1 2 3
    init(t);
                   t[0].lc = t+1; t[0].val = 1;
    t[1].lc = t+2;                t[1].val = 2;
                                  t[2].val = 3;
    print_tree(t, Root, 0); cout << "---------------" << endl;
    sequencetree(t); cout << endl;

    exit(0);

} // end main()


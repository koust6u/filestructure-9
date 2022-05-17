#pragma warning(disable:4996)
//tstbtree.cc
//#include "btnode.h"
#include "btree.h"
#include <iostream>
#include <string>

using namespace std;

const char * keys = "CSDTAMPIBWNGURKEHOLJYQZFXV";
template <class keyType> class BTree;
const int BTreeSize = 3;
int main(void) {
	int result, i;
	BTree <char> bt(BTreeSize);
	cout << "input data = " << keys << endl;
	result = bt.Create("btree.dat", ios::in | ios::out);
	if (!result) { 
		cout << "Please delete testbt.dat" << endl; 
		system("pause");
		return 0; 
	}
	for (i = 0; i<26; i++)
	{
		cout << "Inserting " << keys[i] << endl;
		result = bt.Insert(keys[i], i);
		bt.Print(cout);
	}
	bt.Search(1, 1);

	system("pause");
	return 1;
}
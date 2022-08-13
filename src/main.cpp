#include <stdio.h>
#include <vector>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

class Item
 {
 public:
	int x; /* Point X */
	int y; /* Point Y */
};

vector<Item*> fillItemsWithRandomNumbers(int x)
{
	vector<Item*> vec;
	for(int i = 0; i < x;++i)
	{
			char * xyz = (char*)malloc(sizeof(char*));
			int r = rand() % 100 + 1;
			int r2 = (rand() % 100 + 1 ) / 2;
			Item *it = new Item();
			it->x = r;
			it->y = r2;
			vec.push_back(it);
	}
	return vec;
}

int main(int argc, char** argv)
{
	vector<Item*> items;
    srand (time(NULL));
	items = fillItemsWithRandomNumbers(100);
	int ret = 0;
	int x, y;
	cout << "Select Target: ( numbers ) " << endl;
	cout << "X : ";
	cin >> x;
	cout << endl << "y :";
	cin >> y;
	cout << endl;

	Item *ItemX = new Item();
	ItemX->x = x;
	ItemX->y = y;

	for(auto it = items.begin(); it != items.end(); ++it)
	{
			if( ( (*it)->x == x) && ((*it)->y == y)) {
					cout << "item found" << endl;
					break;
			}else{
					//cout << "not found" << endl;	
			}
	}	

	
	return ret;
}
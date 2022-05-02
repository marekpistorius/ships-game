#include <stdio.h>


class Item
{
	Item(int x , int y): x(0), y(0) , name(NULL) { }
	int x;
	int y;
	char* name;
};


int main(int argc, char* argv)
{
	vector<Item> items;
	int ret = 0;
	int x, y;
	cout << "Select Target: ";
	cout << "X";
	cin >> x;
	cout << "y";
	cin >> y;
	
	Item it = new Item(x , y);

	auto fIt = std::find(items.begin(), items.end() , it);
	if(fIt != items.end() ) {
			printf("Target %d destroyed\n", in );	
	}		
	return ret;
}
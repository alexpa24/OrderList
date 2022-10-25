#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include "OrderList.h"

using namespace std;

void ReadAndPrint(){
	string name;
        int value, lines =0, i ,j;
        std::map<string, int> map;
        std::map<string, int>::const_iterator it, itr, max;

        ifstream myfile("text.txt", ifstream::in);
	if (!myfile)
	{
		cout << "File does not exist" << "\n";
		return;
	}
	if (myfile.peek() == std::ifstream::traits_type::eof())
	{
    		cout << "File is empty" << "\n";
		return;
	}

        while(myfile >> name >> value && lines<10){
                map.insert(std::pair<string, unsigned int>(name, value));
                lines++;
        }
	i = map.size();
	while ( i > 0 ) {
		itr = map.begin(), max = map.begin(), it = map.begin();
		j = map.size();
		while ( j > 0 ) {
			if (itr->second > it->second) {
				max = itr;
				it = itr;
			}
			++itr;
			--j;
		}
		cout << max->first << "\t" << max->second << endl;
		map.erase(max);
		--i;
	}
        return;
}
int main()
{
	ReadAndPrint();
        return 0;
}

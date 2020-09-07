#include<iostream>
#include "link.h"
#include<string.h>
#include <fstream>

using namespace std;

int main()
{
LinkedList<string> Slist;
int x =5;

string temp;
ifstream file("presidents.txt");
    if(file.is_open())
    {
        while(getline()
	{
        Slist.insert(temp);
        }
    }
Slist.remove("Zachary Taylor");
Slist.print();

}


//
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <algorithm>
#include <fstream>
using namespace std;


int main () {
	string name;
	string bio;
	string quirk;
	fstream npcsavefile;
	int x;
	bool offswitch = true;
	while (offswitch !=false){
		cout << "1)Add NPC\n";
		cout << "2)Modifiy NPC\n";
		cout << "3)View NPC\n";
		cout << "4)Exit\n";
		cin >> x;
		switch(x){
			case 1:
				npcsavefile.open ("npcinfo.txt", ios::app );
				cout << "NPC Name:";
				npcsavefile << name >>endl; 
				cout << "Bio:";
				npcsavefile << bio >>endl;
				cout << "Quirks:";
				npcsavefile << quirk >>endl;
				npcsavefile.close();
			break;
			case 2:
				//this is where the code for modifying an NPC would go
			break;
			case 3:
				//This is where the code for viewing an npc would go
			break;
			case 4:
				offswitch = false;
			break;
			default:
				cout << "That was not an option\n";
			break;
			}
	}
} 

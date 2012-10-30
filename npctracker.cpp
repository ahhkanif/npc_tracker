//
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <algorithm>
#include <fstream>
using namespace std;

struct npcstruct {
	//int location;
	string name;
	string bio;
	string quirk;
	};

int main () {
	npcstruct npc;
	ifstream npcfileout;
	ofstream npcfilein;  
	int npctotal;
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
				cout << "NPC Name:";
				cin >> npc.name;
				cout << "Bio:";
				cin >> npc.bio;
				cout << "Quirks:";
				cin >> npc.quirk;
				npcfilein.open ("npcinfo.txt", ios::app );
				npcfilein << npc.name; 
				npcfilein << npc.bio;
				npcfilein << npc.quirk;
				npcfilein.close();
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

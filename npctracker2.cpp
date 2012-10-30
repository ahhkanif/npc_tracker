//
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main () {
	
	fstream npcsavefile;
	string name;
	string bio;
	string quirk;
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
				getline(cin,name,'\n');
				npcsavefile >>name >>endl; 
				
				cout << "Bio:";
				getline(cin,bio,'\n');
				npcsavefile >> bio >>endl;
				
				cout << "Quirks:";
				getline(cin,quirk,'\n');
				npcsavefile >> quirk >>endl;
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

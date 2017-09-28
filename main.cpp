
#include <iostream>
#include <fstream>
#include <string>
#include "md5.h"    // needed to be downloaded from a 3rd party provider //

using namespace std;
/*
__________¶¶¶¶¶¶_________
_________¶______¶________ 
________¶_____¶__¶_______
_______¶_____¶____¶______
______¶_____¶¶_____¶_____
_____¶_____¶_¶¶_____¶____
____¶_____¶___¶¶_____¶___
___¶_____¶_____¶¶_____¶__
__¶_____¶_______¶¶_____¶_
__¶¶¶¶¶¶_________¶¶¶¶¶¶¶_
___¶¶¶¶¶¶_______¶¶¶¶¶¶¶__
____¶¶¶¶¶¶_____¶¶¶¶¶¶¶___
_____¶¶¶¶¶¶___¶¶¶¶¶¶¶____
______¶¶¶¶¶¶_¶¶¶¶¶¶¶_____
_______¶¶¶¶_¶¶¶¶¶¶¶______
________¶¶¶¶¶¶¶¶¶¶_______
_________¶¶¶¶¶¶¶¶________
*/				// I like this design
int main(){
	string line;
	string md5hash;
	ifstream wordlist("wordlist.txt");
	cout << "WELCOME TO PARKER'S MD5 HASH CRACKER" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << endl;
	cout << "        __________¶¶¶¶¶¶_________" << endl;
	cout << "	_________¶______¶________" << endl;
	cout << "	________¶_____¶__¶_______" << endl;
	cout << "	_______¶_____¶____¶______" << endl;
	cout << "	______¶_____¶¶_____¶_____" << endl;
	cout << "	_____¶_____¶_¶¶_____¶____" << endl;
	cout << "	____¶_____¶___¶¶_____¶___" << endl;
	cout << "	___¶_____¶_____¶¶_____¶__" << endl;
	cout << "	__¶_____¶_______¶¶_____¶_" << endl;
	cout << "	__¶¶¶¶¶¶_________¶¶¶¶¶¶¶_" << endl; // Jose is a homo
	cout << "	___¶¶¶¶¶¶_______¶¶¶¶¶¶¶__" << endl;
	cout << "	____¶¶¶¶¶¶_____¶¶¶¶¶¶¶___" << endl;
	cout << "	_____¶¶¶¶¶¶___¶¶¶¶¶¶¶____" << endl;
	cout << "	______¶¶¶¶¶¶_¶¶¶¶¶¶¶_____" << endl;
	cout << "	_______¶¶¶¶_¶¶¶¶¶¶¶______" << endl;
	cout << "	________¶¶¶¶¶¶¶¶¶¶_______" << endl;
	cout << "	_________¶¶¶¶¶¶¶¶________" << endl;
	cout << endl;



	cout << "PLEASE ENTER HASH" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "HASH:";
	cin >> md5hash;
	system("cls");

	while (getline(wordlist, line)) {
	//Encrypt string with MD5
		if (md5hash==md5(line)){
			cout << "Hash is Cracked! NOW SCRAM YA FILTY ANIMAL" << endl;
			cout << "-----------------------------------------" << endl;
			cout << endl;
			cout << "        __________¶¶¶¶¶¶_________" << endl;
			cout << "	_________¶______¶________" << endl;
			cout << "	________¶_____¶__¶_______" << endl;
			cout << "	_______¶_____¶____¶______" << endl;
			cout << "	______¶_____¶¶_____¶_____" << endl;
			cout << "	_____¶_____¶_¶¶_____¶____" << endl;
			cout << "	____¶_____¶___¶¶_____¶___" << endl;
			cout << "	___¶_____¶_____¶¶_____¶__" << endl;
			cout << "	__¶_____¶_______¶¶_____¶_" << endl;
			cout << "	__¶¶¶¶¶¶_________¶¶¶¶¶¶¶_" << endl;
			cout << "	___¶¶¶¶¶¶_______¶¶¶¶¶¶¶__" << endl;
			cout << "	____¶¶¶¶¶¶_____¶¶¶¶¶¶¶___" << endl;
			cout << "	_____¶¶¶¶¶¶___¶¶¶¶¶¶¶____" << endl;
			cout << "	______¶¶¶¶¶¶_¶¶¶¶¶¶¶_____" << endl;
			cout << "	_______¶¶¶¶_¶¶¶¶¶¶¶______" << endl;
			cout << "	________¶¶¶¶¶¶¶¶¶¶_______" << endl;
			cout << "	_________¶¶¶¶¶¶¶¶________" << endl;
			cout << endl;
			cout << md5hash << "--------------:" << line << endl;
			if (md5hash!=md5(line)) {
				cout << "MD5 is NOT Cracked!" << endl;
				cout << "-------------------" << endl;
				cout << endl;
				cout << "Sorry my dude, but the hash wasn't cracked 'cuz you is an actual Retard." << endl;
				cout << "...." << endl;
				cout << "Some one had to say it" << endl;
			}




		}


	}

	system("pause");
	system("pause");
	 return 0;
}

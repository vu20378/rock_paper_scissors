//============================================================================
// Name        : Rock.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int random(){
	srand(time(NULL));
	int temp = rand() %(3 - 1 + 1) + 1;

	return temp;
}

void menu(int &luachon){
	cout <<"\t    ROCK PAPER SCISSORS";
	cout << "\n -------- \t -------- \t --------"
			"\n |  KÉO | \t |  BÚA | \t |  BAO |"
			"\n |  (1) | \t |  (2) | \t |  (3) |"
			"\n -------- \t -------- \t --------";
	cout <<"\nHay dua ra lua chon cua ban: ";

	cin >> luachon;
	while(luachon < 1 || luachon > 3){
		cout <<"\nMoi nhap lai lua chon: ";
		cin >> luachon;
	}
}

void ketqua(int randmay, int luachon){
	if(randmay == luachon){
		cout <<"\n\n\t\tHoa nhau";
	}
	else{
		if(randmay == 1){
			if(luachon == 2){
				cout <<"\n\n\tBan da thang";
			}
			else
				cout <<"\n\n\tBan da thua";
		}
		else if(randmay == 2){
			if(luachon == 1){
				cout <<"\n\n\tBan da thua";
			}
			else
				cout <<"\n\n\tBan da thang";
		}
		else if(randmay == 3){
			if(luachon == 1){
				cout <<"\n\n\tBan da thang";
			}
			else
				cout <<"\n\n\tBan da thua";
		}
	}
}

void luachonngmay(int luachon, int randmay){
	switch(luachon){
	case 1:
		cout << "\nBan lua chon ra KEO ";
		break;
	case 2:
		cout << "\nBan lua chon ra BUA ";
		break;
	case 3:
		cout << "\nBan lua chon ra BAO ";
		break;
	}


	switch(randmay){
	case 1:
		cout << "\nMay lua chon ra KEO ";
		break;
	case 2:
		cout << "\nMay lua chon ra BUA ";
		break;
	case 3:
		cout << "\nMay lua chon ra BAO ";
		break;
	}
}

int main() {
	label:

	int luachon;
	int randmay = random();

	menu(luachon);

	luachonngmay(luachon, randmay);

	ketqua(randmay, luachon);

	int again;
	cout <<"\n\nBan co muon choi lai khong?";
	cout <<"\n1. Đồng ý        2. Từ chối";

	cout <<"\nMoi nhap lua chon cua ban: ";
	cin >> again;
	while(again < 1 || again > 2){
		cout <<"\nMoi nhap lai lua chon: ";
		cin >> again;
	}
	if(again == 1){
		randmay = 0;
		cout << endl;
		goto label;
	}
	else cout <<"\n\nKET THUC TRO CHOI";

	return 0;
}

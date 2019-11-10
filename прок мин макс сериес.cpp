#include <iostream>
#include <conio.h>
#include "Header.h"

using namespace std;

int menu_1();
int menu_2();
int menu_3();
int menu_4();
int menu();
int main()
{
	setlocale(LC_ALL, "Russian");
	int answer = menu();
	switch (answer)
	{
	case 0: {int answer_1 = menu_1();
		switch (answer_1) {
		case 0: s1(); break;
		case 1: s2(); break;
		case 2: s3(); break;
		case 3: s4(); break;
		case 4: return 0;
		}
	}; break;
	case 1: {int answer_2 = menu_2();
		switch (answer_2) {
		case 0: m1(); break;
		case 1: m2(); break;
		case 2: m3(); break;
		case 3: m4(); break;
		case 4: return 0;
		}
	}; break;
	case 2: {int answer_3 = menu_3();
		switch (answer_3) {
		case 0: p1(); break;
		case 1: p2(); break;
		case 2: p3(); break;
		case 3: p4(); break;
		case 4: p4(); break;
		case 5: p16(); break;
		case 6: p17(); break;
		case 7: p18(); break;
		case 8: p19(); break;
		case 9: p37(); break;
		case 10: p38(); break;
		case 11: p39(); break;
		case 12: p40(); break;
		case 13: return 0;
		}
	 }; break;
	}; return 0;
		system("pause");
		return 0;
	}


int menu() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 3) % 3;
		if (key == 0) cout << "-> Series" << endl;
		else  cout << "   Series" << endl;
		if (key == 1) cout << "-> MinMax" << endl;
		else  cout << "   MinMax" << endl;
		if (key == 2) cout << "-> Proc" << endl;
		else  cout << "   Proc" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}
int menu_1() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 4) % 4;
		if (key == 0) cout << "-> s1" << endl;
		else  cout << "   s1" << endl;
		if (key == 1) cout << "-> s2" << endl;
		else  cout << "   s2" << endl;
		if (key == 2) cout << "-> s3" << endl;
		else  cout << "   s3" << endl;
		if (key == 3) cout << "-> s4" << endl;
		else  cout << "   s4" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}
int menu_2() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 3) % 3;
		if (key == 0) cout << "-> m1" << endl;
		else  cout << "   m1" << endl;
		if (key == 1) cout << "-> m2" << endl;
		else  cout << "   m2" << endl;
		if (key == 2) cout << "-> m3" << endl;
		else  cout << "   m3" << endl;
		if (key == 2) cout << "-> m4" << endl;
		else  cout << "   m4" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}
int menu_3() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 12) % 12;
		if (key == 0) cout << "-> p1" << endl;
		else  cout << "   p1" << endl;
		if (key == 1) cout << "-> p2" << endl;
		else  cout << "   p2" << endl;
		if (key == 2) cout << "-> p3" << endl;
		else  cout << "   p3" << endl;
		if (key == 3) cout << "-> p4" << endl;
		else  cout << "   p4" << endl;
		if (key == 4) cout << "-> p16" << endl;
		else  cout << "   p16" << endl;
		if (key == 5) cout << "-> p17" << endl;
		else  cout << "   p17" << endl;
		if (key == 6) cout << "-> p18" << endl;
		else  cout << "   p18" << endl;
		if (key == 7) cout << "-> p19" << endl;
		else  cout << "   p19" << endl;
		if (key == 8) cout << "-> p37" << endl;
		else  cout << "   p37" << endl;
		if (key == 9) cout << "-> p38" << endl;
		else  cout << "   p38" << endl;
		if (key == 10) cout << "-> p39" << endl;
		else  cout << "   p39" << endl;
		if (key == 11) cout << "-> p40" << endl;
		else  cout << "   p40" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}
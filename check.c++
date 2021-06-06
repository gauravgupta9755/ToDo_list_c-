#include <windows.h>
#include <iostream>
#include<conio.h>
int main(){
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
COORD pos = {68, 52};
SetConsoleCursorPosition(hConsole, pos);
WriteConsole(hConsole, "Hello", 25, NULL, NULL);
getch();
return 0;
}
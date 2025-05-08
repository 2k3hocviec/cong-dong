#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "Interface.cpp"

using namespace std;

namespace Function {
    void gotoxy(int x, int y);
    void print_screen(int x, int y, string s);
    bool check_space(string& s);
    void welcome();
    void end();
    char input(int maxi, bool cont);
    void menu();
};
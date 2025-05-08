#include "Function.h"
#include <windows.h>

void Function::gotoxy(int x, int y) {
    COORD coord;
    coord.X = x - 1;  // Lưu ý là tọa độ bắt đầu từ 0
    coord.Y = y - 1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Function::print_screen(int x, int y, string s) {
    Function::gotoxy(x, y);
    cout << s;
}

char Function::input(int maxi, bool cont) {
    char c, ch;
    string res = "";

    while (true) {
        ch = _getch();
        if(ch == 9)  { return 't'; } // tab
        if(cont == true) {           // enter
            if(ch == 13) return 'e';
            else continue;
            }
        if(ch >= '1' && ch <= char(maxi + '1' - 1)) {
            cout << ch;
            return ch;
        }
    }
    return c;
}

void Function::welcome() {
    Interface::notification();
    Function::print_screen(58, 6, "- Welcome to Group 2 -");
    Function::print_screen(57, 10, "Press 'Enter' to continue");
    Function::print_screen(4, 45, "Press 'Enter' to continue");
}

void Function::menu() {
    Interface::menu();
}

void Function::end() {
    Interface::notification();
    Function::print_screen(3, 47, "The program has ended!");
}

bool Function::check_space(string& s) {
    return s.find(' ') != string::npos;
}

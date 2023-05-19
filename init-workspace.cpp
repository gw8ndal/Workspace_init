#include <iostream>
using namespace std;

int choose_distro() {
    int distro;
    cout << "--- Linux Distro --- \nChoose your distribution (mainly for package manager)\n1- Ubuntu/Debian\n2- Arch linux\nChoose your distro : ";
    cin >> distro;
    return distro;
}


int main() {
    system("clear");
    switch (choose_distro())
    {
    case 1:
        cout << "Ubuntu" << endl;
        break;
    case 2:
        cout << "Arch" << endl;
        break;
    
    default:
        break;
    }
}
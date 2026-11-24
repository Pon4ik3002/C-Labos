#include "Dialog.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "=== Dialog Test Program ===" << endl;
    cout << "Commands:" << endl;
    cout << "  m<N> - Make array of size N (example: m5)" << endl;
    cout << "  +    - Add element" << endl;
    cout << "  -    - Delete element" << endl;
    cout << "  ?    - Show array" << endl;
    cout << "  /    - Get element" << endl;
    cout << "  q    - Quit" << endl;
    cout << "============================" << endl ;

    Dialog dialog;
    int result = dialog.Execute();

    cout << "\n=== Dialog finished with code: " << result << " ===" << endl;

    return 0;
}
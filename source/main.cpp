#include "include/stdafx.h"
#include "libs/BulletProof/BulletProof.h"
#include "libs/DateTime/DateTime.h"
#include "libs/MultyOSCom/MultyOSCom.h"

using namespace std;

inline void mainMenu(int &option);
inline void subFileMenu();

int main()
{
    cout << "Wlecome to HeaderCreater V0.5_BetaAlpha" << endl;
    string tmTmp = tmFormat(false, true, true);
    cout << "Local Time: " << tmTmp << endl;
    tmTmp = tmFormat(true, true, true);
    cout << "UTC Time: " << tmTmp << endl;
    pauseTerminal();
    int option;
    bool flag = true; // flag for looping program manu
    do
    {
        // recall mainMenu function to print manu
        mainMenu(option);
        switch (option)
        {
        case 1:
            subFileMenu();
            break;

        default:
            flag = false;
            break;
        }
    } while (flag);
    cout << "Thank you for using this program!!!!\n"
         << endl;
    return 0;
}

inline void mainMenu(int &option)
{
    clearScreen();
    cout << "Local Time: " << tmFormat(false, true, true) << "\n\n\0"
         << "What do you what to do?\n"
         << "0. Exit\n"
         << "1. File Header\n"
         << "2. Function Header\n"
         << ">> ";
    cin >> option;
    bulProof(option, 0, 2);
}

inline void subFileMenu()
{
    int subOption;
    cout << "\t0. exit from current slection\n"
         << "\t1. Continue\n"
         << "\t>> ";
    cin >> subOption;
    bulProof(subOption, 0, 1);
    if (subOption == 0)
        return;
    struct fileHeader
    {
        string FileName;
        int numAuthors;
        vector<string> authors;
        string description;
    }fileHeader;
    
    cout << "\n\n\n->File Name: ";

}
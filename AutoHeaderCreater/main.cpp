#include "include/stdafx.h"
#include "include/AllInfo.h"
// personal libs
#include "libs/BulletProof/BulletProof.h"
#include "libs/DateTime/DateTime.h"
#include "libs/MultyOSCom/MultyOSCom.h"

using namespace std;

inline void mainMenu(int &option);
inline void subFileMenu(vector<AllInfo> &fileInfo);

int main()
{
    cout << "Wlecome to HeaderCreater V0.5_Beta" << endl;
    // recall current and UTC time and print
    cout << "Local Time: " << tmFormat(false, true, true) << endl;
    cout << "UTC Time: " << tmFormat(true, true, true) << endl;
    pauseTerminal();
    int option;       // value for user manu chose
    bool flag = true; // flag for main manu loop
    vector<AllInfo> fileInfo;
    vector<AllInfo> funcInfo;
    do
    {
        mainMenu(option); // recall mainMenu function to print manu
        switch (option)
        {
        case 1:
            subFileMenu(fileInfo); // recall sub manu for file header
            break;

        default:
            flag = false; // exit program
            break;
        }
    } while (flag);
    cout << "Thank you for using this program!!!!\n"
         << "If there is any problem, please contact to kim00922@umn.edu\n\n";
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

inline void subFileMenu(vector<AllInfo> &fileInfo)
{
    int subOpNumAu;
    cout << "\t0. exit from current slection\n"
         << "\t1. Continue\n"
         << "\t>> ";
    cin >> subOpNumAu;
    bulProof(subOpNumAu, 0, 1);
    if (subOpNumAu == 0)
        return; // retrun to the main manu
    AllInfo tmpAll;
    string tmpInputArr[3];
    cout << "\n\n\n->File Name: ";
    getline(cin, tmpInputArr[0]);
    cout << tmpInputArr[0] << endl;
    cout << "How many Authors (Deafaul is 1): ";
    char tmp[256];
    cin.get(tmp, 256);
    if (tmp[0] == '\n')
        subOpNumAu = 1;
    else
    {
        subOpNumAu = cin.get();
        bulProofGenInput(subOpNumAu, 0);
    }
    cout << to_string(subOpNumAu);
    pauseTerminal();
}
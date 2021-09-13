#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Help! My computer doesn't work!" << endl;
    char choice;
    bool done = false; // Initially, we are not done
    while (!done)
    { // Continue until we are done
        cout << "Does the computer make any sounds "
             << "(fans, etc.) or show any lights? (y/n):";
        cin >> choice;
        // The troubleshooting control logic
        if (choice == 'n')
        { // The computer does not have power
            cout << "Is it plugged in? (y/n):";
            cin >> choice;
            if (choice == 'n')
            { // It is not plugged in, plug it in
                cout << "Plug it in." << endl;
            }
            else
            { // It is plugged in
                cout << "Is the switch in the \"on\" position? (y/n):";
                cin >> choice;
                if (choice == 'n')
                { // The switch is off, turn it on!
                    cout << "Turn it on." << endl;
                }
                else
                { // The switch is on
                    cout << "Does the computer have a fuse? (y/n):";
                    cin >> choice;
                    if (choice == 'n')
                    { // No fuse
                        cout << "Is the outlet OK? (y/n):";
                        cin >> choice;
                        if (choice == 'n')
                        { // Fix outlet
                            cout << "Check the outlet's circuit "
                                 << "breaker or fuse. Move to a "
                                 << "new outlet, if necessary. "
                                 << endl;
                        }
                        else
                        { // Beats me!
                            cout << "Please consult a service "
                                 << "technician." << endl;
                            done = true; // Exhausted simple fixes
                        }
                    }
                    else
                    { // Check fuse
                        cout << "Check the fuse. Replace if "
                             << "necessary." << endl;
                    }
                }
            }
        }
        else
        { // The computer has power
            cout << "Please consult a service technician." << endl;
            return 0;
        }
        done = true; // Only troubleshoots power issues
    }
    return 0;
}

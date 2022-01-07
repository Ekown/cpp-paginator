/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C++ compiler to run C++ program online
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

const static int numStudents = 20;

int main() {
    int itemPerPage = 3;
    int page = 0;
    string choice;
    string arStudents[numStudents];
    
    for(int i = 0; i < numStudents; i++) {
        arStudents[i] = "Student No." + to_string(i + 1);
    }
    
    while(choice != "X" && choice != "x") {
        system("clear");
        
        int currentIndex;
        for (int i = 0; i < itemPerPage; i++) {
            currentIndex = (page * itemPerPage) + i;
            
            if (currentIndex < numStudents) {
                cout << currentIndex + 1 << " - " << arStudents[currentIndex] << "\n";    
            }
        }
        
        cout << "[A] - Prev   [D] - Next   [X] - Exit";
        getline(cin, choice);
        
        if (choice == "D" || choice == "d") {
            page += 1;
            
            if (numStudents <= (page * itemPerPage)) {
                page -= 1;
            }
        }
        
        if (choice == "A" || choice == "a") {
            page -= 1;
            
            if (page < 1) {
                page = 0;
            }
        }
    }

    return 0;
}

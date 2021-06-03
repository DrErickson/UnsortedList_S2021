//
// Created by we7289 on 6/3/2021.
//
#include <iostream>
#include <fstream>
#include <string>
#include "UnsortedList.h"

using namespace std;

int main() {
    UnsortedList myList;

    cout << "Length: " << myList.GetLength() << endl;

//    cout << "Add 5 to list" << endl;
//    myList.PutItem(5);

    for (int i = 0; i < MAX_ITEMS; i++) {
        myList.PutItem(i);
    }

    if (myList.Contains(5)) {
        cout << "Woot! 5 is in the list!" << endl;
    }
    else {
        cout << "5 is NOT in the list... womp womp..." << endl;
    }

    cout << "Length: " << myList.GetLength() << endl;

    if (myList.Contains(42)) {
        cout << "Huh... 42 is in the list.  Uh oh..." << endl;
    }
    else {
        cout << "42 is NOT in the list" << endl;
    }

    myList.DeleteItem(5);
    if (myList.Contains(5)) {
        cout << "5 is in the list!" << endl;
    }
    else {
        cout << "5 is NOT in the list" << endl;
    }
    cout << "Length: " << myList.GetLength() << endl;

    myList.ResetIterator();
    for (int i = 0; i < myList.GetLength(); i++) {
        int item = myList.GetNextItem();
        cout << item << endl;
    }
}

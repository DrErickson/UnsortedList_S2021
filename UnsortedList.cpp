
#include "UnsortedList.h"

UnsortedList::UnsortedList() {
    length = 0;
    currentPos = 0;
}

void UnsortedList::MakeEmpty() {
    length = 0;  // Same as saying that all positions are available.
}

bool UnsortedList::IsFull() const {
    return length == MAX_ITEMS;
}

int UnsortedList::GetLength() const {
    return length;
}

bool UnsortedList::Contains(int someItem) {

    for (int i = 0; i < length; i++) {
        if (info[i] == someItem)
            return true;
    }

    return false;
}

void UnsortedList::PutItem(int item) {

    if (IsFull())
        return;

    //info[length] = item;
    //length++;

    info[length++] = item;
}

void UnsortedList::DeleteItem(int item) {

    for (int i = 0; i < length; i++) {
        if (info[i] == item) {
            info[i] = info[length - 1];
            length--;
            break;
        }
    }
}

void UnsortedList::ResetIterator() {
    currentPos = 0;
}

int UnsortedList::GetNextItem() {
    int item = info[currentPos];
    currentPos++;
    return item;
}


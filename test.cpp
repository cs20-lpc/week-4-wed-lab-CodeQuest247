#include "DoublyList.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "--------------------------------------------" << endl;
    cout << "Int list: list operations" << endl;
    cout << "--------------------------------------------" << endl;

    DoublyList<int> a;

    cout << "Starting with an empty list." << endl;
    cout << "Empty? " << a.isEmpty() << endl;
    cout << a;

    cout << "\nAdding a few numbers using append: 47, 56, 73" << endl;
    a.append(47);
    a.append(56);
    a.append(73);
    cout << "Length: " << a.getLength() << endl;
    cout << a;

    cout << "\nChecking a few positions with getElement (0, 1, 2):" << endl;
    cout << a.getElement(0) << " " << a.getElement(1) << " " << a.getElement(2) << endl;

    cout << "\nInserting at the front (position 0): 32" << endl;
    a.insert(0, 32);
    cout << a;

    cout << "\nInserting in the middle (position 3): 68" << endl;
    a.insert(3, 68);
    cout << a;

    cout << "\nInserting at the end (position length): 91" << endl;
    a.insert(a.getLength(), 91);
    cout << a;
    cout << "Length: " << a.getLength() << endl;

    cout << "\nReplacing position 2 with 99" << endl;
    a.replace(2, 99);
    cout << a;

    cout << "\nSearching for values:" << endl;
    cout << "Search 68? " << a.search(68) << endl;
    cout << "Search 100? " << a.search(100) << endl;

    cout << "\nRemoving from the front (position 0)" << endl;
    a.remove(0);
    cout << a;

    cout << "\nRemoving from the end (last position)" << endl;
    a.remove(a.getLength() - 1);
    cout << a;

    cout << "\nRemoving from the middle (position 2 if it exists)" << endl;
    if (a.getLength() > 2) {
        a.remove(2);
    }
    cout << a;
    cout << "Length: " << a.getLength() << endl;


    cout << "\n--------------------------------------------" << endl;
    cout << "String list: testing with words I actually use" << endl;
    cout << "--------------------------------------------" << endl;

    DoublyList<string> s;

    cout << "Appending a few strings: \"Las Positas\", \"Computer Science\", \"Transfer\"" << endl;
    s.append("Las Positas");
    s.append("Computer Science");
    s.append("Transfer");
    cout << s;

    cout << "Inserting \"USC\" at position 1" << endl;
    s.insert(1, "USC");
    cout << s;

    cout << "Replacing position 0 with \"Aditi\"" << endl;
    s.replace(0, "Aditi");
    cout << s;

    cout << "Searching for words:" << endl;
    cout << "Search \"Transfer\"? " << s.search("Transfer") << endl;
    cout << "Search \"NotHere\"? " << s.search("NotHere") << endl;


    cout << "\n--------------------------------------------" << endl;
    cout << "Error checks (showing how invalid positions are caught)" << endl;
    cout << "--------------------------------------------" << endl;

    try {
        cout << "Trying getElement at an invalid position (100)..." << endl;
        cout << a.getElement(100) << endl;
    }
    catch (string& e) {
        cout << "Caught error: " << e << endl;
    }

    try {
        cout << "Trying insert at an invalid position (-1)..." << endl;
        a.insert(-1, 777);
    }
    catch (string& e) {
        cout << "Caught error: " << e << endl;
    }

    try {
        cout << "Trying remove at an invalid position (50)..." << endl;
        a.remove(50);
    }
    catch (string& e) {
        cout << "Caught error: " << e << endl;
    }


    cout << "\n--------------------------------------------" << endl;
    cout << "Clear and empty check" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "Clearing the int list..." << endl;
    a.clear();
    cout << "Length: " << a.getLength() << endl;
    cout << "Empty? " << a.isEmpty() << endl;
    cout << a;

    return 0;
}

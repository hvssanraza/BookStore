#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "---Bookstore Genre Selection---" << endl;
    cout << "1: Fiction" << endl;
    cout << "2: Non-Fiction" << endl;
    cout << "3: Science" << endl;
    cout << "4: Mystery" << endl;
    cout << "5: Biography" << endl;
    cout << endl;

    cout << "Please select a genre (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Fiction" << endl;
        cout << "Description: Fiction books contain stories that are not based on real events or people." << endl;
        cout << "Price Range: $10 - $30" << endl;
        break;
        case 2:
            cout << "Non-Fiction" << endl;
        cout << "Description: Non-fiction books are based on real facts, people, and events." << endl;
        cout << "Price Range: $15 - $40" << endl;
        break;
        case 3:
            cout << "Science" << endl;
        cout << "Description: Science books cover a variety of topics including biology, physics, chemistry, etc." << endl;
        cout << "Price Range: $20 - $50" << endl;
        break;
        case 4:
            cout << "Mystery" << endl;
        cout << "Description: Mystery books focus on solving a crime or uncovering hidden secrets." << endl;
        cout << "Price Range: $12 - $25" << endl;
        break;
        case 5:
            cout << "Biography" << endl;
        cout << "Description: Biography books tell the life story of a real person." << endl;
        cout << "Price Range: $18 - $45" << endl;
        break;
        default:
            cout << "Invalid option! Please select a valid genre number (1-5)." << endl;
    }

    return 0;
}

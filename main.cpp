#include <iostream>
using namespace std;

class Food{

public:
    string id;
    string name;
    double price;
    int quantity;

    void input(int n){
        cout << "Enter the number of food: ";
        cin >> n;

        for (int i = 0; i < n; i++){
            cout << "Input food " << i + 1 << ": " << endl;

            cin.ignore();

            cout << "Food's id: ";
            getline (cin, id);

            cout << "Food's name: ";
            getline (cin, name);

            cout << "Food's price: ";
            cin >> price;

            cout << "Quantity: ";
            cin >> quantity;
        }
    }

    void display(int n){
        cout << "***********************" << endl;
        for (int i = 0; i < n; i++){
            cout << "Food " << i + 1 << ": " << endl;
            cout << "ID         :" << id << endl;
            cout << "Name       :" << name << endl;
            cout << "Price      :" << price << endl;
            cout << "Quantity   :" << quantity << endl;
        }
        cout << "***********************" << endl;
    }

    void findFood (int n, int idnameSearch){
        cout << "Enter the ID or Name of the food u wanna search for: ";
        cin >> idnameSearch;

        for (int i = 0, i < n; i++){
            if (idnameSearch[i].id )
        }
    }
};


int main(){
    Food myFood;
    int n;

    cout << "===========================" << endl;
    cout << "HELLO WORLD" << endl;
    cout << "===========================" << endl;

    
    myFood.input(n);

    myFood.display(n);


    return 0;
}
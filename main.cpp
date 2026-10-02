#include <iostream>
using namespace std;

class Food{

public:
    string id;
    string name;
    double price;
    int quantity;

    void output(){
        cout << "Nhap ten: ";
        getline (cin, name);

        cout << "Nhap gia: ";
        cin >> price;

        cout << "Enter quantity: ";
        cin >> quantity;
    }

    void display(){
        cout << name << " - " << price  << "(" << quantity << ")" << endl;
    }
};


int main(){
    Food myFood;

    cout << "===========================" << endl;
    cout << "HELLO WORLD" << endl;
    cout << "===========================" << endl;

    myFood.output();

    myFood.display();


    return 0;
}
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define MAX 10

class FOOD {
private:
    string id;
    string name;
    double price;
    int quantity;

public:
    int foodCount = 0;

    // Default constructor (without parameters)
    FOOD() : id (""), name (""), price (0.0), quantity (0) {}

    // Constructor with parameters
    FOOD (string i, string n, double p, int q) : id(i), name(n), price(p), quantity(q){}

    
    void inputFood(){
        cout << "Nhap ma mon: "; getline (cin, id);
        cout << "Nhap ten mon : "; getline (cin, name);
        cout << "Nhap gia   : "; cin >> price;
        cout << "Nhap so luong : "; cin >> quantity;
        cin.ignore() ;
    } 

    void displayFood() const {
        cout << "   | " << id << " |" << name 
             << " | Gia: " << price << " | So luong: " 
             << quantity << endl; 
    } 

    void setPrice (double newPrice){
        if (newPrice > 0){
            price = newPrice;
        }
    }    

    bool reduceQuantity(int amount){
        if (amount > 0 && quantity >= amount){
            quantity -= amount;
            return true;
        }
        return false;
    }
    bool isAvailable() const {
        return quantity > 0;
    }           
    
    // Hàm Getter
    string getID() const { return id; }               
    string getName() const { return name;}             
    double getPrice() const { return price; }           
    int getQuantity() const { return quantity; }              
};

int main(){
    vector <FOOD> menu;
    int n;
    cout << "Nhap so luong mon an: ";
    cin >> n;
    cin.ignore();
    
    for (int i = 0; i < n; i++){
        FOOD f("", "", 0.0, 0);
        cout << "\n === NHAP THONG TIN MON " << i + 1 << " ===\n";
        f.inputFood();      // gọi hàm public
    }

    cout << "\n === Danh sach mon an ===\n ";
    for (const FOOD& f : menu) {
        f.displayFood();    // gọi hàm public
    }
}
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define MAX 10

class BOOK{
private:
    string bookID;
    string title;
    string author;
    int year;

public:
    // Constructor without parameters
    BOOK() : bookID(""), title(""), author(""), year(0){}

    // Constructor with parameters
    BOOK (string i, string t, string a, int y) : bookID(i), title(t), author(a), year(y){}
    
    void inputBook(){
        cin.ignore();
        cout << "Nhap ma sach       : "; getline (cin, bookID);
        cout << "Nhap ten sach      : "; getline (cin, title);
        cout << "Nhap ten tac gia   : "; getline (cin, author);
        cout << "Nhap nam xuat ban  : "; cin >> year;
        
    }

    // 2. Hiển thị danh sách sách
    void displayBook(int n) const {
        cout << " =====   DANH SACH SACH ===== " << endl;
        cout << "Ma sach        " << "Ten sach      " << "Tac gia       " << "Nam       " << endl;
        for (int i = 0; i < n; i++){
            cout << bookID << "         " << title << "             " << author << "            " << year << "          " << endl;
        }
    }

    // 1. Add book
    void addBook (int n){
        if (n < MAX){
            cout << "\n === ADD NEW BOOK ===\n";
            inputBook();
            n++;
            cout << " --> Them sach thanh cong! ---" << endl;
        }
        else {
            cout << " --> Danh sach het cho ---" << endl;
        }
    }

};

int main(){
    vector <BOOK> list;
    int n;
    cout << "Nhap so luong sach : ";
    cin >> n;

    for (int i = 0; i < n ; i++){
        BOOK f("", "", "", 0);  // constructor
        cout << " === Nhap thong tin sach " << i + 1 << " ===" << endl;
        f.inputBook() ;     // gọi hàm public
        list.push_back(f);  // Lưu danh sách vào f
    }

    while (true){
    cout << "\n===== QUAN LY SACH THU VIEN =====" << endl;
    cout << " 1. Them sach" << endl;
    cout << " 2. Hien thi danh sach sach" << endl;
    cout << " 3. Tim sach theo ma sach" << endl;
    cout << " 4. Thoat" << endl;

    int choice;
    cout << "Chon chuc nang: "; cin >> choice;

    if (choice == 1){
        
    }
    else if (choice  == 2){
        for (const BOOK& f : list){
            f.displayBook(n);
        }
    }
    else if (choice  == 3){

    }
    else if (choice == 4){
        break;
    }
    }

    return 0;
}
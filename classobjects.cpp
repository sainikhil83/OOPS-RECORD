#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int pages;

public:
  
    void setDetails(string t, string a, int p);

    
    void printDetails();
};


void Book::setDetails(string t, string a, int p) {
    title = t;
    author = a;
    pages = p;
}

void Book::printDetails() {
    cout << "Book Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Pages: " << pages << endl;
}

int main() {
    Book myBook;

    myBook.setDetails("The Great Gatsby", "F. Scott Fitzgerald", 218);

 
    myBook.printDetails();

    return 0;
}

#include <iostream>
using namespace std;
class MyString {
private:
    char* data;
    size_t length;
public:
    MyString(const char* s = "") {
        size_t len = 0;
        while (s[len] != '\0') {
            ++len;
        }
        length = len;
        data = new char[length + 1];
      
        for (size_t i = 0; i < length; ++i) {
            data[i] = s[i];
        }
        data[length] = '\0';
    }
    MyString(const MyString& rhs) {
        length = rhs.length;
        data = new char[length + 1];
        for (size_t i = 0; i < length; ++i) {
            data[i] = rhs.data[i];
        }
        data[length] = '\0';
    }
    ~MyString() {
        delete[] data;
    }
    MyString operator+(const MyString& rhs) const {
        MyString result;           
        
        delete[] result.data;        
        result.length = this->length + rhs.length;
        result.data = new char[result.length + 1];
        for (size_t i = 0; i < this->length; ++i) {
            result.data[i] = this->data[i];
        }
        for (size_t j = 0; j < rhs.length; ++j) {
            result.data[this->length + j] = rhs.data[j];
        }
        result.data[result.length] = '\0';
        return result;
    }
    friend ostream& operator<<(ostream& os, const MyString& s) {
        os << s.data;
        return os;
    }
};
int main() {
    MyString s1("Hello, ");
    MyString s2("World!");
    MyString s3 = s1 + s2;
    cout << "s1 = " << s1 << "\n";
    cout << "s2 = " << s2 << "\n";
    cout << "s3 = " << s3 << "\n";
    return 0;
}

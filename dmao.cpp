#include <iostream>
using namespace std;

class box {
public:
    box() {
        cout << "Constructor" << endl;
    }

    ~box() {
        cout << "Destructor" << endl;
    }
};

int main() {
    box* myBoxArray = new box[4];
    delete[] myBoxArray;
    return 0;
}



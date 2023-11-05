#include <iostream>
#include <vector>
#include <string>

#include "src/test.cpp"

using namespace std;

int main() {
    TestClass test;
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
    int num = 0;
    int numRef = 0;

    for (const string& word : msg)
    {
        cout << word << " ";
        num = test.incrementNum(num);
        test.incrementNumRef(numRef);
    }

    cout << "\n" << num;
    cout << "\n" << numRef;
    cout << endl;
}
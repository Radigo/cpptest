#include <iostream>
#include <vector>
#include <string>

#include "src/test.cpp"
#include "src/template.hpp"

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

    TemplatteTest templateTest;
    numRef *= 2;

    cout << "Max num / numRef = " << templateTest.max(num, numRef) << "\n";
    cout << "Max " << msg.at(0).c_str() << " / " << msg.at(1).c_str() << " numRef = " << templateTest.max(msg.at(0).c_str(), msg.at(1).c_str());
    cout << endl;
}
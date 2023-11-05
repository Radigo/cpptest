#include "test.hpp"

int TestClass::incrementNum(int p_num) {
    return p_num + 1;
}

void TestClass::incrementNumRef(int &p_num) {
    p_num++;
}
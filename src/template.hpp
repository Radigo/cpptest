#pragma once

using namespace std;

class TemplatteTest {
    public:
        template <typename T>
        inline T const& max(T const& a, T const& b) {
            return a < b ? b : a;
        }
};
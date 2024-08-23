#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printLargeTextRow(const vector<string>& rows) {
    for (const auto& row : rows) {
        cout << row << endl;
    }
}
void printLargeText() {
    vector<string> lines(7, ""); 

    vector<string> H = {
        "H   H  ",
        "H   H  ",
        "HHHHH  ",
        "H   H  ",
        "H   H  ",
        "H   H  ",
        "H   H  "
    };

    vector<string> A = {
        "  A   ",
        " A A  ",
        "A   A ",
        "AAAAA ",
        "A   A ",
        "A   A ",
        "A   A "
    };

    vector<string> P = {
        "PPPP  ",
        "P   P ",
        "PPPP  ",
        "P     ",
        "P     ",
        "P     ",
        "P     "
    };

    vector<string> Y = {
        "Y   Y ",
        " Y Y  ",
        "  Y   ",
        "  Y   ",
        "  Y   ",
        "  Y   ",
        "  Y   "
    };

    vector<string> B = {
        "BBBB  ",
        "B   B ",
        "BBBB  ",
        "B   B ",
        "B   B ",
        "B   B ",
        "BBBB  "
    };

    vector<string> R = {
        "RRRR  ",
        "R   R ",
        "RRRR  ",
        "R R   ",
        "R  RR ",
        "R   R ",
        "R   R "
    };

    vector<string> D = {
        "DDDD  ",
        "D   D ",
        "D   D ",
        "D   D ",
        "D   D ",
        "D   D ",
        "DDDD  "
    };

    vector<string> W = {
    "W   W W   W ",
    "W   W W   W ",
    "W   W W   W ",
    " W W   W W  ",
    " W W   W W  ",
    " W W   W W  ",
    "  W     W   "
    };

    vector<string> I = {
    "  I  ",
    "  I  ",
    "  I  ",
    "  I  ",
    "  I  ",
    "  I  ",
    "  I  "
    };

    vector<string> T = {
    "TTTTT ",
    "  T   ",
    "  T   ",
    "  T   ",
    "  T   ",
    "  T   ",
    "  T   "
    };

    vector<string> space = {
        "      ",
        "      ",
        "      ",
        "      ",
        "      ",
        "      ",
        "      "
    };

    for (int i = 0; i < 7; ++i) {
        lines[i] += H[i] + A[i] + P[i] + P[i] + Y[i] + space[i] + space[i];
        lines[i] += B[i] + I[i] + R[i] + T[i] + H[i] + D[i] + A[i] + Y[i] + space[i] + space[i];
        lines[i] += A[i] + R[i] + W[i] + I[i] + I[i];
    }
    printLargeTextRow(lines);
}

int main() {
    printLargeText();
    return 0;
}

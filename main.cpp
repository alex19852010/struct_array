#include <iostream>
#include <vector>

using namespace std;

int main() {

  int tenant [10][5] = { {1, 4, 3 , 4 , 5},
                         {61, 7, 88 , 9 , 10},
                         {11, 10, 13 , 14 , 15},
                         {16, 7, 81 , 19 , 20},
                         {3, 22, 5 , 24 , 25},
                         {26, 27, 9 , 29 , 30},
                         {31, 32, 12 , 34 , 35},
                         {6, 37, 14 , 39 , 40},
                         {41, 42, 43 , 7 , 45},
                         {46, 3, 48 , 49 , 22}
                                                                };

int a = tenant[2][8];
cout << a;
    return 0;
}

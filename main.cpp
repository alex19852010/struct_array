#include <iostream>
#include <vector>

using namespace std;

void inner_string (string string_2)
{
    int i = 0;
    while(string_2[i] != '\0')
    {
        cout << string_2[i];
        i ++;
    }
}

int main() {

  string my_string = "attention everyone,\r\n it's very dangerous here,\r\n please leave the room!!!";

  inner_string(my_string);


}

#include <iostream>
#include <vector>

using namespace std;
struct change
{
    string name;
    string color;
    int year;
};


int main() {

    vector <change> car;
    int amount_car;

    cout << "enter amount car:";
    cin >> amount_car;

    for(int i = 0; i < amount_car; i ++)
    {
        car.push_back(change());
        cout << "enter name car";
        cin >> car[i].name;
        cout << "enter color car";
        cin >> car[i].color;
        cout << "enter year car";
        cin >> car[i].year;
    }


    for(int i = 0; i < amount_car; i ++)
    {
       cout << car[i].name << " " << car[i].color << " " << car[i].year << endl;
    }

    cout << "Don't I have nothing";
}

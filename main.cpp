#include <iostream>
#include <vector>

using namespace std;

int main() {

  int tenant [10][10];

  for(int i = 0; i < 10; i ++)
  {
      for(int j = 0; j < 10; j ++)
      {
           tenant[i][j] = 2;
      }
  }

  for(int i = 0; i < 10; i ++)
  {
      tenant[i][i] = 0;
  }
    for(int i = 0; i < 10; i ++)
    {
        tenant[i][9 - i] = 0;
    }


  for(int i = 0; i < 10; i ++)
  {
      tenant[i][0] = 1;

      for(int i = 0; i < 10; i ++)
      {
          tenant[i][9] = 1;

          for(int j = 0; j < 10; j ++)
          {
              tenant[0][j] = 1;

              for(int j = 0; j < 10; j ++)
              {
                  tenant[9][j] = 1;

              }
          }
      }
  }







    for(int i = 0; i < 10; i ++)
    {
        for(int j = 0; j < 10; j ++)
        {
            cout << tenant[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

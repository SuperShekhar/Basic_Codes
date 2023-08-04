#include <iostream>
using namespace std;

int main()
{
   for (int i = 0; i < 6; i++)

   {
      if (i == 2)
      {
         continue;
      } // wont't go down but will iterate

      cout << i << endl;
      if (i == 4)
      {
         break;
      } // will go out of the code
   }

   return 0;
}
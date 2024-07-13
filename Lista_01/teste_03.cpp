#include <iostream>
 using namespace std;
 int main(void)
 {
   int num;
   char choice;
   bool quit = false;
   while (true)
   {
      cout << "Digite um numero: ";
      cin >> num;
      if (num > 0)
      		break;
      else
      {
      cout << "Numero tem que ser positivo; tente de novo (S/N): ";
      cin >> choice;
      if (choice != 'S')
     	 {
      	quit = true;
      	break;
      	}
      }
   }
   if (quit == false)
      cout << "The number you entered is " << num << "\n";
   else
      cout << "You did not enter a positive number";
   return 0;
 }

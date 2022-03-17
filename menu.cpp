#include <iostream>

using namespace std;

extern void productos(int opcion);
extern void imprimirfactura();

void menu()
{
          int opcion = 0;
       
 while(true)
 {
   system("cls");
        cout << "*******";
     cout << "menu";
     cout << "*******";
     cout << endl;
     cout << endl;
    
     cout << "1 - bebidas calientes" << endl;
     cout << "2 - bebidas frias" << endl;
     cout << "3 - reposteria" << endl;
     cout << "4 - imprimir factura" << endl;
     cout << "0 - salir" << endl;

     cin >> opcion;

     if (opcion == 0)
     {
         break;
     }
     if (opcion == 4)
     
     {
       imprimirfactura();
       break;
     } else{
       productos(opcion);
     }
     
  }
}
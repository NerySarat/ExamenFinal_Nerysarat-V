#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
     * Escriba un programa que remueva los elementos duplicados de cualquier arreglo, debe mostrar en pantalla el arreglo resultante
     * Ejemplo 1: array = [1,2,2,3] array2 = [2,2] ---> Resultado: [1,2,3]
     * Ejemplo 2: array = [0,0,0,1,2,2,3,3,3,3,3,3,4,4,4] ---> Resultado: [0,1,2,3,4]
     * Consejo: Asuma que el arreglo que se probará siempre va a estar ordenado
     */
    cout << "Challenge #1" << endl;
    int arreglo[] = {0, 1, 1, 1, 2, 2};  // Empiece con este arreglo ya existente, el docente modificará este arreglo para pruebas

    int contador = 0; 

     
    for (int x = 0; x < 6 ; x++ )
    { 
        contador = arreglo [x]  ; 
        if (arreglo [x] == contador)
        {
             arreglo [x] = 0; 
        }

    }
    for (int x = 0; x < 6 ; x++)
    {
        cout << "El arreglo es :" << arreglo [x] << endl; 
    }
    return 0;
}

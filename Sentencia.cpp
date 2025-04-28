#include <iostream>
using namespace std;

int main()
{
    // Inicializamos la variable de rol y que el usuario decida que rol tomara
    int rol;
    cout << "Hola querido usuarios, porfavor indica que rol te pertenece" << endl;
    cout << "1-Malo" << endl;
    cout << "2-Animal" << endl;
    cout << "3-Persona" << endl;
    cout << "--------------------------------------" << endl;
    cin >> rol;
    // Si elige una opcion que no es valida, se le indicara al usuario
    if (rol <= 0 || rol >= 4)
    {
        cout << "Su eleccione esta fuera de los paraetros" << endl;
    }
    else
    {
        // Si su seleccion fue la primera entonces sera una presa de kraven
        if (rol == 1)
        {
            cout << "Estas dentro de la lista de presas de kraven" << endl;
        }
        // SI elige la segunda kraven lo protegera
        else if (rol == 2)
        {
            cout << "Kraven te protege" << endl;
        }
        // y si elige una persona simplemente kraven le dara una saludo
        else
        {
            cout << "Kraven Solo te saluda" << endl;
        }
    }
}
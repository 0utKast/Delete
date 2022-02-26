#if 0

// VT 106 COD 001

int main()
{
	int* ptr1{ new int(5) }; // usa inicialización directa
	int* ptr2{ new int { 6 } }; // usa inicialización uniforme


	// asume que ptr1 ha sido asignado previamente con el operador new
	delete ptr1; // devuelve la memoria a la que apunta ptr1 al control del sistema operativo
	ptr1 = nullptr; // configura ptr1 como un puntero nulo

}



// VT 106 COD 002

#include <iostream>

int main()
{
	int* ptr{ new int }; // dinámicamente asignamos un integer
	*ptr = 7; // ponemos un valor en esa localización en memoria
	int* otroPtr{ ptr }; // otroPtr apunta a la misma localización en memoria que ptr

	delete ptr; // devolvemos la memoria al sistema operativo.  ptr es ahora un puntero colgante.
	ptr = nullptr; // ptr es ahora un puntero nulo
	//pero otroPtr sigue siendo un puntero colgante.


	return 0;
}





// VT 106 COD 003

#include <iostream>
int main()
{
	//inicializamos ptr como nulo (!ptr)
	int* ptr{ nullptr };
	std::cout << ptr << '\n';
	// Si ptr no ha sido ya asignado, lo asignamos
	if (!ptr)
		ptr = new int;
	std::cout << ptr;

}
#endif


// VT 106 COD 004
void hazAlgo()
{
	int* ptr{ new int{} };
}


int main()
{
	int valor = 7;
	int* ptr{ new int{} }; // asigna memoria
	ptr = &valor; // vieja dirección perdida, da lugar a fuga de memoria



	int valor{ 7 };
	int* ptr{ new int{} }; // asigna memoria
	delete ptr; // devuelve control memoria al Sisteme operativo
	ptr = &valor; // reasigna puntero a la dirección de valor

	int* ptr{ new int{} };
	ptr = new int{}; // vieja dirección perdida, da lugar a fuga de memoria

}


#if 0
#endif
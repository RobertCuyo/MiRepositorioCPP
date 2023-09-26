#include <iostream>
using namespace std;
template<class T>
class Lista;
/*===========================================================*/
template <class T>
class Nodo {
private:
	Nodo<T>* izq;
	Nodo<T>* der;
	T info;
public:
	Nodo();
	friend class Lista<T>;

};
template <class T>
Nodo<T>::Nodo() : izq(nullptr), der(nullptr), info(T()) {
	izq = NULL;
	der = NULL;
}
/*===========================================================*/
template <class T>
class Lista {
private:
	Nodo<T>* primero;
	Nodo<T>* ultimo;
public:
	Lista();
	void insertaFinal(T);
	void imprimir();
	T regUlti() {
		return ultimo;
	}
};
template<class T>
Lista<T>::Lista() {
	primero = NULL;
	ultimo = NULL;
}
template<class T>
void Lista<T>::insertaFinal(T dato) {
	Nodo<T>* apunt = new Nodo<T>;
	apunt->info = dato;
	apunt->izq = ultimo;
	if (ultimo) {
		ultimo->der = apunt;
	}
	else {
		primero = apunt;
	}
	ultimo = apunt;
}
template<class T>
void Lista<T>::imprimir() {
	Nodo<T>* apunt = primero;
	while (apunt) {
		cout << apunt->info << '\n';
		apunt = apunt->der;
	}
}
int main() {
	Lista<string> cadena;



	return 0;
}
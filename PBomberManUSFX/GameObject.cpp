
#include "GameObject.h"

GameObject::GameObject() {
	eliminar = false;
}


GameObject::GameObject(string _nombre)
{
	eliminar = false;
	nombre = _nombre;
}
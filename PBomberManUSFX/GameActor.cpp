#include "GameActor.h"

GameActor::GameActor(SDL_Renderer* renderer) :GameObject() {
	posicionX = 0;
	posicionY = 0;
	textura = nullptr;
	textura->setRenderer(renderer);
	direccionActual = GAME_DIRECTION_NONE;
	direccionSiguiente = GAME_DIRECTION_NONE;

	solido = true;
	indestructible = false;
	visible = true;
	movil = false;
	enMovimiento = false;
	aereo = false;
	terrestre = true;
	subterraneo = false;

	velocidad = 5;
	energia = 100;
	vidas = 3;


}

void GameActor::render()
{
	if (visible) {
		SDL_Rect* cuadroAnimacion = new SDL_Rect({ 0, 0, getAncho(), getAlto() });
		textura->render(getPosicionX(), getPosicionY(), cuadroAnimacion);
	}
}
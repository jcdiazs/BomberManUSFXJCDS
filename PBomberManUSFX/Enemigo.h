#pragma once
class Enemigo
{
private:
	int anchoEnemigo;
	int altoEnemigo;

public:
	int getAnchoEnemigo() { return anchoEnemigo; }
	void setAnchoEnemigo(int _anchoEnemigo) { anchoEnemigo = _anchoEnemigo; }

	int getAltoEnemigo() { return altoEnemigo; }
	void setAltoEnemigo(int _altoEnemigo) { altoEnemigo = _altoEnemigo; }

	void matarBomber();
	void flotar();
};
#pragma once

class explosion
{
private:
	int anchoExplosion;
	int daņoBomba;
	int altoExplosion;
public:
	int getAnchoExplosion() { return anchoExplosion; }
	void setAnchoExplosion(int _anchoExplosion) { anchoExplosion = _anchoExplosion; }

	int getDaņoBomba() { return daņoBomba; }
	void setDaņoBomba(int _daņoBomba) { daņoBomba = _daņoBomba; }

	int getAltoExplosion() { return altoExplosion; }
	void setAltoExplosion(int _altoExplosion) { altoExplosion = _altoExplosion; }

	void AparicionFuego();
	void DispercionFuego();
};

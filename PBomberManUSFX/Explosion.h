#pragma once

class explosion
{
private:
	int anchoExplosion;
	int da�oBomba;
	int altoExplosion;
public:
	int getAnchoExplosion() { return anchoExplosion; }
	void setAnchoExplosion(int _anchoExplosion) { anchoExplosion = _anchoExplosion; }

	int getDa�oBomba() { return da�oBomba; }
	void setDa�oBomba(int _da�oBomba) { da�oBomba = _da�oBomba; }

	int getAltoExplosion() { return altoExplosion; }
	void setAltoExplosion(int _altoExplosion) { altoExplosion = _altoExplosion; }

	void AparicionFuego();
	void DispercionFuego();
};

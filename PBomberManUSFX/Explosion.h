#pragma once

class explosion
{
private:
	int anchoExplosion;
	int dañoBomba;
	int altoExplosion;
public:
	int getAnchoExplosion() { return anchoExplosion; }
	void setAnchoExplosion(int _anchoExplosion) { anchoExplosion = _anchoExplosion; }

	int getDañoBomba() { return dañoBomba; }
	void setDañoBomba(int _dañoBomba) { dañoBomba = _dañoBomba; }

	int getAltoExplosion() { return altoExplosion; }
	void setAltoExplosion(int _altoExplosion) { altoExplosion = _altoExplosion; }

	void AparicionFuego();
	void DispercionFuego();
};

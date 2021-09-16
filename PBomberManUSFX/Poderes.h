#pragma once
class Poderes
{
private:
	int nivelBomber;
	int puntuacionBomber;

public:
	int getNivelBomber() { return nivelBomber; }
	void setNivelBomber(int _nivelBomber) { nivelBomber = nivelBomber; }

	int getPuntuacionBomber() { return puntuacionBomber; }
	void setPuntacionBomber(int _puntuacionBomber) { puntuacionBomber = _puntuacionBomber; }

	void invisibilidad();
	void aumentoVelocidad();
	void fuerza();
	void matar();
};
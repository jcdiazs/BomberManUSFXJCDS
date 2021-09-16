#pragma once
class Muro
{
private:
	int anchoMuro;
	int altoMuro;

public:
	int getAnchoMuro() { return anchoMuro; }
	void setAnchoMuro(int _anchoMuro) { anchoMuro = _anchoMuro; }

	int getAltoMuro() { return altoMuro; }
	void setAltoMuro(int _altoMuro) { altoMuro = _altoMuro; }

	void Indestructible();
	void Desaparecer();
};


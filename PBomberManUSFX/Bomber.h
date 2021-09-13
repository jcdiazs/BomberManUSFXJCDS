#pragma once
class Bomber
{
private:
	int anchoAvatar;
	int altoAvatar;

public:
	int getAnchoAvatar() { return anchoAvatar; }
	void setAnchoAvatar(int _anchoAvatar) { anchoAvatar = _anchoAvatar;}

	int getAltoAvatar() { return altoAvatar; }
	void setAltoAvatar(int _altoAvatar) { altoAvatar = _altoAvatar; }

	void Morir();
	void Correr();
};


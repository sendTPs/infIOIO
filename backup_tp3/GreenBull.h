#ifndef GREENBULL_H
#define GREENBULL_H

#include"ObjetMagique.h"

class GreenBull : public ObjetMagique {

public :
	GreenBull();
	GreenBull(const std::string &nom, int bonus);

	void utiliserSur(Creature& creature) const;

	friend std::ostream& operator<<(std::ostream& os, const GreenBull& potion);

};

#endif

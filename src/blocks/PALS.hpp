#ifndef _PALS_BLOCK_HPP_
#define _PALS_BLOCK_HPP_

#include <fstream>
#include <stdint.h>
#include <string>
using namespace std;

class Palette;
class WRAP;

class PALS
{
private:
	WRAP *_wrap;
public:
	PALS(Palette *globalPalette, Palette *localPalette);
	uint32_t getSize();
	void write(fstream &f);
	~PALS();
};

#endif


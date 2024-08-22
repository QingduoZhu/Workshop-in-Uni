#include <iostream>
#include "MusicBox.h"
int main()
{
	Musicbox a;
	a.MusicBox();
	a.get_song();
	a.get_width();
	Musicbox c;
	c.MusicBox("sadness", 7);
	a.get_song();
	a.get_width();
	return 0;
}
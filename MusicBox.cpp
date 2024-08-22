#include <iostream>
#include "MusicBox.h"



void Musicbox::MusicBox()
{
	widthp = 0;
	*song = "";
}

void Musicbox::MusicBox(std::string songname, int width)
{
	widthp = width;
	*song = songname;

}
std::string Musicbox::get_song()
{
	std::cout << *song;
	return *song;
}
int Musicbox::get_width()
{
	std::cout << widthp;
	return widthp;
}

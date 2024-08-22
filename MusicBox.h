#ifndef MUSICBOX_H
#define MUSICBOX_H

#include <string>

class Musicbox
{
private:
    int widthp;
    std::string *song = new std::string[widthp];
public:
    void MusicBox();          // a default constructor 
    void MusicBox(std::string songname, int width); // a constructor that takes the song and width as arguments
    std::string get_song();  // returns the name of the song that the music box plays
    int get_width();    // returns the width in centimetres of the music box
};

#endif

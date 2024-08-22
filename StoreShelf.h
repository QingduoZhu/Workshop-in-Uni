#pragma once
#ifndef STORESHELF_H
#define STORESHELF_H

#include <string>

class Storeshelf
{
private:
    int widthp;
    std::string* song = new std::string[widthp];
public:
    void StoreShelf();                     // default constructor
    void StoreShelf(int width);            // constructor for shelf with given width in centimetres

    int get_width();                  // returns the width of the shelf in centimetres

    // returns the number of Music boxes currently on the shelf
    int get_num_music_boxes();

    // returns a dynamic array of the music boxes currently on the shelf
    void MusicBox* get_contents();

    // returns true and adds music box to shelf if there is sufficient space
    // otherwise returns false
    bool add_music_box(MusicBox a_music_box);

    ~StoreShelf();
};

#endif
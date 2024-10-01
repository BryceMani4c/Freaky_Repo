#ifndef DATA_CLASS_H
#define DATA_CLASS_H
#include <iostream>
#include <fstream>
#include "Text.h"

using namespace std;

class VideoGame{
    public:
        VideoGame(Text*, Text*, Text*, int, int);
        ~VideoGame();
        Text getVideoGameTitle() const;
        void printVideoGameDeets();
        void printVidGameDeetsFile(ofstream);

    private:

        Text *namePtr;
        Text *devPtr;
        Text *pubPtr;
        int yr;
        int rat;
};

#endif
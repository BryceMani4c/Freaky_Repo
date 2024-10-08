/*
    FILE NAME: Text.cpp
    AUTHOR: Isaac Rogers
    DATE: 9/20/24
    PURPOSE: Functions for the text class
*/

 #include "Text.h"

//If no input is given, constructs a Text instance with default values indicating as much.
Text::Text() : textArray("NO TEXT GIVEN"), textLength(-1) {}

//Constructs a Text instance with a given textLength. Also allocates new memory to hold the character array.
Text::Text(const char * inputTextArray, int textLength) : textLength(textLength){
    char * textArray = new char[textLength];
    for(int i = 0; i < textLength; i++){
        textArray[i] = inputTextArray[i];
    }
    this->textArray = textArray;
} 

Text::~Text(){ //deletes the dynamically allocated char array in this Text instance. Has a message along with it for some reason.
    delete this->textArray;
}


void Text::displayText(){ //Displays text in the terminal
    std::cout << this->textArray;
}

const char * Text::getText(){ //returns the text
    return this->textArray;
}

int Text::getLength(){ //returns text length
    return this->textLength;
}
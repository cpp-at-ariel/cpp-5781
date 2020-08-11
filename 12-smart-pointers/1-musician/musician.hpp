#pragma once

#include "tooNoisy.h"

class Musician {
	std::string name;
public:
	Musician (std::string name);  //throw()	
	~Musician ();
	void play () const; //throw (TooNoisy)
private:		
	static const int M_MAX_CONCURRENTLY_PLAYING;
	static int m_currentPlayingMusicians;
};

#ifndef GOLF_H
#define GOLF_H

const int Len = 40;



class golf {
private:
	struct golfbawl
	{
		char fullname[Len];
		int handicap;
	} g;
	//golfbawl g;
	
public:
	//golf();
	~golf();
	golf(const char * name = "Jack Nickolas", int hc = 12);
	golf & setgolf();

};


#endif
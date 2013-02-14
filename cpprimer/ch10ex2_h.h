#include <string>

#ifndef PERSONS_H
#define PERSONS_H

using std::string;

class Person {
private:
	static const int LIMIT = 25;
	string lname;
	char fname[LIMIT];
public:
	Person() { lname = ""; fname[0] = '\0'; }
	Person(const string & ln, const char * fn = "Heyyou");
	void Show() const;			// firstname lastname format
	void FormalShow() const;	// lasname, firstname format
};


#endif //PERSONS_H
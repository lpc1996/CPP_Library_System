#include "Util.h"

Util::Util(){
	
}

double Util::toDouble(string str){
	double d;
	stringstream ss;
	ss << str;
	ss >> d;
	return d;
}

int Util::toInt(string str){
	int in;
	stringstream ss;
	ss << str;
	ss >> in;
	return in;
}

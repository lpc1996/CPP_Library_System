#ifndef BOOKMODEL_H
#define BOOKMODEL_H

#include "main.h"
//#include <tring>

class BookModel{
	public:
		BookModel();
		void setId(string id);
		string getId();
		void setName(string name);
		string getName();
		void setAuthor(string author);
		string getAuthor();
		void setPublish(string publish);
		string getPublish();
		void setPublishTime(string publishTime);
		string getPublishTime();
		void setType(string type);
		string getType();
		void setPrice(double price);
		double getPrice();
		void setNumber(int number);
		int getNumber();
	protected:
		
	private:
		string id;
		string name;
		string author;
		string publish;
		string publishTime;
		string type;
		double price;
		int number;
};

#endif

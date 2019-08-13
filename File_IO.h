#ifndef FILE_IO_H
#define FILE_IO_H

#include "main.h"
#include "BookModel.h"
#include <fstream>
#include <vector>
#include <sstream>
#include "Util.h"
 
#define BOOK "file/Book.txt"

class File_IO
{
	public:
		File_IO();
		vector<BookModel> ReadFile();
	protected:
		
	private:
		fstream file;
		bool isNumber(string str);
};

#endif

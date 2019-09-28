#include "File_IO.h"

File_IO::File_IO(){
	fstream file;
}

vector<BookModel> File_IO::ReadFile(){
	vector<BookModel> bookVec;
	file.open(BOOK);  
	string line;
	if(file.is_open()) {
		while( !file.eof() ){
			BookModel book;
			file >> line;
			book.setId(line);
			file >> line;
			book.setName(line);
			file >>line;
			book.setAuthor(line);
			file >> line;
			book.setPublish(line);
			file >> line;
			book.setPublishTime(line);
			file >> line;
			book.setType(line);
			file >> line;
			double p;
			Util util;
			p = util.toDouble(line);
			cout << p <<endl;	
			book.setPrice(p);
			file >> line;
			int num = util.toInt(line); 
			book.setNumber(num);
			bookVec.push_back(book);
			file.ignore(); 
		}
		file.close(); 
	}else{
		cout << "Ê§°Ü" <<endl; 
	}
	return bookVec;
}

bool File_IO::isNumber(string str){
	return false;
}

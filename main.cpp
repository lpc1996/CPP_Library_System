#include "main.h"
#include "File_IO.h"
#include "BookModel.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	File_IO fio;
	vector<BookModel> vec;
	vec = fio.ReadFile();
	cout << "vec.size()=" <<vec.size() <<endl;
	cout << vec.at(0) <<endl;
	return 0;
}

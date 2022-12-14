#ifndef FILE_H
#define FILE_H
#include "Data_item.h"
//class for file
class File{
private:
string fname;
int columns=0;
vector<Data_item> r_vec;
public:
//constructor of file that get the file path or the file name
File(string fn);
//function that return the numbers of columns of the every line in the file
int getColumns();
//read the file and update the vector for the data item
void readFile();
//return the vector of data item
vector<Data_item> getDataFromFile();



};
#endif
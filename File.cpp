#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include "Data_item.h"
#include "File.h"
using namespace std;

File::File(string fn)
{
    fname=fn;
    columns=0;
}

void File::readFile()
{

string line,word,temp;
int num;
int c=0;
Data_item r;
fstream file (fname, ios::in);
 if(file.is_open())

 {
    getline(file,line);
    stringstream str(line);
    getline(str,temp,',');
    while(temp[0]=='.'||temp[0]=='-'||isdigit(temp[0]))
{
    r.addToVec(stod(temp));
    getline(str,temp,',');
    columns++;
}

columns=columns+1;
r.setClassify(temp);
r_vec.push_back(r);
 


 while(getline(file,line))
 {
stringstream str(line);


Data_item r;
getline(str,temp,',');
while(temp[0]=='.'||temp[0]=='-'||isdigit(temp[0]))
{
    r.addToVec(stod(temp));
    getline(str,temp,',');
    c++;
}

r.setClassify(temp);
r_vec.push_back(r);
c++;
if(c!=columns)
{
    cout<<c<<endl;
    cout<<columns<<endl;
    cout<<"there is at least one line in the file that does not match to the other lines\n";
    exit(0);
}
c=0;

 }
 
 
 }
 else{
     cout<<"Could not open the file\n";
     exit(0);
 }


 
}

vector<Data_item> File:: getDataFromFile()
{
    return r_vec;
}
int File::getColumns()
{
    return columns;
}

 
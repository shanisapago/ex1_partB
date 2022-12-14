#include "File.h"
#include "MinkowskiDistance.h"
#include "CanberraDistance.h"
#include "Knn_algorithm.h"
#include "ChebyshevDIstance.h"
#include "Distance.h"
#include <vector>
#include <string>
#include <limits>
#include <ios>
#define ASCII_CHAR_0 48
#define ASCII_CHAR_9 57
using namespace std;

bool isCurrectDistanceName(string distance)
{
    return distance=="AUC" || distance=="MAN" || distance=="CHB"|| distance=="CAN" ||distance=="MIN";
}
Distance* specificDistance(string distance)
{
    if(distance=="AUC")
    {   //MinkowskiDistance d(2);
        //return d;
    }

    if(distance=="MAN")
    {
        //ManhattanDistance* d;
        //return d;
    }
    if(distance=="CHB"){
        
        ChebyshevDistance d;
        ChebyshevDistance* di=&d;
        return di;

    }
    if(distance=="CAN")
    {
        
        CanberraDistance* d;
        return d;
    }
    if(distance=="MIN")
    {
        
       MinkowskiDistance* d;
       return d;
      
    }
    else{
        return nullptr;
    }

} 


//This function asks from the user to put vector and returns it. 

vector<double> getVector(int* error) {

    double v = 0;
    char ch = '0';
    char ch2 = '0';
    int flag = 0;
    vector<double> vector;
    ch = cin.get();
    if (ch == '.' || ch == '-')
    {
        ch2 = ch;
        ch = cin.get();
        flag = 1;
    }
    //if there is no number at the beggining it is an error
    if (!(ch >= ASCII_CHAR_0 && ch <= ASCII_CHAR_9)) {
        (*error)++;
        cout << "Error- You didn't put correctly the number for the vector\n";

        return vector;

    }
    ungetc(ch, stdin);

    if (flag == 1)
    {
        ungetc(ch2, stdin);
        flag = 0;

    }
    while (cin >> v) {
        //put numbers in vector
        vector.push_back(v);
        //if there is no ' ' after the number it is an error
        if ((ch = getchar()) != ' ') {

            break;
        }

        ch = getchar();
        if (ch == '.' || ch == '-')
        {
            ch2 = ch;
            ch = cin.get();
            flag = 1;
        }
        //if there is no number at the beggining it is an error
        if (!(ch >= ASCII_CHAR_0 && ch <= ASCII_CHAR_9)) {
            (*error)++;
            cout << "Error- You didn't put correctly the number for the vector\n";

            return vector;

        }
        ungetc(ch, stdin);

        if (flag == 1)
        {
            ungetc(ch2, stdin);
            flag = 0;

        }
    }

    //If the user didn't put correctly the number for the vector print error
    if (ch != '\n') {
        cout << "Error- You didn't put correctly the number for the vector\n";
        (*error)++;
    }
    return vector;
}





int main(int argc,char** argv)
{

    string nameDistance;
    int k;
    Distance* dis;
    ChebyshevDistance chb;
    MinkowskiDistance min(2);
    MinkowskiDistance auc(2);
    MinkowskiDistance man(1);
    CanberraDistance can;
    vector<double> inputVec;



    if(argc==4)
    {
        
        nameDistance=argv[3];
        if(isdigit(argv[1][0])&& isCurrectDistanceName(nameDistance))
        {
    
            k=stoi(argv[1]);
            
         if(nameDistance=="AUC")
         {   
    
             dis=&auc;
         }

         if(nameDistance=="MAN")
         {
        
             dis=&man;
         }
        
         if(nameDistance=="CHB"){
            
             dis=&chb;

         }
         if(nameDistance=="CAN")
         {
            
       
             dis=&can;
         }
         if(nameDistance=="MIN")
         {
         
         dis=&min;
         }
          
            string fname=argv[2];
            File file(fname);
            
            file.readFile();
            vector<Data_item> r_vec=file.getDataFromFile();
            
           
            if(r_vec.size()==0)
                {exit(0);}

         
          
            int x = 0;
	        int* error = &x;        //if error is 0 there is no error, if more then 0 we have an error	
	        
            cout<<"Enter a vector\n";
            inputVec = getVector(error); //create vector1
	        if ((*error) != 0) { //if error was occured return
		        //cout<<"error input";
                *error=0;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
              
	        }
            else if(file.getColumns()-1!=inputVec.size())
            {
                cout<<"your vector is not in the correct lengh\n";
            }
            
            else{ 
            
                Knn_algorithm knn(k,r_vec,inputVec,dis);
                cout<<knn.findClassify()<<endl;
            }
            
            while(true)
            {
        
               x = 0;
	           error = &x;        //if error is 0 there is no error, if more then 0 we have an error	
	         
               
               cout<<"Enter a vector\n";
               inputVec = getVector(error); //create vector1
	           if ((*error) != 0) { //if error was occured 
		        //cout<<"wrong input\n";
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                
            }
             else if(file.getColumns()-1!=inputVec.size())
            {
                cout<<"your vector is not in the correct lengh\n";
            }
            else{Knn_algorithm knn(k,r_vec,inputVec,dis);
                cout<<knn.findClassify()<<endl;}
            
            
            }
        }
        else{
            cout<<"wrong input"<<endl;
            exit(0);
        }
    
    }
    else{
        cout<<"wrong input"<<endl;
        exit(0);
        }
    
    
    

}
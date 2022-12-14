# ex1_partB
# important message:
I did this work alone because my partner is not take part of this course anymore. I got a confirmation from Hemi and the team to do specific this work alone and it wouldn't affect the grade of the work. for last work I will find a new partner.

## Description
The aim of the project is to classify a data of vector with a file of classified vectors by knn algorithm.

## Compilation and run
The compiler: g++</br>
version: 11

## Instruction
Open the Terminal and write: git clone https://github.com/shanisapago/ex1_partB </br>
Then write make and the the format ./a.out k file_name disttance </br>
such that: </br>
#### k
k is a int number. </br>
if the user input double number as k, the k will be rounded and the program will run </br>
#### file_name
the file_name may be the name of the file the user want to open (it will work just if the file saves where the program saves) ot the full path file </br>
if the file can't be open or there is at least one line in the file that the number of words diffrent from other lines, the program will close </br>
#### disttance
the distance need to be in one of the following format:</br>
AUC </br>
CHB </br>
CAN </br>
MAN </br>
MIN </br>
the AUC is for auclidean distance </br>
the CHB is for chebyshev distance </br>
the CAN is for cannbera distane </br>
thr MAN is for manhaten distance </br>
the MIN is for minkowski distace(with p=2) </br>

## Input-output details
after that the user need to input a vector.</br>
if the vector size is less than the vector's sizes in the file,the user will need to input another vector.</br>

## Implementation details
### class Distance
abstract class.</br>
the getDistance is a abstract function and in addition there are function to set the vectors of the distance.</br>
### class MinkowskiDistance,CanberraDistance and ChecyshevDistance
classes that inherit from Distance class</br>
each of them excute it depending of the distance.</br>
### class Data_item
class for every line of the file.</br>
this class saves a vector of data,classify and distance for every data item from the file.</br>
### class File
class for file. this class reading the data from the file and save it to vector of Data_item</br>
### class Knn_algorithm
this class is for the knn algorithm.</br>
First, it will set all distances of the Data item of the vector, with the user vector and the user distance</br>
later, it will sort the vector of the data_item by their distances</br>
Finally, it will save for each classify the number of times it was saved and return the classify that return the most from the first k data item distances</br>





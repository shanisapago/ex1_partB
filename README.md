# ex1_partB

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




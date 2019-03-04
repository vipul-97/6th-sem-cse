#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

using namespace std;

int main(){

char key[32][10]={"break","auto","case","const","char","continue","default","do","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"};

char c;

int i,count=0,k,d;

char s[20],id[25],u[10];

ifstream fin("input.cpp", ios::app);

int index = 0,break_index = 0 , chunk_index = 0 ;

char temp[10000];


cout<<"Variable      DataType  \n";

while(fin)
{
    fin.get(c);

    temp[break_index] = c;

    if(c==' ' || c == '\n' || c == ',' || c == '}') {

  //Clear the space
        char newtemp[10000];
        int newIndex = 0;

        for(int _i = 0 ; _i <  strlen(temp) ; _i++){
            if(temp[_i] != ' '){
                newtemp[newIndex] = temp[_i];
                newIndex++;
                }
        }


        for(int __i = 0 ; __i <  strlen(newtemp) ; __i++){
            if(newtemp[_i] == ','  ||newtemp[i] == ' ' || newtemp[i] == ';' || newtemp[_i] == '('){
                newtemp[__i] = '\0';
                break;
            }
        }

        char lastDataType[10];

        for(int _i = 0 ; _i < 32; _i++){
            if(strcmp(key[_i], newtemp) == 0){

                strcpy(lastDataType,key[_i]);
                break;
            }
        }

        if(strcmp(newtemp,"int") == 0 || strcmp(newtemp,"char") == 0 || strcmp(newtemp,"float") == 0|| strcmp(newtemp,"double") == 0|| strcmp(newtemp,"long") == 0){

        }
        else if(newtemp[0] == '#'){
        }else if(strcmp(newtemp,"main")==0 || strcmp(newtemp,"return")==0){
        }
        else if(newtemp[0] == ' '){        }
        else if(newtemp[0] == '<' || newtemp[0] == '}' || newtemp[0] == '{'){
        }
        else if(newtemp[0] == '\n'){
        }else if(strcmp(lastDataType,"int")==0){
	    cout<< "    "<<newtemp << "   \t " << lastDataType << "\n";
        }else if(strcmp(lastDataType,"char")==0){
            
            cout<< "    "<<newtemp << "   \t " << lastDataType <<  "\n";

        }else if(strcmp(lastDataType,"float")==0){
            
            cout<< "    "<<newtemp << "   \t " << lastDataType << "\n";

        }else if(strcmp(lastDataType,"double")==0){
            
            cout<< "    "<<newtemp << "   \t " << lastDataType << "\n";

        }else if(strcmp(lastDataType,"long")==0){
           
            cout<< "    "<<newtemp << "   \t " << lastDataType <<  "\n";
        }

        break_index = 0 ;

        //Clear the variable temp and new temp
        for ( int i = 0 ; i< 40; i++){
            newtemp[i] = ' ';
            temp[i] = ' ';
        }

    }else{

    }

    break_index++;

}
}
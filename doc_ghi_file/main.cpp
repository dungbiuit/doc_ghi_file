#include<iostream>
#include<fstream>
#include<string>
using namespace std;
bool checkFileExisted(ifstream &FileIn){
    if(FileIn.fail()){
            cout<<"No file existed";
        return false;
    }
    return true;
}
bool checkEndOfFile(ifstream &FileIn){
    while(!FileIn.eof()){
        cout<<"Not end";
    }
    return true;
}
int main(){
    ifstream FileIn;
    FileIn.open("STRING.TXT",ios_base::in);
        if(checkFileExisted(FileIn)){

        }

    if(checkEndOfFile(FileIn)){
        cout<<"\nEOF!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    }
    FileIn.close();
}

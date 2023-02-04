#include<iostream>
#include<fstream>

using namespace std;

int main(){
	fstream myFile;
	myFile.open("my.txt");
	if(!myFile){
		cout<<"file coud not be opened";
			
	}
	else{
		cout<<"file is retrieved successfully";
}
	myFile.close();

	
}


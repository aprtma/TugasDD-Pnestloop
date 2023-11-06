#include <iostream>
using namespace std;

	
	int main(){
	
	int rows =10;
	int cols =10;
	
	for (int row = 0; row <rows ; row ++){
		for ( int col = 0; col < cols;col++){
			if ( row %3 ==0 || col % 3 == 0){
				cout <<"#";
			} else {
				cout<<" ";
			}
		}
		cout<< endl;
	}
	return 0;
}


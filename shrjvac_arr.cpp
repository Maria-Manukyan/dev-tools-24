//shrjvac erkchap zangvac
#include <iostream>
void shrj_matric ( char arr[][3] , int size_tox, int size_syun ) {
	for ( int i =0; i < size_tox; i++ ) {
		for ( int j = i + 1; j < size_syun; j++ ) {
			char temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		} 
	}

}

void matric ( char arr[][3], int size_tox, int size_syun ) {
	for ( int i = 0; i < size_tox; i++ ) {
		for ( int j = 0; j < size_syun; j++ ) {
			std::cout << arr[i][j]<<" ";
		}
                std::cout << std::endl;
        } 
}


int main() {
	const int size_tox = 3;
	const int size_syun = 3;
	char arr[3][3];
	for ( int i = 0; i < size_tox; i++ ) {
		for ( int j = 0; j < size_syun; j++) {
			std::cout << "arr["<<i<<"]["<<j<<"]=";std::cin >> arr[i][j];
		}
	}
	matric ( arr, size_tox, size_syun );
	shrj_matric ( arr, size_tox, size_syun );
	std::cout << "shrjvac zangvacn e" << arr<<std::endl;
       	matric ( arr, size_tox, size_syun );

	return 0;
}


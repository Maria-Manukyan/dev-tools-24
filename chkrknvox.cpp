#include <iostream>
void tpel_arr ( int arr[][3], int size_tox, int size_syun ) {
	for ( int i = 0; i < size_tox; ++i ) {
		for ( int j = 0; j < size_syun; ++j ) {
			std:: cout << arr[i][j] << " ";
        }
	std::cout <<std:: endl;
	}
}
void array ( int arr[][3], int size_tox, int size_syun ) {
	for ( int i = 0; i < size_tox; i++ ) {
		for ( int j = 0; j < size_syun; j++ ) {
			std::cout << arr[i][j]<<" ";
		}
                std::cout << std::endl;
        } 
}
const  int max_element = 10000;
int arr1[max_element];
void chkrknvox(int arr[][3], int size_tox, int size_syun) {
	for ( int i = 0; i < size_tox; ++i ) {
		for ( int j = 0; j < size_syun; ++j ) {
			arr1[arr[i][j]]++;
		}
	}
	bool gtnel_chkrknvox_element = false;
	for ( int i = 0; i < size_tox; ++i ) {
		for ( int j = 0; j < size_syun; ++j ) {
			if ( arr1[arr[i][j]] == 1 ) {
				std::cout << arr[i][j] << " ";
                		gtnel_chkrknvox_element = true;
			}
		}
	}
	if ( !gtnel_chkrknvox_element ) {
		std::cout << "chkan";
	}
	std::cout <<std:: endl;
}


int main() {
	const int size_tox = 3;
	const int size_syun = 3;
    	int arr[size_tox][size_syun];
    	std::cout << "Enter the elements of the array:" << std::endl;
    	for ( int i = 0; i < size_tox; ++i ) {
		for (int j = 0; j < size_syun; ++j) {
			std::cin >> arr[i][j];
		}
	}
    	array(arr,size_tox,size_syun );
    	std::cout << "chkrknvox elementnern en ";
    	chkrknvox(arr, size_tox, size_syun);
	std::cout <<std:: endl;

    	return 0;
}


#include <iostream>
const int size_tox = 3;
const int size_syun = 3;

void sum_arr ( int arr1[][size_syun], int arr2[][size_syun], int sum[][size_syun]) {
	for ( int i = 0; i < size_tox; i++) {
		for ( int j = 0; j < size_syun; j++ ) {
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
}

void tpel_arr1 ( int arr[][size_syun] ) {
	for (int i = 0; i < size_tox ; i++) {
		for (int j = 0; j < size_syun; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
void tpel_arr2 ( int arr2[][size_syun] ) {
        for (int i = 0; i < size_tox ; i++) {
                for (int j = 0; j < size_syun; j++) {
                        std::cout << arr2[i][j] << " ";
                }
                std::cout << std::endl;
        }
}

int main() {
    int arr1[size_tox][size_syun];
    int arr2[size_tox][size_syun];
    int result[size_tox][size_syun];
    sum_arr( arr1, arr2, result );

    std::cout << "Array 1:" << std::endl;
    tpel_arr1;

    std::cout << "\nArray 2:" << std::endl;
    tpel_arr2;

    std::cout << "\nResult of addition:" << std::endl;
    tpel_arr(sum);

    return 0;
}
	


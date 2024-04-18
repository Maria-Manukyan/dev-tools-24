//vor tveri gumarn e trvac tivy
#include <iostream>
void foo( int arr_size, int arr[], int tivy ) {
	if( arr_size < 2 ) {
		std::cout<<"chapy poqr e 2-ic \n";

	}
	for(int i = 0; i < arr_size; ++i ) {
		for ( int j = i+1; j < arr_size; ++j ) {
			if ( arr[i] + arr[j] == tivy ) {
				std::cout<<arr[i]<<"+"<<arr[j]<<"="<<tivy<<std::endl;
			
			}
			
		}
	}
}	

int main() {
	int tivy;
	std::cout<<"mutqagreq unecac tivy ";
	std::cin>>tivy;
	int arr_size = 0;

	std::cout<<"zangvaci size = ";
	std::cin>>arr_size;

	int arr[arr_size];
	for(int i = 0; i < arr_size; ++i ) {
		std::cout<<"arr["<<i<<"] = ";
		std::cin>>arr[i];
	}

	foo ( arr_size, arr, tivy );
	
	return 0;
}

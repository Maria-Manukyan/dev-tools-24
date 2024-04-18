//erankyunner astxanishnerov
#include <iostream>
int main() {
	int size;
       	std::cout<<"size=";std::cin>>size;
  	for ( int i = 0; i <= size; i++ ) {
      		std::cout<<"\t";
		for ( int j = 0; j < i; j++ ) {
			std::cout<<"*"<<" ";
  		}
		std::cout<<std::endl;
	}
 	std::cout<<"\n";

//erankyun ajic dzax
	for(int i = 1; i <= size; i++ ) {
		std::cout<<"\t";
		for(int k = size-i; k > 0; k-- ) {
			std::cout<<" ";
		}
		for ( int j = 1; j <= i; j++ ) {
			std::cout<<"*";
		}
		std::cout<<std::endl;
	}
	std::cout<<"\n";
 
 //=srun erankyun
	for ( int i = 1; i <= size; i++ ) {
		std::cout<<"\t";
		for ( int k = size-i; k > 0; k-- ) {
			std::cout<<" ";
		}
		for ( int j = 1; j <= i; j++ ) {
			std::cout<<"* ";
		}
		std::cout<<std::endl;
	}

 return 0;
}



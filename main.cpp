#include<iostream>

int main (int argc, char** argv){

	//std::cout << argc << std::endl;
	
	if(argc > 1){
		
	std::cout << "Holi"<< argv[1] << "!" << std::endl;
	}else{
	
		std::cout <<"Introduce un nombre como parametro!!!" << std::endl;
	}

	return 0;
}


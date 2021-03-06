//Author: Sean Benson
//Class: Operating Systems CSC 322
//OperatingSystemsProject.cpp : Defines the entry point for the console application.
//note: Code was modified and added

#include "stdafx.h"
#include "iostream"
#include "cstdlib"
#include "string"

void pause()
{
	system("pause");
}

void allocateSectorOfMemory() {	
	//source: https://www.youtube.com/watch?annotation_id=annotation_395907&feature=iv&index=7&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&src_vid=_8-ht2AKyH4&v=xDVC3wKjS64
	//modified the code
	int sectorSize = 64 * 1024; //one sector is 64Kb
	unsigned char *A = (unsigned char*)malloc(sectorSize * sizeof(unsigned char));
	for (int i = 0; i < sectorSize; i++)
	{
		A[i] = 'c';
	}

	unsigned char *B = (unsigned char*)realloc(NULL, sectorSize * sizeof(unsigned char));
	for (int i = 0; i < sectorSize; i++)
	{
		printf("%d ", A[i]);
	}
	std::cout << "\n";
	std::cout << A[50] << " \n";
	std::cout << "The size of is " << sizeof(A[50]) << " bytes.\n";

	//TODO:delete memory
	
}


int main()
{
	allocateSectorOfMemory();


	pause();	
    return 0;
}



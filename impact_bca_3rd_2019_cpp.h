/* HOW TO USE THIS FILE
	* Download this file and save it anywhere on your machine/network
	* This file isn't backward compatible so use it only with C++ only
	* In your program file, type these line after any other #include

		#include "impact_bca_3rd_2019_cpp.h"

	* now files is included, you can call any function present in this file by it's name and pass parameters

*/

#include <bits/stdc++.h> 
using namespace std;

#ifndef _impact_bca_3rd_2019_cpp_
	#define _impact_bca_3rc_2019_cpp_ true
// basic functionality 			added by preritvishal
	#ifndef _im_swap_cpp_
		#define _im_swap_cpp_ true

		// swap function : overloaded
		
		void swap_ptr(int* ptr1, int* ptr2){
			int temp = *ptr1;
			*ptr1 = *ptr2;
			*ptr2 = temp;
		}
		void swap_ptr(float* ptr1, float* ptr2){
			float temp = *ptr1;
			*ptr1 = *ptr2;
			*ptr2 = temp;	
		}
		void swap_ptr(double* ptr1, double* ptr2){
			double temp = *ptr1;
			*ptr1 = *ptr2;
			*ptr2 = temp;	
		}
		void swap_ptr(short* ptr1, short* ptr2){
			short temp = *ptr1;
			*ptr1 = *ptr2;
			*ptr2 = temp;			
		}
		void swap_ptr(long* ptr1, long* ptr2){
			long temp = *ptr1;
			*ptr1 = *ptr2;
			*ptr2 = temp;			
		}
	#endif

//added by preritvishal
#endif
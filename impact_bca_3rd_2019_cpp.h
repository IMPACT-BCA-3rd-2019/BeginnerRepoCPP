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

	#ifndef _im_reverse_cpp_
		#define _im_reverse_cpp_ true
		// function to get reverse of given number  	added by prerit vishal
		// this function is overloaded

		auto reverse(int _number_){

			bool _negative_number_ = false;

			if(_number_ == 0)
				return 0;

			if(_number_ < 0){
				_number_ = _number_ * -1;
				_negative_number_ = true;
			}

			int _reminder_ = 0, _reverse_ = 0;

			while( _number_ > 0 ){
				_reminder_ = _number_ % 10 ;
				_reverse_ =	( _reverse_ * 10) + _reminder_ ;
				_number_ = _number_ / 10 ; 
			}

			if(_negative_number_)
				_reverse_ = _reverse_ * -1 ;

			return _reverse_ ;
		}

		auto reverse(long _number_){

			bool _negative_number_ = false;

			if(_number_ == 0)
				return 0;

			if(_number_ < 0){
				_number_ = _number_ * -1;
				_negative_number_ = true;
			}

			int _reminder_ = 0, _reverse_ = 0;

			while( _number_ > 0 ){
				_reminder_ = _number_ % 10 ;
				_reverse_ =	( _reverse_ * 10) + _reminder_ ;
				_number_ = _number_ / 10 ; 
			}

			if(_negative_number_)
				_reverse_ = _reverse_ * -1 ;

			return _reverse_ ;
		}

		auto reverse(short _number_){

			bool _negative_number_ = false;

			if(_number_ == 0)
				return 0;

			if(_number_ < 0){
				_number_ = _number_ * -1;
				_negative_number_ = true;
			}

			int _reminder_ = 0, _reverse_ = 0;

			while( _number_ > 0 ){
				_reminder_ = _number_ % 10 ;
				_reverse_ =	( _reverse_ * 10) + _reminder_ ;
				_number_ = _number_ / 10 ; 
			}

			if(_negative_number_)
				_reverse_ = _reverse_ * -1 ;

			return _reverse_ ;
		}
	#endif	// _im_reverse_cpp_

	#ifndef _im_armstrong_cpp_
		#define _im_armstrong_cpp_ true
		// function to check if the given number is armstrong   	added by prerit vishal
		// this function is overloaded
		
		bool isArmstrong(int _input_){

			bool _isNegative_ = false;

			if(_input_ == 0 || _input_ == 1)
				return true;

			if( _input_ < 0){
				_isNegative_ = true;
				_input_ = _input_ * -1;
			}

			int _temp_input_ = _input_ ;
			int _reminder_ = 0, _sum_ = 0;

			while( _temp_input_ > 0){

				_reminder_ = _temp_input_ % 10;
				_sum_ += _reminder_ * _reminder_ * _reminder_ ;
				_temp_input_ = _temp_input_ / 10;
			}

			if( _sum_ == _input_ )
				return true;
			else 
				return false;
	
		}

		bool isArmstrong(long _input_){

			bool _isNegative_ = false;

			if(_input_ == 0 || _input_ == 1)
				return true;

			if( _input_ < 0){
				_isNegative_ = true;
				_input_ = _input_ * -1;
			}

			long _temp_input_ = _input_ ;
			long _reminder_ = 0, _sum_ = 0;

			while( _temp_input_ > 0){

				_reminder_ = _temp_input_ % 10;
				_sum_ += _reminder_ * _reminder_ * _reminder_ ;
				_temp_input_ = _temp_input_ / 10;
			}

			if( _sum_ == _input_ )
				return true;
			else 
				return false;
		}

		bool isArmstrong(short _input_){
			
			bool _isNegative_ = false;

			if(_input_ == 0 || _input_ == 1)
				return true;

			if( _input_ < 0){
				_isNegative_ = true;
				_input_ = _input_ * -1;
			}

			short _temp_input_ = _input_ ;
			short _reminder_ = 0, _sum_ = 0;

			while( _temp_input_ > 0){

				_reminder_ = _temp_input_ % 10;
				_sum_ += _reminder_ * _reminder_ * _reminder_ ;
				_temp_input_ = _temp_input_ / 10;
			}

			if( _sum_ == _input_ )
				return true;
			else 
				return false;
		}
	#endif	// _im_armstrong_cpp_

//added by preritvishal
#endif

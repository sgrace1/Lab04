/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Spencer Grace
 * Date: October 15, 2018
 *
 */
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <stdlib.h>		// need to include for standard library 

using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

/*This function itorated through list and places a random number in each slot*/
void add_numbers(vector<short> &data)
{
	for (ulong i = 0; i < 10; i++) 
	{

		int temp = rand() % 100;		//picks any number between 1 and 99
										//function in stdlib

		data.at(i) = temp;
	}
}


/*This function prints only the even i's starting at 0. This is done through the modulo*/
void print_even(const vector<short>& data) 
{
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i<data.size(); i++) {
			if (i % 2 != 0)				//if remainder is 1 it is odd and is ignored
			{}
			else						//only prints if remainder is 0 and thus even
			{
				cout << ", " << data.at(i);
			}
			
		}
		cout << ">";
	}
}


// print our vector in a fancy way
void print(const vector<short> &data) 
{
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

/*Using comparitive statements this function can itorate through a list to find if a inputed number is contained*/
bool is_present(const vector<short> &data, short value) 
{
	for (ulong i = 1; i < data.size(); i++)			//using loop to iterate
	{
		if (data.at(i) == value)				// compared recived against a specific i
		{
			cout << "I returned true!";
			cout << endl;
			return true;
			
		}
		else
		{
			continue;					//doesnt break out of loop until it goes throught the whole thing
		}

	}
	cout << "I returned false!";
	cout << endl;
	return false;
}


// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

// TODO: implement add_numbers	DONE
// TODO: implement print_even  DONE
// TODO: implement is_present  DONE
// TODO: implement std::sort function  DONE

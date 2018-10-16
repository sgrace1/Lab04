// Edited by : Spencer Grace
// Date : October 15, 2018
// Desc. Used for testing functions


#include "VectorDriver.h"
#include <algorithm>		//to sort


int main() {
 
  vector<short> sample_vector(5);
  vector<short> newSample_vector(10); //created test vector for adding numbers
  cout << "new vector: ";
  fill_vector(sample_vector);
  print(sample_vector);
  cout << endl;


  add_numbers(newSample_vector);
  print(newSample_vector);		
  cout << endl;
  add_numbers(newSample_vector);
  cout << "newest vector: ";
  print(newSample_vector);
  cout << endl;


  cout << "even print out" << endl;
  print_even(newSample_vector);			//testing print even
  cout << "This is a test" << endl;


  cout << "Please enter a number to find" << endl;
  short temp = 0;								
  std::cin >> temp;						//takeing input
			
  is_present(sample_vector, temp);

  cout << "This is the end of the test" << endl;


  vector<short> sortThis{2,1,5,7,4};			// new vecotr for sorting
  cout << endl;
  cout << "This is the unsorted list" << endl;
  print(sortThis);

  std::sort(sortThis.begin(), sortThis.end());			//sorted
  cout << endl;
  cout << "This is the sorted list" << endl;
  print(sortThis);
  cout << endl;
  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  
  system("pause");
  return 0;
}

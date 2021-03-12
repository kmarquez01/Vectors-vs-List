#include <iostream>
#include "List.h"
#include "Vector.h"
#include "dsexceptions.h"
#include <stdlib.h>
#include <time.h>

using namespace std;


double elapsed_time( clock_t start, clock_t finish)
{
   // returns elapsed time in milliseconds
   return (finish - start)/(double)(CLOCKS_PER_SEC/1000);
}

int main (int argc, char * const argv[]) 
{

   cout << "Test case practice with vectors and list"
   cout << "[ Kirby ]" << endl;
   cout << "Program: [part1]" << endl;
   cout << "Type of Elements: [Listed C++ types]" << endl;

   clock_t start, finish;// used for getting the time.
   const int N = 70000;

   cout << "Number of Elements: " << "[ " << N << " ]" << endl;
   cout << "Time Unit: [milliseconds]" << endl;

   Vector<int> v;

   start = clock();

   for(int index = N - 1; index > 0; index--)
   {
      v.push_back(index);
   }

   /* stuff to time here */
   finish = clock();

   cout << "Time for " << N << " Vector<int> insertion: " << elapsed_time(start, finish)/10 << endl;

   start = clock();

   for(int index = N - 1; index > 0; index--)
   {
      v.visitAll();
   }

   finish = clock();

  cout << "Time for " << N << " Vector<int> Visitall: " << elapsed_time(start, finish)/1000 << endl;

   const double N1 = 70000;

   Vector<double> v1;

   start = clock();

   for(int index = N1 - 1; index > 0; index--)
   {
      v1.push_back(index);
   }

   finish = clock();

   cout << "Time for " << N1 << " Vector<double> insertion: " << elapsed_time(start, finish)/10 << endl;

   start = clock();

   for(int index = N - 1; index > 0; index--)
   {
      v1.visitAll();
   }

   finish = clock();

  cout << "Time for " << N1 << " Vector<double> Visitall: " << elapsed_time(start, finish)/1000 <<  endl;

  List<int> list1;

  start = clock();

  for(int index = N - 1; index > 0; index--)
  {
    list1.push_back(index);
  }
   
   finish = clock();

   cout << "Time for " << N << " List<int> insertion: " << elapsed_time(start, finish)/10 << endl;
  
   start = clock();

   for(int index2 = N - 1; index2 > 0; index2--)
   {
      list1.visitAll();
   }

   finish = clock();

  cout << "Time for " << N << " List<int> Visitall: " << elapsed_time(start, finish)/10 << endl;

  List<double> list2;

  start = clock();

  for(int index = N1 - 1; index > 0; index--)
  {
    list2.push_back(index);
  }

  finish = clock();

  cout << "Time for " << N1 << " List<double> insertion: " << elapsed_time(start, finish)/10 << endl;

    start = clock();

   for(int index = N - 1; index > 0; index--)
   {
      list2.visitAll();
   }

   finish = clock();

  cout << "Time for " << N1 << " List<double> Visitall: " << elapsed_time(start, finish)/10 << endl;
  return 0;

}
#include <iostream>
#include <chrono>
#include <memory>
#include <thread>
#include <mutex>

#include "Quicksort.h"
#include "DotProduct.h"
#include "WorkQueue.h"

#define NUMSORTS 4
#define STARTSIZE 8000

using namespace std::chrono;


void worker(WorkQueue workQ) {
   std::shared_ptr<Command> c(workQ.get( ));
   while (c != nullptr) {
      c->execute( );
      static std::mutex outputLock;
      std::lock_guard<std::mutex> lck(outputLock);
      c->identify( );
      c = workQ.get( );
   }
}


int main(int argc, char** args) {
   WorkQueue wq = WorkQueue();

   int sortSize = STARTSIZE;
   for (int i=0; i<NUMSORTS; i++) {
      QuickSort sort = QuickSort(sortSize);
      auto start = high_resolution_clock::now();
      sort.sort( );
      auto stop = high_resolution_clock::now();
      auto duration = duration_cast<microseconds>(stop - start).count( );
      std::cout << "Sort of " << sortSize << " ints took " << duration << " microseconds" << std::endl;
      std::cout << "sort: " << sort;
      wq.put(std::shared_ptr<Command>(new QuickSort(sortSize)));
      wq.put(std::shared_ptr<Command>(new DotProduct(sortSize)));
      sortSize *=2;
   }

   auto time1 = high_resolution_clock::now();
   std::thread t1(worker, wq);
   std::thread t2(worker, wq);
   std::thread t3(worker, wq);
   std::thread t4(worker, wq);
   t1.join();
   t2.join();
   t3.join();
   t4.join();
   auto time2 = high_resolution_clock::now();
   auto duration = duration_cast<microseconds>(time2 - time1);
   std::cout << "execution time with 4 threads is " << duration.count() << " microseconds";
}

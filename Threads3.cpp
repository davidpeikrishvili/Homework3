
#include <stdio.h>
#include <stdio.h>
#include <omp.h>
#include <time.h>
#include<chrono>
#include<iostream>
using namespace std;


int main(int argc, char** argv)
{

    omp_set_num_threads(4);
    int i, thread_id, nloops;

    auto begin = std::chrono::high_resolution_clock::now();
#pragma omp parallel private(thread_id, nloops)
    {
        nloops = 0;

#pragma omp parallel for 

        for (i = 0; i < 1000; ++i)
        {
            ++nloops;
        }

        thread_id = omp_get_thread_num();

        printf("Thread %d performed %d iterations of the loop.\n",
            thread_id, nloops);
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    std::cout << "It has been :" << elapsed.count();
    return 0;
}
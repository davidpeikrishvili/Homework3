[Background Information]
- The code that I found uses omp which helps run the program with multiple threads at once by making the loop through a certain amount of times(which can be chnaged as well).
- To change the number of threads I used the built in function omp_set_num_threads(num_value) which changes the amount of threads according to what you set num_value as.
- Then to time the execution, I used the library of chrono and set up a start and end with start being before execution and end being after exection.
- The graph that I got does show a bit of correlation between time and num of threads with the idea that time is decreasing.
- But even if you change the number of threads, it doesn't really mean that something is being done faster, its just more work load is being processed.
- Also the times depended on vs studio and my PC as well. Since after changing code, the run time for some reason was higher than when the terminal was already running. 

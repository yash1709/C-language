/* Memory Layout of C Programs - Dynamic Memory Allocation : #45

*** What is Dynamic memory?
Dynamic memory allocation is the process of allocation of memory space at the run time. 
We use the concept of dynamic memory allocation to reduce the wastage of memory, and it is the optimal way of memory allocation. 


*** Memory Allocation in C :
Memory allocation in C can be divided into four segments. 

1) Code: 
Code composes of all the text segment of our program. 


2) Variables: 
By variables, we mean both global and static variables. Global variables can be used anywhere in the program, while static has its limitations inside the function. 
The variable segment is further divided into two segments, depending on the data they can store.

Data segment: stores initialized data i.e., data whose value is already given.

bss segment: stores uninitialized data i.e., data whose variable is initialized only


3) Stack:
The stack is a LIFO data structure.
Initially, the stack looks like a bucket in which the last entry to be inserted will be the first one to get out. That is why it is known as LIFO data structure i.e., last in first out.


*** Stack Overflow:
When a stack gets exhausted due to bad programming skills or some logical error, the phenomenon is known as Stack Overflow.

4) Heap:
Heap is a tree-based data structure. It’s size increases when we allocate memory dynamically. 
To use the heap data structure, we have to create a pointer in our main function that will point to some memory block in a heap. The disadvantage of using heap is that the memory will not get freed automatically when the pointer gets overwritten. 


*** Difference between Static and Dynamic Memory Allocation
                Static                                          Dynamic 
        Allocation before execution                         Allocation at run time
        Non-reusable memory                                  Reusable memory
        Less optimal way                                    More optimal way



*/
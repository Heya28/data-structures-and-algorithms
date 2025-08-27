
### Module 1: Core Concepts and Sequence Containers
#### - Part 1: The Basics - push_back(). size, access [], .at(), iteration
#### - Part 2: Performance - size vs capacity, reserve., reallocation cost
#### - Part 3: Modification - pop_back(), erase, insert, iterator invalidation
#### - Part 4: Standard Algorithms - sort, find, binary_search
### - Part 5: Custom sorting with Lambdas

- Memory access is faster for vectors and great for computer's memory cache as stored in contiguous memory location. O(1)
- **v.push_back(el)**;
- **v[index]** or **v.at(index)** ( slower with bounds checking but safer )
- **v.size()** or **v.capacity()** ( different -> reallocation )
  1. When we do push_back and the vector finds new, bigger block of memory ( usually double the size ) 
  2. copies all existing elements from old to new location
  3. releases old memory.
- **vec.reserve(100000)**; size=0 and capacity =100000
- **v.pop_back()** O(1) Fast
- **v.clear()** O(N) Fast since no shifting is required. 
- **v.erase( it )** O(N) : slow 
- **v.insert( it, val)** : O(N) very slow

### Some Functions:
- **sort(beg it, end it )** O( NlogN) and is fast
- **find(beg it, end it, val)** -> returns an iterator to the first occurence if found otherwise returns the end iterator.
- **binary_search(it beg, it end, val)** returns a boolean.


2 How vectors can resize ? 
Ans : When you add an element, it creates a new array in memory somewhere else and copies all elements to it. 
3 Data is heap allocated -> In Raw Arrays , data is stack allocated and is size is determined at compile time. 
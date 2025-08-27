
### As part of CPP STL:
Memory access is faster O(1)

- **v.push_back(el)**;
- **v[index]** or **v.at(index)** ( slower with bounds checking )
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
- **binary_sort()**


2 How vectors can resize ? 
Ans : When you add an element, it creates a new array in memory somewhere else and copies all elements to it. 
3 Data is heap allocated -> In Raw Arrays , data is stack allocated and is size is determined at compile time. 
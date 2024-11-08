**The problem is related to Array and Hashing Data Structure**

**Brute Force Solution**
The brute force way to solve the problem is by running two for loops.
The outer loop numi will be compared to the elements of the inner loop 
numj. if any duplicate is found we return true , and at the end of the nested
loop we can return false. This type of solution will have a time complexity
of O(n^2)

**The Efficient Solution**

Searching operations done using dictionary or set data structures
have a time complexity of O(1). So, if we create an empty data structure
of set or dictionary we can compare if the element is already present or not
.While starting the loop, we see if i is already in the set. If it is not in set
we add it to the set. If at anypoint we find that the i-th element is already in set
while the loop is running, we return true as it is a duplicate.
After the loop ends we return false indicating the elements are unique in the list.

The time complexity of the solution is : O(n) 
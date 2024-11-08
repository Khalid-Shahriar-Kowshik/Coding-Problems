**The problem is related to Array and Hashing Data Structure**

**A Sliding Window problem**

We are tasked with finding duplicates within a specific range k. That is,
duplicates are only valid under the following condition: [ abs(i-j)<=k ]

Now, we first initialize a empty set(window) and a lower bound(lower=0).
While running the loop for the range of the nums list, we use a  condition
to check wether the nums[higher] is already in the set or not. If True we return
True.

We have to note that before we even start with checking the condition we first have to
see if the window size is valid. If we see: higher-lower > k ; then, we have to slide the
window one space to the right and discard the lower value i.e the first value. we do this 
by removing nums[lower] from the window set {window.remove(nums[lower])} and increment lower by 1.

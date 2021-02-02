# Question 2
> ObjectInfo class is a diagnostic class intended to track statistical data such as life time and
number of objects. A specific class inherits from ObjectInfo as shown.  A member of that specific class is then declared in the body of a profiled class.

> Although the solution works it is hard to maintain as it requires the profiling class to be keep in sync with the profiled class as the class name is used to identify the later. It would also be hard to extend the profiling class to gather different information such as the size of object.

> Propose a better solution where the dependencies between the profiled and profiling classes are minimal.

**Bonus questions:**
- Is it possible to implement a check that would determine if the object of the profiled class was created on stack or heap?
- The profiling class is using TimePrinter to output the current time. Please provide suitable implementation.

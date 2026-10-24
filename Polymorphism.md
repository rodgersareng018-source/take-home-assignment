Polymorphism 
This program demonstrates runtime polymorphism by allowing different object types to respond uniquely to the exact same function call through a shared base-class interface.

The Interface & Virtual Dispatch: The base Employee class defines a virtual void work() function and a virtual destructor. The virtual keyword instructs the compiler to use dynamic dispatch, meaning function calls are resolved at runtime based on the actual object type rather than the pointer type. A virtual destructor ensures that derived objects are safely cleaned up without memory leaks.

Overriding Behaviors: The Manager and Developer classes inherit from Employee and use the override keyword to supply their own specialized implementations of the work() function tailored to their respective roles.

Runtime Execution: In main(), base-class pointers (Employee* emp1 and Employee* emp2) hold instances of Manager and Developer. When emp1->work() and emp2->work() are invoked, C++ dynamically routes each call to the correct overridden function at runtime, producing distinct outputs from an identical interface before cleaning up the allocated memory with delete.
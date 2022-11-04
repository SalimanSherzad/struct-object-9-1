1.  Suppose the following code is used for the constructor of the box
    class:

    ```c++
    Box::Box() {
        double width = 0;
        double height = 0;
        double length = 0;
    }
    ```
    
    What is wrong with the following code snippet and why is it wrong? 
    
    > The data type is used again,this means you are declaring the variable again.

2.  What would you need to do in order to fix the "undefined reference" error
    reported by the compiler?

    ![img.png](images/error.png)

    > I would have to define that function in box.cpp.

3.  What is the purpose of a default constructor?

    > This will run no matter what for the object and can set values/variables .

    What variables from the `Box` class should be set by the default 
    constructor?

    > length, height, width.

4.  In general, how do you determine the variables that should be 
    initialized by a default constructor?

    > all the variables initialized in the private members.
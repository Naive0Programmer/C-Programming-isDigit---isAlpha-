# C Programming (isAlpha - isDigit)

### Intro

In this tutorial we will write two functions to check a single **char** if it is an alphabet character or numeric character and will return 1 if it is and 0 if its not.

```c
#include <stdio.h>
int main(){
    
    return 0;
}
```

Once we create our main class, usually include a libarary **stdio.h** this has more functions that we will use like <u>printf()</u> ..etc. You can take a look at [stackoverflow (stdio.h)](https://stackoverflow.com/questions/19088284/what-does-include-stdio-h-really-do-in-a-c-program) for more details.

### Methods - Prototypes

We will create two methods called **isDigit** and **isAlpha**. However in order to use these methods we will have to create their **prototype** functoin which required at the begining of the file.c when we run our program these prototypes will tell the program to register these methods first because they will be called later, they are basically methods with no body, and they are decleared before the main function, we are telling the program that these methods will do somehting but have them saved in memory now. 

```c
a#include <stdio.h>

int isDigit(char);
int isAlpha(char);

int main(){
	char i = 'a';
    printf("is %c a nuumber? %d\n", i, isDigit(i));// false = 0
    printf("is %c a char? %d\n", i, isAlpha(i)); // true = 1
    return 0;
}
```

In **main** will have a char variable that will take a letter or a number, then we will apply our method with printf to check if our methods works. These methods will take a char as a parameter to check in memory if it is an alphabet or a number.

### First method

In this method we check the char if its a number, if it is then we return 1 (true) otherwise 0 (false) in this case since C programming language does not have a boolean type.

**Note:** You will need to take a look here [ASCII](https://en.wikipedia.org/wiki/ASCII) to learn more about how chars are manipulated. Each charactor has an integer number correspond's to it, so we can say that ‘a’ is less than ‘b’ and ‘1’ is less than ‘2’ following the **ASCII** table, characters are different than any other data type in C. When we compare them in C, it's uses their integer correspond’s in order to complete the comparison.

```c
int isDigit(char letter)
{
    if (letter >= '0' && letter <= '9')
        return 1;

    return 0;
}
```

### Second method

In this method we check the char if its a number, if it is then we return 1 (true) otherwaise 0 (false).

```c
int isAlpha(char letter)
{
    if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
        return 1;

    return 0;
}
```

Make sure all these methods in one file **main.c** and in that order.

Execution: Run terminal on linux or CMD on Windows. Go to the current working directory, then write:

```bash
NaiveProgrammer: ~/dev/C -> cc main.c 

NaiveProgrammer: ~/dev/C -> ./a.out 
     
Result:
is a a nuumber? 0
is a a char? 1
```

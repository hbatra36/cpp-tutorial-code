#include<iostream>
using namespace std;

int main(){
    //types of operators:
      //arithematic(binary and unary), relational, logical, bitwise operators and assignment operators.
    //pre incrementer and post incrementer
    // with pre incrementer the value of the variable increments instantly in that very statement
    // with post incrementer current value of the variable is preserved temporarily and will get incremented before the next statement is executed.

    //bitwise operators examples are in the subsequent codes.
    //bitwise operators operates on bits and perform bit-by-bit operations.
    //AND - &, OR - |, XOR - ^, ones complement - ~, shift left - <<, shift right - >>.
    /*
    shift left example,
    4<<1
    (0100)
    = 1000
    similarly for right shift,
    4>>1    the position to be shifted is specified by the second operand.
    (0100)
    = 0010

    some useful stuff;
    a<<n --- a*2^n
    a>>n --- a/2^n
    miscellaneous;
    1.sizeof() --- returns size of the parameter.
    2.condition ? X:Y --- ternary / conditional operator,returns value of X if the condition is true else returns value of Y.
    e.g., int a = 10;
          int b = 5;
          int c = a>b? a-b:b-a  (this is modulo of difference fo two numbers)
    3.cast --- converts one data type to another
    e.g., char ch = 'a'
          int(ch); (this returns the ascii value of a which 97)
    4.comma(,) --- causes a sequence of operations to be performed. 
    let a = (2,3,4), here a will be assigned the last value that is 4
    5. reference(&) --- returns the address of a variable
    int a 
    &(a)
    6.* pointer --- pointer to a variable
    int * b = &a
    gives pointer b for wherever a is stored in the memory.
    

    */

    int a = 10;
    int b;

    b = ++a;
    cout<<a<<" "<<b<<endl;

    int c = 10;
    int d;
    d = c++;
    cout<<c<<" "<<d<<endl;

    return 0;



}
# Computer-Algebra-System
A C++ Compiler to translate and simplify algebraic polynomial operations that include: +, -, *, / and ^. 

The main file is called main.cpp that uses the **shunting yard algorithm** to convert polynomials to Reverse Polish Notation and generates a recursive Abstract Syntax Tree.

The AST is then simplifed repeatedly until it can not be further simplified. It is then converted back to a string polynomial through an In order traversal of the modified AST.

*Note that the denominator in the division allowed is integer in this calculator since the domain is restricted to polynomials.







Authors: Dev Narula, Irene Choi

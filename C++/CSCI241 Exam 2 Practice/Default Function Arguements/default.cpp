#include <iostream>

/**
 *  @note Default Arguement: Is a value provided in a function declaration that is automatically assigned by the compiler if the caller of the function doesn't provide a value
 *  for the arguement when the function is called.
 *
 *  Restrictions on Default arguements
 *
 *  void f(int, int = 2, int = 3);     // Default values are for trailing arguments, so this is okay.
 *  void g(int = 1, int = 2, int);     // Error: default values supplied for first two arguments.
 *  void h(int, int = 3, int);         // Error: default value supplied only for middle argument.
 *
 *
 *
 *
 */


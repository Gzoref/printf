# _printf(); Project

![printf-in-action](https://i.ibb.co/6bKXd4H/printf-block-diagram.png")

###  The _printf` function documentation.

- This documentation is an explanation of how _printf was created, and how it works.

- `_printf()` function is used to print the “character, string, float, integer, octal and hexadecimal values” onto the output screen.

### Creating the  _printf(); function.

- To create the _printf(); function, my team took the inititatiave of making a number of different files:

- File: `holberto.h` ---- Header file, contains the prototypes, includes all the librabries needed for this project, and it contains a `typedef struct`

  ```c
  /**
  * format_spec - struct
  */
  typedef struct format_spec
  {
    char  *spec;
    int (*f)(va_list);
  } spec_type;
  /* f is function pointer */
  ```



- File:  `_printf.c` ---- contains the `_printf();` function.

  ```c
  /* _printf Prototype */

  int _printf(const char *format, ...);

  /* ^ The _printf function ^ */
  ```

  - The function takes in a char pointer (`char *format`), and an ellipsis (`...`)
    - An ellipsis is used to represent a variable number of parameters to a function.

  - The function `returns` and `int` value.

    - In this function we created two variables and a function pointer.

    ```c
    int index;
    ```

    The index variable use, is to loop through the indexes of `format`

    * As it loops through we are checking if `format[index] == '%'` if true skip to the next index. If the next index equals any of the specifiers declared (%d, %i, %, %c, %s, %r) then call the corresponding  function to format. Read files `format_number.c`, `format_number2.c`, and `get_specifier.c`.

    ```c
    int spec_count;
    ```

    ```c
    int (*get_f_spec)(va_list);
    ```

    The function pointer get_f_spec.

    - get_f_spec is a function pointer to a function that takes (va_list) and returns int
      get_f_spec is set equal to get_specifier(format[index])

      get_specifier(); is in file: get_specifier.c



- File: `get_specifier.c` ---- contains the `get_specifier();` function.

  ```c
  int (*get_specifier(char format))(va_list);
  ```

  - In the function we created and int variable and a 2d array.

    ```c
    int i;

    spec_type type[] = {
    	      	     {"i", get_int}, /* <--> remember the struct in the "holberton.h" file? in this case 'i' is spec (the char), and get_int takes over the function pointer ( `int (*f)(va_list);` or f )*/
        {"d", get_int}
        //there is more code
    }
    ```

    The ( i ) variable use, in the function is to increment and check for indexes of array type[] inside of a for() loop.

    - The for() loop checks if `format` is equal to any of the specifiers (%d, %i, %, %c, %s, %r), if true return the correspoding function.

      Example:

      - _printf("%d", 21); ----> In this example `d` is the specifier, and the corresponding function is `get_int`.

  - File: `format_number.c` ---- contains function:

    ```c
    int get_int(va_list arg); /* for specifiers %i and %d */
    ```

  - File: `format_functions.c` ---- contains functions:

    ```c
    int get_char(va_list arg); /* for specifier %c */
    ```

    ```c
    int get_string(va_list arg); /* for specifier %s */
    ```

  - File: `format_functions2.c` ---- contains functions:

    ```c
    int get_reverse(va_list arg); /* for specifier %r - prints reversed Ex: string -> "gnirts" */
    ```

    ```c
    int get_percent(va_list __attribute__((unused)) arg); /* print the '%' sign */
    ```

    ```c
    int get_hex(va_list arg); /* for %x - prints lowercase hex. */
    ```

    ```c
    int get_heX(va_list arg); /* for %X - prints UPPERCASE HEX. */
    ```
    
    &#10240;<br>
<hr>
&#10240;<br>
&#10240; &#10240; &#10240; Author: Marcelo Martins<br>
&#10240; &#10240; &#10240; GitHub: @matxa<br>
&#10240; &#10240; &#10240; Email: matxa21@gmail.com<br>
&#10240;
<hr>

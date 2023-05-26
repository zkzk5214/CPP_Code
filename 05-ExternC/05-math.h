/*
    1-Header file (.h): use for put Function Prototypes 
    2-Use #ifndef、#define、#endif to prevents the header file 
        from accidentally being included more than once.
    3-#ifndef、#define、#endif is supported by C/C++ standard 
        with no subject to any restrctions of complier
    4-#ifndef、#define、#endif can also act on parts of the code 
        in .h file.
*/ 

// #ifndef __MATH_H // ifndef:"if not defined".
// #define __MATH_H 

/*
If the __cplusplus constant has not been defined, 
    the next line is included in the program.
    Otherwise, this line are not included in the program.
*/ 
#ifdef __cplusplus 
extern "C" {
#endif // __cplusplus
    // Function Prototypes 
    int sum(int v1, int v2);
    int delta(int v1, int v2);

#ifdef __cplusplus
}   
#endif // __cplusplus

// #endif //!__MATH_H
// 1- '#include' is one of the preprocessor directive of C. The preprocessing by the preprocessor is the processing performed before compile. 
//     Preprocessor directive generally start with '#'. '#include' is followed by a 'Filename'. After the preprocessor finds the '#include', 
//     it will seach for the file according to the 'Filename' and include the contents of this file into the source file. The content in included 
//     file will replace the '#include' in the source file, as if u copy the entire content of the included file to the location of #include.
//     If the 'Filename Extension' of included file is '.h', we call it 'Header File', and the 'Header File' can be used to declare functions
//     (function is the method in Object-oriented programming). To use these functions, you must first use the #include to include the Header File 
//     where these functions are saved.

// 2- #include is not limited to 'Header File' with '.h', but can include any C/C++ code files that the compileor can recognize, including '.c', 
//     '.hpp', '.cpp', etc, even '.txt', '.abc'.

// Eg1:
// #include <stdio.h>
// int main(int argc, const char * argv[])
// { 
//     // insert code here...
//     printf("Hello, World!\n");
//     return 0;
// }

// The function of '#include' is to completely copy the contents of the file to the location of '#include'.
# include <stdio.h>

// If it's a system-provided files, it is best to use '<>', if it's a file created by the developer, it is best to use " "
# include "01-HelloWorld.txt"  // 如果是系统自带的文件，最好用 < >；如果是开发人员自己创建的文件，最好用 ""

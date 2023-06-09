#include <iostream>
// There is a default global namespace, and any
//      namespaces we create are nested within it by default.
int g_no;

// Namespace nesting
namespace AA{
    namespace BB{
        int g_age;
    }
}
int main(){
    ::g_no = 10;
    
    ::AA::BB::g_age = 30;

    // getchar();
    return 0;
} 
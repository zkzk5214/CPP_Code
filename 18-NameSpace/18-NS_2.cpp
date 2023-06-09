#include <iostream>

// Namespace nesting
namespace AA{
    namespace BB{
        int g_age;
    }
}
int main(){
    AA::BB::g_age = 10;

    using namespace AA::BB;
    g_age = 20;

    using AA::BB::g_age;
    g_age = 30;

    // getchar();
    return 0;
} 
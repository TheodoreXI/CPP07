#include "Array.hpp"

int main()
{
    try {
        Array<int> a;
        std::cout << "this is empty size " << a.size() << "\n";
        Array<char> k(15);
        std::cout << "this is not empty size " << k.size() << "\n";
        k[5] = 't';
        //std::cout << k[5] << " " << k[18] << "\n";
        Array<std::string> g(5);
        g[0] = "hello";
        g[1] = "CPP";
        g[2] = "Ihope";
        g[3] = "Today";
        g[4] = "Good";
        std::cout << g[3] << "\n";
        Array<std::string> m(3);
        m[0] = "one";
        m[1] = "two";
        m[2] = "three";
        m = g;
        for (size_t i = 0; i < m.size(); i++)
            std::cout << "this is m with the index " << i << " and the value " << m[i] << "\n";
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << "\n";
    }
}
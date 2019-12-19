#include <iostream>
//using namespace std;
#include <array>
#include <algorithm>
// #include <algorithm>

// Local Prototypes
void fun(int const& value); 


int main()
{
    std::array <int, 3> info = {4, 7, 9};
    std::cout << "First element: " << info.front() << std::endl;
    std::cout << "Last element: " << info.back() << std::endl;
    std::cout << "Size of Array: " << info.size() << std::endl;

    //Iterate over elements
    std::cout << "Loop using index notation" << std::endl;
    for (size_t i =0; i < info.size(); i++)
    {
        std::cout << &info[i] << std::endl;
    }

    //Literator
    std::cout << "Loop using iteration notation" << std::endl;
    for ( auto it = std::begin(info); it != std::end(info); ++it)
    {
        std::cout << it << std::endl;       //it is a pointer (address)
        std::cout << it << " " << *it << std::endl;      //de-reference operator to give value
    }

    //Range based loop
    std::cout << "Range based loop" << std::endl;
    for(const auto& value: info)
    {
        std::cout << value << std::endl;

    }

    //For each loops
    // Functor: functions that act like an object
    std::cout << "for_each algorithm, using a function or functor" << std::endl;
    std::for_each(std::begin(info), std::end(info), fun);

    // Lambdas: [](){}          one-time functions on the fly
    // [] to take local variables
    // () declare parameters of the function
    // {} declare the body of the function
    std::cout << "for_each algorithm, using a lambdas" << std::endl;
    std::for_each(std::begin(info), std::end(info), [](int const& value){std::cout<<value<<"\n";});


    return 0;
}

// Local function definitions
void fun(int const& value) 
{
    std::cout << value << "\n";
}
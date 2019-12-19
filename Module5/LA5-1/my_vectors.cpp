#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec;

    //Add element
    vec.push_back(100); //both, front and back contina 100 elements
    vec.push_back(200); //Now back has 200 element
    cout << "Front" << vec.front() << endl;
    cout << "Back" << vec.back() << endl;

    vec.push_back(300);
    cout << "using index notation" << endl;
    for( size_t i=0; i , vec.size(); ++i)
    {
        cout << vec[i] << endl;
    }

    cout << "Using iterator" << endl;
    for(auto it = begin(vec); it != end(vec); ++it)
    {
        cout << *it << endl;
    }

    cout << "Range based" << endl;
    for(const auto& value: vec)
    {
        cout << value << endl;
    }

    //Define and initialize using {} with csv
    int max = 5;
    // vector<int> vec2 = {-1, -1,-1,-1, -1};
    vector<int> vec2(max, -1);//use vector constructor
    for (int x : vec2)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
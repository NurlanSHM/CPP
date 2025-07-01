# include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main() {
    using namespace first;

    std::cout<<x; 

    //std::cout << first::x << '\n' << second::x;


    using namespace std;
    cout << " and " << x;

    using std::cout;
    using std::string;

    cout;
    string hello = "Hello";

    return 0;
} 
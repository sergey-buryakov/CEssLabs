#include <iostream>

using namespace std;

class Square{
private:
    float side, area;
public:
    void set_side(float val){
        if(val > 0){
           side = val;
           area = side * side;
        }
    }
    void print(void){
        cout << "It's square with side " << side << " and area " << area << endl;
    }
};

int main()
{
    Square s;
    s.set_side(13);
    s.print();
    return 0;
}

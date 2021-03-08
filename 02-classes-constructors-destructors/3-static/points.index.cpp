/**
 * Demonstrates static members.
 * Creates a class "point" with static members for giving a unique index to each object.
 */

#include <iostream>
#include <stdexcept>
using namespace std;

class Point {
    int x;
    int y;
    int index;

    // A non-static const must be initialized out-of-line:
    static int nextPointIndex;

  public:

    Point() {
        //nextPointIndex=0; // logic error
        this->index = nextPointIndex;
        nextPointIndex++;
    }

    // A static const can be initialized inline:
    static const int MAXX=1366;
    static const int MAXY=768;

    void setX(int newX) { 
        if (newX>MAXX)
            throw out_of_range("New x is too large! The maximum is "+std::to_string(MAXX));
        //x is equivalent to this->x;
        x = newX; 
    }

    void setY(int newY) { 
        if (newY>MAXY)
            throw out_of_range("New y is too large! The maximum is "+std::to_string(MAXY));
        y = newY; 
    }

    string to_string() {
        return "point #"+std::to_string(index)+": ("+std::to_string(x)+","+std::to_string(y)+")";
    }

    static void showMax() {
        //cout << this << endl; // compilation error: no this
        cout << MAXX << "," << MAXY << endl;
    }
};

int Point::nextPointIndex = 0;


int main() {
    //Point::to_string();
    Point p1;
    cout << "p1 = " << p1.to_string() << endl;

    Point p2;
    p2.setX(10);
    p2.setY(20);
    cout << "p2 = " << p2.to_string() << endl;
    
    cout << "Maximum values: " << endl;
    cout << Point::MAXX << "," << Point::MAXY << endl;
    Point::showMax();

    // p1.setX(2000);  // exception

    return 0;
}

int equation1 (int t) {
    int y1;
    y1 = (-3 * (t * t) )+ 5;
    return y1;
}

int equation2 (int t2){
    int y2;
    y2 = (3 * (t2 * t2)) + 5;
    return y2;
}

#include <iostream>
using namespace std;

int main() {
    int iteration[1000];
    int value_t [1000];
    int value_y[1000];
    int counter = 1;
    for (int t = -45; t <= 900; t+=5){
        if (t < 0){
            value_y[counter] = equation2 (t);
        }
        else {
            value_y[counter] = equation1 (t);
        }
         value_t[counter] = t;
         counter +=1;
    }
    cout << "Iteration \t" << "t\t" << "y(t)" << endl;
    int counter2 = 1;
    for (int t = -45; t <= 900; t+=5) {
    cout << counter2 << "\t\t" << value_t[counter2] << "\t" << value_y[counter2] << endl;
    counter2 += 1;
    }
}

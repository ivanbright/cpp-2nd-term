#include <iostream>
#include <cmath>
using namespace std;
template <class T>
struct Geoseries {
    T a,r;
    int size;

    explicit Geoseries(int size, T a, T r):a(a), r(r), size(size)  {}

    void g(T current, int i) {
        if (i == size) {
            return;
        }
        cout << current << endl;
        g(current * r, i+1);
    }
    void generate() {
        g(a, 0);
    }
    T sum() {
        T sn = a * (1 - pow(r, size)) / (1 - r);
        return sn;
    }
    ~Geoseries() {}
};

int main  () {
   // Geoseries<double> geoseries(7, 1,2);
   //  cout << "Sum = " << geoseries.sum() << endl;
   //  cout << "Geo series" << endl;
   //  geoseries.generate();

    Geoseries<long long> geoseries2(10, 1,0.5);
    cout << "Sum = " << geoseries2.sum() << endl;
    cout << "Geo series2" << endl;
    geoseries2.generate();
    return 0;
}
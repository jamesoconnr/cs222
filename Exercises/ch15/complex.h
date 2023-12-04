#include <string>
using namespace std;
enum Flag {POLAR};
class Complex {
    double real, imag;
    double mag, theta;
    bool polar;

    public:
    Complex() {
        real = 0; imag = 0;
        polar = false;
    }

    Complex(double r, double i) {
        real = r; imag = i;
        polar = false;
    }

    Complex(double m, double t, Flag) {
        mag = m; theta = t;
        polar = true;
    }

    string to_string();

    void calculate_polar();
    void calculate_cartesian();

    Complex operator/(Complex& c);
    Complex abso();
    Complex operator-(const Complex& c);

    int get_imag() const;
    int get_real() const;
};
std::ostream& operator << (std::ostream &out, const Complex &c);
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

#define sqr(x)		(x*x)
//#define max(a,b)	((a > b) ? a : b)



struct mathVector
{
    double x,y;
};


void inputVector(mathVector& vec, string msg)
{
    cout << msg << endl;
    cout << "X: "; cin >> vec.x;
    cout << "Y: "; cin >> vec.y;
}


double inputScalar(string msg)
{
    double sc = 0;
    cout << msg << endl;
    cout << "number: "; cin >> sc;
    return sc;
}


void printVector(mathVector vec, string msg)
{
    cout << msg << " (X:" << vec.x << ",Y:" << vec.y << ")" << endl << endl;
}


mathVector addVectors(mathVector a, mathVector b)
{
    mathVector sum;
    sum.x = a.x + b.x;
    sum.y = a.y + b.y;
    return sum;
}


mathVector subVectors(mathVector a, mathVector b)
{
    mathVector sub;
    sub.x = a.x - b.x;
    sub.y = a.y - b.y;
    return sub;
}


mathVector scaleVector(mathVector vec, double scale)
{
    vec.x *= scale;
    vec.y *= scale;
    return vec;
}


double getVectorLength(mathVector vec)
{
    return sqrt(sqr(vec.x)+sqr(vec.y));
}


mathVector normVector(mathVector vec)
{
    double maxd = max(fabs(vec.x), fabs(vec.y));
    return scaleVector(vec, 1/maxd);
}


string askCommand()
{
    cout << "list of commands: (add, subtract, scale, length, normalize, exit)." << endl;
    cout << "enter the command: ";
    string cmd;
    cin >> cmd;
    return cmd;
}

int main() {

    cout << "vector calculator" << endl << endl;

    string cmd = askCommand();
    while(cmd != "exit") {
        if (cmd == "add") {
            mathVector a, b;
            cout << "add vectors" << endl;
            inputVector(a, "enter vector A");
            inputVector(b, "enter vector B");
            mathVector c = addVectors(a, b);
            printVector(c, "result");
        }
        else if (cmd == "subtract") {
            mathVector a, b;
            cout << "sub vectors" << endl;
            inputVector(a, "enter vector A");
            inputVector(b, "enter vector B");
            mathVector c = subVectors(a, b);
            printVector(c, "result");
        }
        else if (cmd == "scale") {
            mathVector a;
            cout << "multiplication vector on number" << endl;
            inputVector(a, "input vector A");
            double scale = inputScalar("enter multiplier");
            a = scaleVector(a, scale);
            printVector(a, "result");
        }
        else if (cmd == "length") {
            mathVector a;
            cout << "vector length" << endl;
            inputVector(a, "enter vector A");
            double veclen = getVectorLength(a);
            cout << "vector length A:" << veclen << endl << endl;
        }
        else if (cmd == "normalize") {
            mathVector a;
            cout << "normalization of the vector" << endl;
            inputVector(a, "enter vector A");
            a = normVector(a);
            printVector(a, "result");
        }
        else {
            cerr << "invalid command." << endl;
        }
        cmd = askCommand();
    }


}

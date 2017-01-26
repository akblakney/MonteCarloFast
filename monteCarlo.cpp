#include <iomanip>
#include <fstream>
#include <vector>
#include <string>
#include <time.h>
#include <math.h>
#include <iostream>
#include <chrono>
#include <limits.h>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::stoi;



int main(int argc, char *argv[]){
    auto start = std::chrono::high_resolution_clock::now();
    long int numPoints = std::stol(argv[1]);
    cout << numPoints << std::endl;
    srand(time(NULL));

    int inCircle = 0;
    int outCircle = 0;

    for(int i=0; i<numPoints; i++){
        double x = ((double) rand() / (RAND_MAX));
        double y = ((double) rand() / (RAND_MAX));
        if(y < sqrt(1-(x*x))) {
            inCircle++;
        }
    }
    auto elapsed = std::chrono::high_resolution_clock::now() - start;
    long long milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(elapsed).count();
    double seconds = milliseconds / 1000.0;
    int speed = 1000000000 * seconds / numPoints;
    double result = (double) inCircle / numPoints;
    cout << "Pi approximation: " << result * 4 << std::endl;
    cout << "Time per iteration: " << speed << " nanoseconds" << std::endl;
    cout << "Total time: " << seconds << " seconds" << std::endl;
 
}
#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

double calculateVelocity(double G, double Mcentral, double R) {
    return sqrt(G * Mcentral / R);
}

int main() {
    // Constants
    const double G = 6.67430e-11;  // Gravitational constant (m^3/kg/s^2)

    // Input values
    double Mcentral, R;

    // Read values from the user
    cin >> Mcentral;
    cin >> R;

    // Calculate velocity
    double velocity = calculateVelocity(G, Mcentral, R);

    // Create a data file to store the coordinates
    ofstream dataFile("velocity_data.txt");
    if (dataFile.is_open()) {
        // Write the coordinates (R, velocity) to the file
        dataFile << R << " " << velocity << endl;
        dataFile.close();
    } else {
        cerr << "Error creating the data file!" << endl;
        return 1;
    }

    //  GNUplot script
    ofstream scriptFile("velocity_plot.gnu");
    if (scriptFile.is_open()) {
        scriptFile << "set xlabel 'Distance (m)'\n";
        scriptFile << "set ylabel 'Velocity (m/s)'\n";
        scriptFile << "plot 'velocity_data.txt' with lines\n";
        scriptFile << "pause -1\n";  // Pause to keep the graph displayed
        scriptFile.close();
    } else {
        cerr << "Error creating the GNUplot script file!" << endl;
        return 1;
    }

    // Execute the GNUplot script
    string command = "gnuplot velocity_plot.gnu";
    system(command.c_str());

    return 0;
}

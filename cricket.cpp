#include <iostream>
#include <string>

using namespace std;

// Define the cricket structure
struct cricket {
    string playerName;
    string teamName;
    float battingAverage;
};

int main() {
    cricket player[10];
    for (int i = 0; i < 10; i++) {
        cout << "Enter details for player " << i + 1 << ":" << endl;
        cout << "Player Name: ";
        cin >> player[i].playerName;
        cout << "Team Name: ";
        cin >> player[i].teamName;
        cout << "Batting Average: ";
        cin >> player[i].battingAverage;
    }

    // Print team-wise list
    cout << "\nTeam-wise list of players with their batting averages:" << endl;

    // Create an array to store team names
    string teams[10];
    int numTeams = 0;

    // Find unique team names
    for (int i = 0; i < 10; i++) {
        bool isUnique = true;
        for (int j = 0; j < numTeams; j++) {
            if (player[i].teamName == teams[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            teams[numTeams] = player[i].teamName;
            numTeams++;
        }
    }

    // Print players by team
    for (int i = 0; i < numTeams; i++) {
        cout << teams[i] << ":" << endl;
        for (int j = 0; j < 10; j++) {
            if (player[j].teamName == teams[i]) {
                cout << player[j].playerName << " - Batting Average: " << player[j].battingAverage << endl;
            }
        }
    }

    return 0;
}

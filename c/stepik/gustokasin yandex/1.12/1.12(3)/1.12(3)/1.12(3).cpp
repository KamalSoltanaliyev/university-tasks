#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Participant {
    int id;
    int score;

    bool operator<(const Participant& other) const {
        if (score != other.score)
            return score > other.score;
        return id < other.id;
    }
};

int main() {
    int n;
    cin >> n;
    vector<Participant> participants(n);

    for (int i = 0; i < n; i++) {
        cin >> participants[i].id >> participants[i].score;
    }

    sort(participants.begin(), participants.end());

    for (const auto& participant : participants) {
        cout << participant.id << " " << participant.score << endl;
    }

    return 0;
}

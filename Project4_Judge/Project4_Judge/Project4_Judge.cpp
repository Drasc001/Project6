#include <iostream>
using namespace std;

// Get a judge's score (with input validation)
double getJudgeScore(int judgeNumber) {
    double score;
    do {
        cout << "Enter score from judge " << judgeNumber << " (0-10): ";
        cin >> score;
        if (score < 0 || score > 10) {
            cout << "Invalid score. Try again.\n";
        }
    } while (score < 0 || score > 10);
    return score;
}

// Find the lowest of 5 scores
double findLowest(double s1, double s2, double s3, double s4, double s5) {
    double lowest = s1;
    if (s2 < lowest) lowest = s2;
    if (s3 < lowest) lowest = s3;
    if (s4 < lowest) lowest = s4;
    if (s5 < lowest) lowest = s5;
    return lowest;
}

// Find the highest of 5 scores
double findHighest(double s1, double s2, double s3, double s4, double s5) {
    double highest = s1;
    if (s2 > highest) highest = s2;
    if (s3 > highest) highest = s3;
    if (s4 > highest) highest = s4;
    if (s5 > highest) highest = s5;
    return highest;
}

// Calculate average after dropping highest and lowest
double calcAverage(double s1, double s2, double s3, double s4, double s5) {
    double lowest = findLowest(s1, s2, s3, s4, s5);
    double highest = findHighest(s1, s2, s3, s4, s5);
    double total = s1 + s2 + s3 + s4 + s5;
    return (total - lowest - highest) / 3.0;
}

int main() {
    cout << "Talent Competition Score Calculator\n";

    double score1 = getJudgeScore(1);
    double score2 = getJudgeScore(2);
    double score3 = getJudgeScore(3);
    double score4 = getJudgeScore(4);
    double score5 = getJudgeScore(5);

    double finalScore = calcAverage(score1, score2, score3, score4, score5);

    cout << "Final score (after dropping highest and lowest): " << finalScore << endl;

    return 0;
}

#include <iostream>

char gradeFromScore(int score) {
    if (score >= 90 && score <= 100)     
    return 'A';
    else if (score >= 80 && score < 90)   
    return 'B';
    else if (score >= 70 && score < 80)  
    return 'C';
    else if (score >= 60 && score < 70)  
    return 'D';
    else                                 
    return 'E';   
}

int main() {
    int score;
    std::cout << "Enter score (0–100): ";
    std::cin >> score;

    if (score < 0 || score > 100) {
        std::cerr << "Invalid score.\n";
        return 1;
    }

    std::cout << "Grade: " << gradeFromScore(score) << '\n';
    return 0;
}

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

// Read whitespace-separated scores until end of input.
int main() {
    std::string token;
    int count = 0;
    double sum = 0;
    double minimum = 100, maximum = 0;
    int passed = 0;
    while (std::cin >> token) {
        std::istringstream input(token);
        double score;
        char extra;
        if (!(input >> score) || (input >> extra) || !(score >= 0 && score <= 100)) {
            std::cerr << "Error: each score must be a number from 0 to 100.\n";
            return 1;
        }
        ++count;
        sum += score;
        if (score < minimum) minimum = score;
        if (score > maximum) maximum = score;
        if (score >= 60) ++passed;
    }
    if (count == 0) {
        std::cerr << "Error: enter at least one score.\n";
        return 1;
    }
    std::cout << "Count: " << count << '\n'
              << std::fixed << std::setprecision(2)
              << "Average: " << sum / count << '\n'
              << "Minimum: " << minimum << '\n'
              << "Maximum: " << maximum << '\n'
              << "Pass rate: " << 100.0 * passed / count << "%\n";
    return 0;
}

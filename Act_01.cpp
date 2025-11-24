#include <iostream>
#include <string>
#include <vector>
#include <limits>

class node {
    private:
        int x;
        int y;

    public:
        node(int x_val, int y_val) : x(x_val), y(y_val) {}
        int getX() const { return x; }
        int getY() const { return y; }
};

int main() {
    int n;
    // std::cout << "Enter number of nodes (n): ";
    if (!(std::cin >> n)) {
        std::cerr << "Invalid number\n";
        return 1;
    }

    if (n < 0) {
        std::cerr << "n must be non-negative\n";
        return 1;
    }

    std::vector<node> nodes;
    nodes.reserve(n);

    // std::cout << "Enter " << n << " lines, each with two integers (x y):\n";
    for (int i = 0; i < n; ++i) {
        int x, y;
        if (!(std::cin >> x >> y)) {
            std::cerr << "Error reading pair on line " << (i+1) << "\n";
            return 1;
        }
        nodes.emplace_back(x, y); //Goated
    }

    std::cout << "Read " << nodes.size() << " nodes:\n";
    for (size_t i = 0; i < nodes.size(); ++i) {
        std::cout << (i+1) << ": (" << nodes[i].getX() << ", " << nodes[i].getY() << ")\n";
    }

    return 0;
}
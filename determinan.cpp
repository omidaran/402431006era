#include <iostream>
#include <vector>

// Function to calculate the determinant of a square matrix
int determinant(std::vector<std::vector<int>> matrix) {
    int n = matrix.size();
    int det = 0;

    if (n == 1) {
        return matrix[0][0];
    } else if (n == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    } else {
        for (int i = 0; i < n; i++) {
            std::vector<std::vector<int>> submatrix;
            for (int j = 1; j < n; j++) {
                std::vector<int> row;
                for (int k = 0; k < n; k++) {
                    if (k != i) {
                        row.push_back(matrix[j][k]);
                    }
                }
                if (!row.empty()) {
                    submatrix.push_back(row);
                }
            }
            int sign = (i % 2 == 0) ? 1 : -1;
            det += sign * matrix[0][i] * determinant(submatrix);
        }
    }
    return det;
}

int main() {
    int n;
    std::cout << "Enter the size of the square matrix: ";
    std::cin >> n;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));
    std::cout << "Enter the elements of the square matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> matrix[i][j];
        }
    }

    int det = determinant(matrix);
    std::cout << "Determinant of the matrix is: " << det << std::endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <cstdlib>

int main(int argc, char* argv[]) {
    int N, M;
    std::cin >> N;
    std::cin >> M;

    std::vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }

    std::vector<int> queries(M);
    for (int i = 0; i < M; i++) {
        std::cin >> queries[i];
    }

    int cost = 0;
    for (int i = 0; i < M; i++) {
        int temp_q = queries[i];

        for (int j = 0; j < N; j++) {
            int temp = arr[j] - temp_q;
            if (temp < 0) {
                temp = std::abs(temp);
            }

            cost = cost + temp;
        }

        std::cout << cost << " ";
        cost = 0;
    }

    return 0;
}

#include <iostream>
#include <queue>
#include <vector>

int main() {
    int n, k;
    std::cin >> n >> k;
    std::queue<int> mainQ;
    std::vector<int> result;

    for(int i = 0; i < n; i++) {
        mainQ.push(i + 1);
    }

    int count = 0;
    while(!mainQ.empty()) {
        count++;
        if(count % k == 0) {
            result.push_back(mainQ.front());
        } else {
            mainQ.push(mainQ.front());
        }
        mainQ.pop();
    }

    printf("<%d", result[0]);
    for(size_t i = 1; i < result.size(); i++) {
        printf(", %d", result[i]);
    }
    printf(">");
}
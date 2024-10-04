#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int getHighestNumber(vector<int>& highestNum) {
    int max = highestNum[0];
    for (int num : highestNum) {
        if (num > max) {
            max = num;
        }
    }
    return max;
}

pair<int, int>occurenceHighNum (vector<int>& highOcc) {
    int max{};
    int occure{};

    for (int num : highOcc ) {

        if (num > max) {
            max = num;
            occure = 1;
        }
        else if (num == max) {
            occure++;
        }
    }

    return make_pair(max, occure);
}


int main(){
    vector<int>highestNum{ 55, 66, 5, 43, 67, 99, 23, 12 };

    cout << "Highest: " << getHighestNumber(highestNum) << endl;

    vector<int>highOcc{ 99, 2 ,5 ,7 ,8, 99, 6, 5, 1 ,99, 99 };
    pair<int, int>result = occurenceHighNum(highOcc);

    cout << "Highest: " << result.first << " Occurence: " << result.second << endl;

    return 0;
}
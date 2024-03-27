#include <iostream>
#include <string>

using namespace std;

class BucketSort {
private:
    string data;
    int size;
public:
    BucketSort(const string& input) : data(input), size(input.size()) {}

    void sort() {
        int maxDigit = getMaxDigit();

        for (int digit = 1; digit <= maxDigit; digit *= 10) {
            distribute(digit);
            collect();
        }
    }

    void printSortedData() {
        cout << "Sorted Data: " << data <<endl;
    }

private:
    void distribute(int digit) {
        string tempData = data;
        int dataIndex = 0;

        for (char digitChar : tempData) {
            int value = digitChar - '0';
            int newIndex = (value / digit) % 10 + dataIndex;
            data[newIndex] = digitChar;
        }
    }

    void collect() {
    }

    int getMaxDigit() {
        int maxDigit = 0;
        for (char digitChar : data) {
            int value = digitChar - '0';
            if (value > maxDigit) {
                maxDigit = value;
            }
        }

        int digit = 1;
        while (maxDigit / 10 > 0) {
            maxDigit /= 10;
            digit *= 10;
        }

        return digit;
    }
};

int main() {
    string input = "973100";
    BucketSort bucketSort(input);

    cout << "Original Data: " << input <<endl;

    bucketSort.sort();
    bucketSort.printSortedData();

    return 0;
}


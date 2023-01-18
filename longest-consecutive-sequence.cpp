#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>

using namespace std;

int longestConsecutive(vector<int>& nums) {
  int sequenceLength = 0;
  int longestSequenceLength = 0;
  int prevNumber;

  set<int, greater<int> > s;
  set<int, greater<int> >::iterator itr;

  // insert nums in to set s
  for (int num : nums)
    s.insert(num);

  // iterating through s to see if there is a sequence
  for (itr = s.begin(); itr != s.end(); itr++) {
    // cout << *itr << "-";
    if (itr == s.begin()) {
      sequenceLength = 1;
      longestSequenceLength = 1;

    }
    else {
      if ((prevNumber - *itr) == 1) {
        sequenceLength++;
      } else {
        if (sequenceLength > longestSequenceLength)
          longestSequenceLength = sequenceLength;
        sequenceLength = 1;
      }
    }

    prevNumber = *itr;

    // cout << "sl-" << sequenceLength << " ";

  }

  // cout << "\n";

  if (sequenceLength > longestSequenceLength)
    longestSequenceLength = sequenceLength;

  return longestSequenceLength;
}

int main(int argc, char const *argv[]) {
  vector<int> nums = {9, 1, 4, 7, 3, -1, 0, 5, 8, -1, 6};

  cout << longestConsecutive(nums) << "\n";
  return 0;
}

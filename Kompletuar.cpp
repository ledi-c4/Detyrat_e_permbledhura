#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

// Function 1
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;

        for (int i = 0; i < accounts.size(); i++) {
            int current = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                current += accounts[i][j];
            }
            if (current > max) {
                max = current;
            }
        }

        return max;
    }
};

// Function 2
class Solution2 {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[i].size(); j++) {
                if (words[i][j] == x) {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};

// Function 3
class Solution3 {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> x;
        for (int i = 0; i < n; i++) {
            x.push_back(nums[i]);
            x.push_back(nums[i + n]);
        }
        return x;
    }
};

// Function 4
class Solution4 {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "X++" || operations[i] == "++X") {
                x++;
            } else if (operations[i] == "X--" || operations[i] == "--X") {
                x--;
            }
        }

        return x;
    }
};

// Function 5
class Solution5 {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};

// Function 6
class Solution6 {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int m = 2 * n;
        vector<int> ans(m);

        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];
            ans[i + n] = nums[i];
        }
        return ans;
    }
};

// Function 7
class Solution7 {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        for (int i = 0; i < n; i++) {
            sum += mat[i][i];
            sum += mat[i][n - 1 - i];
        }
        if (n % 2 == 1) {
            sum -= mat[n / 2][n / 2];
        }
        return sum;
    }
};

// Function 8
class Solution8 {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxCount = 0;
        int maxRow = 0;
        for (int i = 0; i < mat.size(); i++) {
            int count = 0;
            for (int j = 0; j < mat[0].size(); j++) {
                count += mat[i][j];
            }
            if (count > maxCount) {
                maxCount = count;
                maxRow = i;
            }
        }
        return {maxRow, maxCount};
    }
};

// Function 9
class Solution9 {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size();

        for (int i = 0; i < n; i++) {
            bool win = true;
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    continue;
                }
                if (grid[i][j] != 1) {
                    win = false;
                }
            }
            if (win) return i;
        }
        return n - 1;
    }
};

// Function 10
class Solution10 {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> result(col, vector<int>(row, 0));

        for (int i = 0; i < col; ++i) {
            for (int j = 0; j < row; ++j) {
                result[i][j] = matrix[j][i];
            }
        }

        return result;
    }
};

// Function 11
class Solution11 {
public:
    string defangIPaddr(string address) {
        string res;
        for (int i = 0; i < address.length(); i++) {
            if (address[i] == '.') {
                res += "[.]";
            } else {
                res += address[i];
            }
        }
        return res;
    }
};

// Function 12
class Solution12 {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "X++" || operations[i] == "++X") {
                x++;
            } else if (operations[i] == "X--" || operations[i] == "--X") {
                x--;
            }
        }

        return x;
    }
};

// Function 13
class Solution13 {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for (int i = 0; i < jewels.length(); i++) {
            for (int j = 0; j < stones.length(); j++) {
                if (jewels[i] == stones[j]) count++;
            }
        }
        return count;
    }
};

// Function 14
class Solution14 {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[i].size(); j++) {
                if (words[i][j] == x) {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};

// Function 15
class Solution15 {
public:
    string interpret(string command) {
        string answer;
        for (int i = 0; i < command.size(); i++) {
            if (command[i] == 'G')
                answer.push_back('G');
            else if (command[i] == '(') {
                if (command[i + 1] == ')') {
                    answer.push_back('o');
                } else {
                    answer.push_back('a');
                    answer.push_back('l');
                }
            }
        }
        return answer;
    }
};

// Function 16
class Solution16 {
public:
    string restoreString(string s, vector<int>& indices) {
        string str = s;
        for (int i = 0; i < s.size(); i++) {
            str[indices[i]] = s[i];
        }
        return str;
    }
};

// Function 17
class Solution17 {
public:
    vector<double> convertTemperature(double celsius) {
        return {(celsius + 273.15), (celsius * 1.80 + 32.00)};
    }
};

// Function 18
class Solution18 {
public:
    int smallestEvenMultiple(int n) {
        if (n % 2 == 0) {
            return n;
        } else {
            return 2 * n;
        }
    }
};

// Function 19
class Solution19 {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};

// Function 20
class Solution20 {
public:
    int subtractProductAndSum(int n) {
        int p = 1, s = 0, t;
        while (n) {
            t = n % 10;
            p *= t;
            s += t;
            n /= 10;
        }
        return p - s;
    }
};

int main() {
    int choice;
    cout << "Choose a function to execute (1-20): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            Solution solution;
    vector<vector<int>> accounts;

    int numCustomers, numBanks;
    cout<<"function for maximumWealth \n";

    cout << "Enter the number of customers: ";
    cin >> numCustomers;

    cout << "Enter the number of banks: ";
    cin >> numBanks;

      for (int i = 0; i < numCustomers; ++i) {
        vector<int> customerAccounts;
        cout << "Customer " << (i + 1) << ":\n";
        for (int j = 0; j < numBanks; ++j) {
            int balance;
            cout << "Enter balance for Bank " << (j + 1) << " for Customer " << (i + 1) << ": ";
            cin >> balance;
            customerAccounts.push_back(balance);
        }
         accounts.push_back(customerAccounts);
         }
         int maxWealth = solution.maximumWealth(accounts);
         cout << "Maximum Wealth: " << maxWealth << endl;
         break;
    }

        case 2: {
   Solution2 solution2;
   vector<string> words;
   char x;
    int numWords;
    cout<<"function for find Words Containing 'x' \n";
    cout << "Enter the number of words: ";
    cin >> numWords;
    for (int i = 0; i < numWords; ++i) {
        string word;
        cout << "Enter word " << (i + 1) << ": ";
        cin >> word;
        words.push_back(word);
    }

    cout << "Enter the character to search for: ";
    cin >> x;

    vector<int> wordsContainingX = solution2.findWordsContaining(words, x);
    cout << "Indices of words containing '" << x << "': ";
    for (int idx : wordsContainingX) {
        cout << idx << " ";
    }
    cout << endl;
    break;
        }
      
    case 3: {
   Solution3 solution3;
    vector<int> nums;
    int n;
   cout<<"function for  Shuffle Array 'x' \n";
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter " << n << " elements for the array: ";
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    vector<int> shuffled = solution3.shuffle(nums, n);
    cout << "Shuffled Array: ";
    for (int num : shuffled) {
        cout << num << " ";
    }
    cout << endl;
    break;
    }
   
    case 4: {
   Solution4 solution4;
    vector<string> operations;
    int numOperations;
    cout<<"function for  final Value After Operations 'x' \n";
    cout << "Enter the number of operations: ";
    cin >> numOperations;
    cout << "Enter " << numOperations << " operations ('X++', '++X', 'X--', '--X'): ";
    for (int i = 0; i < numOperations; ++i) {
        string operation;
        cin >> operation;
        operations.push_back(operation);
    }
    int finalValue = solution4.finalValueAfterOperations(operations);
    cout << "Final Value after Operations: " << finalValue << endl;
    break;
    }

    case 5: {
   Solution5 solution5;
    vector<int> nums;
    int size;

    cout<<"function for  build Array  \n";
    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter " << size << " numbers for the array: ";
    for (int i = 0; i < size; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    // Build the array
    vector<int> builtArray = solution5.buildArray(nums);
    cout << "Built Array: ";
    for (int num : builtArray) {
        cout << num << " ";
    }
    cout << endl;
    break;
    }

    case 6: {
       Solution6 solution6;
    vector<int> nums;
    int size;
    
   cout<<"function for get Concatenation  \n";
    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter " << size << " numbers for the array: ";
    for (int i = 0; i < size; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    vector<int> concatenated = solution6.getConcatenation(nums);
    cout << "Concatenated Array: ";
    for (int num : concatenated) {
        cout << num << " ";
    }
    cout << endl;
    break;
    }

    case 7: {
   Solution7 solution7;
    vector<vector<int>> mat;
    int size;
   cout << "function diagonal Sum\n";
    cout << "Enter the size of the matrix: ";
    cin >> size;

    cout << "Enter " << size << " rows with " << size << " columns each for the matrix:" << endl;
    for (int i = 0; i < size; ++i) {
        vector<int> row;
        cout << "Enter row " << (i + 1) << " elements: ";
        for (int j = 0; j < size; ++j) {
            int num;
            cin >> num;
            row.push_back(num);
        }
        mat.push_back(row);
    }

    // Calculate diagonal sum
    int diagonalSum = solution7.diagonalSum(mat);
    cout << "Diagonal Sum: " << diagonalSum << endl;
    break;
    }

    case 8: {
   Solution8 solution8;
    vector<vector<int>> mat;
    int rows, cols;
    cout << "function rowAndMaximumOnes\n";

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    cout << "Enter 0s and 1s for the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        vector<int> row;
        cout << "Enter row " << (i + 1) << " elements (0s and 1s): ";
        for (int j = 0; j < cols; ++j) {
            int num;
            cin >> num;
            row.push_back(num);
        }
        mat.push_back(row);
    }
    vector<int> result = solution8.rowAndMaximumOnes(mat);
    cout << "Row with Maximum Ones: " << result[0] << ", Maximum Ones Count: " << result[1] << endl;
    break;
    }

    case 9: {
       Solution9 solution9;
    vector<vector<int>> grid;
    int gridSize;
    cout << "function find Champion\n";
    cout << "Enter the size of the grid: ";
    cin >> gridSize;

    cout << "Enter 1 for win and 0 for loss for each player (row-wise):" << endl;
    for (int i = 0; i < gridSize; ++i) {
        vector<int> row;
        cout << "Enter results for player " << (i + 1) << ": ";
        for (int j = 0; j < gridSize; ++j) {
            int result;
            cin >> result;
            row.push_back(result);
        }
        grid.push_back(row);
    }

    int championIndex = solution9.findChampion(grid);
    cout << "Champion Index: " << championIndex << endl;
    break;
    }

    case 10: {
      Solution10 solution10;
    vector<vector<int>> matrix;
    int rows, cols;
   cout << "function Transposed Matrix\n";
    cout << "Enter the number of rows for the matrix: ";
    cin >> rows;
    cout << "Enter the number of columns for the matrix: ";
    cin >> cols;

    cout << "Enter the matrix elements row-wise:" << endl;
    for (int i = 0; i < rows; ++i) {
        vector<int> row;
        cout << "Enter elements for row " << (i + 1) << ": ";
        for (int j = 0; j < cols; ++j) {
            int element;
            cin >> element;
            row.push_back(element);
        }
        matrix.push_back(row);
    }

    vector<vector<int>> transposed = solution10.transpose(matrix);
    cout << "Transposed Matrix: " << endl;
    for (auto row : transposed) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
    break;
    }

    case 11: {
         Solution11 solution11;
    string ipAddress;
   cout<< "function for Transposed Matrix \n";
    cout << "Enter the IP Address: ";
    cin >> ipAddress;

    string defangedIP = solution11.defangIPaddr(ipAddress);
    cout << "Transposed Matrix: " << defangedIP << endl;
    break;
    }

    case 12: {
   Solution12 solution12;
    vector<string> operations;
   cout<< "function for x final Value After Operations\n";
    int numOperations;
    cout << "Enter the number of operations: ";
    cin >> numOperations;

    cout << "Enter operations (X++ or ++X or X-- or --X): ";
    for (int i = 0; i < numOperations; ++i) {
        string op;
        cin >> op;
        operations.push_back(op);
    }

    int finalVal = solution12.finalValueAfterOperations(operations);
    cout << "Final Value after Operations: " << finalVal << endl;
    break;
    }

    case 13: {
   Solution13 solution13;
    string jewels, stones;
    cout<<"function for jewels and stones \n";
    cout << "Enter the jewels string: ";
    cin >> jewels;
    cout << "Enter the stones string: ";
    cin >> stones;

    int jewelCount = solution13.numJewelsInStones(jewels, stones);
    cout << "Number of Jewels in Stones: " << jewelCount << endl;
    break;
    }

    case 14: {
   Solution14 solution14;
    int wordCount;
    char x;
   cout<<"function find Words Containing  \n";
    cout << "Enter the number of words: ";
    cin >> wordCount;
    
    vector<string> words(wordCount);
    cout << "Enter " << wordCount << " words: ";
    for (int i = 0; i < wordCount; ++i) {
        cin >> words[i];
    }

    cout << "Enter the character to find: ";
    cin >> x;

    vector<int> wordsContainingX = solution14.findWordsContaining(words, x);
    cout << "Indices of words containing '" << x << "': ";
    for (int idx : wordsContainingX) {
        cout << idx << " ";
    }
    cout << endl;
    break;
    }

    case 15: {
   Solution15 solution15;
    string command;
   cout<<"function  goal \n";
    cout << "Enter the command string: ";
    cin >> command;

    string interpretation = solution15.interpret(command);
    cout << "Interpreted Command: " << interpretation << endl;
    break;
    }

    case 16: {
   Solution16 solution16;
    string s;
    vector<int> indices;
   cout<<"function  restore String \n";
    cout << "Enter the string (s): ";
    cin >> s;

    cout << "Enter indices (space-separated): ";
    int index;
    while (cin >> index) {
        indices.push_back(index);
        if (cin.get() == '\n') {
            break;
        }
    }

    string restored = solution16.restoreString(s, indices);
    cout << "Restored String: " << restored << endl;
    break;
    }

    case 17: {
   Solution17 solution17;
    double celsius;
   cout<<"function  for  convert Temperature \n";
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    vector<double> converted = solution17.convertTemperature(celsius);
    cout << "Equivalent in Kelvin: " << converted[0] << ", Equivalent in Fahrenheit: " << converted[1] << endl;
    break;
    }

    case 18: {
   Solution18 solution18;
    int num;
   cout<<"function  for smallest Even Multiple \n";
    cout << "Enter a number: ";
    cin >> num;

    int smallestEvenMultiple = solution18.smallestEvenMultiple(num);
    cout << "Smallest Even Multiple: " << smallestEvenMultiple << endl;
    break;
    }

    case 19: {
   Solution19 solution19;
    int num1, num2;
   cout<<"function for two numbers";
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int sumResult = solution19.sum(num1, num2);
    cout << "Sum: " << sumResult << endl;
    break;
    }

    case 20: {
   Solution20 solution20;
    int n;
   cout << "function for subtract Product And Sum \n ";
    cout << "Enter a number: ";
    cin >> n;

    int difference = solution20.subtractProductAndSum(n);
    cout << "Difference between Product and Sum: " << difference << endl;
    break;

    }

    default:
        cout << "Invalid choice!\n";
        break;
}

    return 0;
}
// #include <iostream>
// #include <cstring>
// using namespace std;

// #define SIZE 100

// int Power(int base, int exponent)
// {
//     int result = 1;
//     while (exponent != 0) {
//         if (exponent & 1)
//             result *= base;

//         base *= base;
//         exponent >>= 1;
//     }
    
//     return result;
// }

// int Subsequence(char str[], char **output)
// {
//     if (str[0] == '\0') {
//         char *subseq = new char[1];
//         subseq[0] = '\0';
//         output[0] = subseq;

//         return 1;
//     }

//     int count = Subsequence(str + 1, output);
//     for (int i = count; i < 2 * count; i++) {
//         // char *subseq = new char[2 + strlen(output[i - count])];
//         char *subseq = new char[100];
//         subseq[0] = str[0];

//         output[i] = strcat(subseq, output[i - count]);
//         output[i][1 + strlen(output[i - count])] = '\0';
//         cout << output[i] << endl;
//     }
    
//     return 2 * count;
// }

// int main()
// {
//     char str[SIZE + 1];
//     cin >> str;

//     int length = strlen(str);
//     int size = Power(2, length);
//     char **output = new char*[size];

//     Subsequence(str, output);
//     // for (int i = 0; i < size; i++)
//     //     cout << output[i] << endl;
    
//     for (int i = 0; i < size; i++)
//         delete [] output[i];
    
//     delete [] output;
    
//     return 0;
// }
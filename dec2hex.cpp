#include <string>
#include <vector>
#include <stdio.h>
#include <algorithm>
using std::string, std::vector, std::to_string, std::reverse, std::stoi;

string dec2hex(int decimal) {
    string hexstr;
    vector<int> deps;
    while(true) {
        if (decimal > 15) {
            int hex16 = decimal % 16;
            deps.push_back(hex16);
            decimal = decimal / 16;
        } else {
            deps.push_back(decimal);
            break;
        }
    }
    const unsigned int vsize = (deps.size() - 1);
    std::reverse(deps.begin(), deps.end());
    for (unsigned int k = 0; k <= vsize; k++) {
        if (deps[k]==10) {
            hexstr += 'A';
        } else if (deps[k]==11) {
            hexstr += 'B';
        } else if (deps[k]==12) {
            hexstr += 'C';
        } else if (deps[k]==13) {
            hexstr += 'D';
        } else if (deps[k]==14) {
            hexstr += 'E';
        } else if (deps[k]==15) {
            hexstr += 'F';
        } else {
            hexstr += to_string(deps[k]);
        }
    }
    return hexstr;
}

int main(int argc, char** argv) {
    if (argc==1) {
        printf("Usage: dec2hex (num1) (num2)...\n");
    } else {
        string out;
        string num;
        for (unsigned int k=1; k < argc; k++) {
            num = argv[k];
            int dec = stoi(num);
            out = dec2hex(dec);
            printf("%s ", out.c_str());
        }
        printf("\n");
    }
}

#include <iostream>
#include "snowman.hpp"
#include <string>
using namespace std;
namespace ariel {
    int isCorrect(int n){
        int check = n;
        int x = 0;
        if(n > maxi || n < mini ){return 0;}
        for (int i = 0; i < dig; i++){x = check%dev;
        if(x<1||x>4){return 0;} check = check/dev;}return 1;}
    string snowman(int n) {
        string lu = " ";
        string ru = " \n";
        string snowman;
        int check = n;
        if(isCorrect(n)==0){throw out_of_range("Invaild Input");}
        int b = check%dev;
        string B;
        check = check/dev;
        switch (b){
        case 1:
            B = " ( : ) ";
            break;
        case 2:
            B = " (\" \") "; 
            break;
        case 3:
            B = " (___) ";
            break;
        case 4:
            B = " (   ) ";
            break;
        }
        int t = check%dev;
        string T;
        check = check/dev;
        switch (t){
        case 1:
            T = "( : )";
            break;
        case 2:
            T = "(] [)";
            break;
        case 3:
            T = "(> <)";
            break;
        case 4:
            T = "(   )";
            break;
        }
        int y = check%dev;
        string Y;
        check = check/dev;
        switch (y){
        case 1:
            Y = ">\n";
            break;
        case 2:
            Y = " \n";
            break;
        case 3:
            Y = "\\\n";
            break;
        case 4:
            Y = " \n";
            break;
        }
        int x = check%dev;
        string X;
        check = check/dev;
        switch (x){
        case 1:
            X = "<";
            break;
        case 2:
            X = " ";
            break;
        case 3:
            X = "/";
            break;
        case 4:
            X = " ";
            break;
        }
        int r = check%dev;
        string R;
        check = check/dev;
        switch (r){
        case 1:
            R = ".)";
            break;
        case 2:
            R = "o)";
            break;
        case 3:
            R = "O)";
            break;
        case 4:
            R = "-)";
            break;
        }
        int l = check%dev;
        string L;
        check = check/dev;
        switch (l)
        {
        case 1:
            L = "(.";
            break;
        case 2:
            L = "(o";
            break;
        case 3:
            L = "(O";
            break;
        case 4:
            L = "(-";
            break;
        }
        int no = check%dev;
        string N;
        check = check/dev;
        switch (no)
        {
        case 1:
            N = ",";
            break;
        case 2:
            N = ".";
            break;
        case 3:
            N = "_";
            break;
        case 4:
            N = " ";
            break;
        }
        int h = check%dev;
        string H;
        switch (h)
        {
        case 1:
            H = "       \n _===_ \n";
            break;
        case 2:
            H = "  ___  \n ..... \n";
            break;
        case 3:
            H = "   _   \n  /_\\  \n";
            break;
        case 4:
            H = "  ___  \n (_*_) \n";
            break;    
        }
        if(y==2){ru = "/\n";}
        if(x==2){lu = "\\";}
        snowman = H +
                  lu + L + N + R + ru +
                  X + T + Y + 
                  B;

        return snowman;
    }
}
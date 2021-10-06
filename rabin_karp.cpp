#include<iostream>
using namespace std;
#include<math.h>
void find(string txt, string pat)
{
    int t = txt.size();
    int p = pat.size();
    int prime = 5381;
    int p_h = 0;
    for(int i = 0; i<p; i++)
    {
        int c = (pat[i]-'A'+1);
        p_h = (p_h + (c*(2)));

    }
}
int main()
{
    string txt = "aaabakjaba";
    string pat = "aba";
    int c = pow(2,3);
    cout << c;

}
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{

    string s;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int first_braket = 0;
        int first_braket_Colose = 0;
        int second_braket = 0;
        int second_braket_Colose = 0;
        int third_braket = 0;
        int third_braket_colose = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                first_braket++;
            }
            else if (s[i] == ')')
            {
                first_braket_Colose++;
                
            }
            else if (s[i] == '{')
            {
                second_braket++;
            }
            else if (s[i] == '}')
            {
                second_braket_Colose++;
            }
            else if (s[i] == '[')
            {
                third_braket++;
            }
            else if (s[i] == ']')
            {
                third_braket_colose++;
            }

         
        }
           int first;
            int second, third;
            if (first_braket < first_braket_Colose)
            {
                first = first_braket;
                first=first+first;
              
            }
            else
            {
                first = first_braket_Colose;
                first=first+first;
            }
            //  cout<<first<<" ";  


            if (second_braket < second_braket_Colose)
            {
                second = second_braket;
                second=second+second;
            }
            else
            {
                second = second_braket_Colose;
                second=second+second;
            }



              if (third_braket < third_braket_colose )
            {
                third = third_braket;
                third=third+third;
            }
            else
            {
                third = third_braket_colose ;
                third=third+third;
            }

            cout<<first+second+third<<endl;
    }

    return 0;
}

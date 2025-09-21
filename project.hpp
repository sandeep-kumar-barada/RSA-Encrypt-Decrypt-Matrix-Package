#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
// swap function
void swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
// gcd function
int gcd(int a, int b)
{
    if (a > b)
    {
        swap(a, b);
    }
    while (a != 0)
    {
        int k = b % a;
        b = a;
        a = k;
    }
    return b;
}
// class for Avenger
class Avenger
{
private:
    vector<int> piv_vec;
    long long int piv_key;

public:
    int n = 67 * 47;
    int phi_n = 66 * 46;
    bool exit = false;
    long long int pub_key;
    vector<int> pub_vec;
    void get_pub_vec()
    {
        for (int i = 0; i < phi_n; i++)
        {
            if (gcd(i, phi_n) == 1)
                pub_vec.emplace_back(i);
        }
    }
    void get_num_pub_key()
    {
        int k;
        cout << " Enter the value : ";
        cin >> k;
        pub_key = pub_vec.at(k);
    }
    void Get_piv_vec()
    {

        for (int i = 0; i < pub_vec.size(); i++)
        {
            if (gcd(i * pub_key, phi_n) == 1)
            {
                piv_vec.emplace_back(i);
            }
        }
        piv_key = piv_vec.at(117);
    }
    long long int enryp_code(int s)
    {

        return fmod(pow(s, fmod(piv_key, phi_n)), n);
    }
    long long int decryp_code(int s)
    {
        cout << " Provide avenger's pub key : ";
        int r;
        cin >> r;
        exit = true;
        return fmod(pow(s, r), n);
    }
    // for creating a matrix of d for different values of e
    // for(int i=0;i<pub_vec;i++){
    //     for (int j = 0; j < pub_vec;j++)
    //     {
    //         if(gcd(pub_vec.at(i)*j,phi_n)==1)
    //         {
    //             piv_vec.emplaceby(j);
    //         }
    //     }
    //  }
};
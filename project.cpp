#include <iostream>
#include "project.hpp"
using namespace std;
int main()
{
    Avenger sandeep;
    Avenger sushil;
    sandeep.get_pub_vec();
    sushil.get_pub_vec();
    sandeep.get_num_pub_key();
    sushil.get_num_pub_key();
    sandeep.Get_piv_vec();
    cout << " ";
    sushil.Get_piv_vec();
    cout << endl;
    cout << sandeep.pub_key << " " << sushil.pub_key << endl;
    long long int r = sandeep.enryp_code(12);
    long long int y = sushil.enryp_code(17);
    cout << r << endl;
    cout << sushil.decryp_code(r);
    cout << sandeep.pub_vec.size();
}
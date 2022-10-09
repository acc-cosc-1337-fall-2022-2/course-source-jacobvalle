//add include statements
#include<string>
#include<iostream>
#include"func.h"

using std::string;

//add function code here
double get_gc_content(const string& dna)
{
    double str_total = dna.size();
    double gc_total = 0;

    for(char i : dna)
    {
        if(i == 'C' || i == 'G')
        {
            gc_total++;
        
        }
    }

    double result = gc_total / str_total;

    return result;
}

string get_reverse_string(string dna)
{
    string rev_str;
    for(int i=dna.length()-1; i>=0; i--)
    {
        rev_str += dna[i];
    }
    return rev_str;
}

string get_dna_complement(string dna)
{
    string rev_str = get_reverse_string(dna);

    for(int i = 0; i < rev_str.length(); i++)
    {
        switch (rev_str[i])
        {
            case 'A':
                rev_str[i] = 'T';
                break;
            
            case 'T':
                rev_str[i] = 'A';
                break;
            
            case 'C':
                rev_str[i] = 'G';
                break;
            
            case 'G':
                rev_str[i] = 'C';
                break;
        }
    }
    return rev_str;
}
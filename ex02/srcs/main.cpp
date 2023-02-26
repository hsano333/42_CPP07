#include "Array.hpp"
#include <iostream>
using std::cout;
using std::endl;

int main(void)
{

    int sizeA = 15;
    int sizeB = 10;
    {
        Array<int> tmpA(sizeA);
        Array<int> tmpB(sizeB);
        Array<Array<int> > tmpC(sizeB);

        for (int i = 0; i < sizeA; i++)
        {
            tmpA[i] = i;
            cout << "tmpA[" << i << "]:" << tmpA[i] << endl;
        }
        cout << "tmpA.size()=" << tmpA.size() << endl << endl;;
        for (int i = 0; i < sizeB; i++)
        {
            tmpB[i] = i * 2;
            cout << "tmpB[" << i << "]:" << tmpB[i] << endl;
        }
        cout << "tmpB.size()=" << tmpB.size() << endl << endl;;
        cout << endl << "test:tmpA = tmpB" << endl;
        tmpA = tmpB;
        tmpA[0] = 100;
        tmpA[5] = 100;
        for (int i = 0; i < (int)tmpA.size(); i++)
        {
            cout << "tmpA[" << i << "]:" << tmpA[i] << endl;
        }
        cout << "tmpA.size()=" << tmpA.size() << endl << endl;;
        for (int i = 0; i < (int)tmpB.size(); i++)
        {
            tmpB[i] = i * 2;
            cout << "tmpB[" << i << "]:" << tmpB[i] << endl;
        }
        cout << "tmpB.size()=" << tmpB.size() << endl << endl;;

        try
        {
            cout << "exception test: tmpA.size()=" << tmpA.size() << ", sizeA=" << sizeA << endl;
            cout << "tmpA[sizeA] = 100" << endl;
            tmpA[sizeA] = 100;
        }
        catch (std::exception &e)
        {
            cout << "catch exception" << endl;
            cout << e.what() << endl;
        }
    }
        Array<int> tmpA(sizeA);
        Array<int> tmpB(sizeB);
        Array<Array<int> > tmpC(sizeB);
    {
        for (int i = 0; i < sizeA; i++)
        {
            cout << "tmpA[" << i << "]:" << tmpA[i] << endl;
        }
        cout << "tmpA.size()=" << tmpA.size() << endl << endl;;
        for (int i = 0; i < sizeB; i++)
        {
            cout << "tmpB[" << i << "]:" << tmpB[i] << endl;
        }

    }

    //system("leaks Array");
}

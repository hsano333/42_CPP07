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

        cout << "tmpA.size()=" << tmpA.size() << endl;
        for (int i = 0; i < sizeA; i++)
        {
            tmpA[i] = i;
            cout << "tmpA[" << i << "]:" << tmpA[i] << endl;
        }
        cout << endl << "tmpB.size()=" << tmpB.size() << endl;
        for (int i = 0; i < sizeB; i++)
        {
            tmpB[i] = i * 2;
            cout << "tmpB[" << i << "]:" << tmpB[i] << endl;
        }
        cout << endl << "test:tmpA = tmpB" << endl;
        tmpA = tmpB;
        tmpA[0] = 100;
        tmpA[5] = 100;
        cout << "tmpA.size()=" << tmpA.size() << endl;
        for (int i = 0; i < (int)tmpA.size(); i++)
        {
            cout << "tmpA[" << i << "]:" << tmpA[i] << endl;
        }
        cout << endl << "tmpB.size()=" << tmpB.size() << endl;
        for (int i = 0; i < (int)tmpB.size(); i++)
        {
            tmpB[i] = i * 2;
            cout << "tmpB[" << i << "]:" << tmpB[i] << endl;
        }

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


        cout << endl << "tmpD(tmpA)" << endl;
        Array<int > tmpD(tmpA);
        tmpD[3] = 100;
        tmpD[4] = 100;
        cout << endl << "tmpA.size()=" << tmpA.size() << endl;
        for (int i = 0; i < (int)tmpA.size(); i++)
        {
            cout << "tmpA[" << i << "]:" << tmpA[i] << endl;
        }
        cout << endl << "tmpD.size()=" << tmpA.size() << endl ;
        for (int i = 0; i < (int)tmpD.size(); i++)
        {
            cout << "tmpD[" << i << "]:" << tmpD[i] << endl;
        }

    }
    {
        Array<int> tmpA(sizeA);
        Array<int> tmpB(sizeB);
        Array<Array<int> > tmpC(sizeB);
        Array<Array<int> > tmpD(sizeB);
        cout << endl;
        cout << "tmpA.size()=" << tmpA.size() << endl ;
        for (int i = 0; i < sizeA; i++)
        {
            cout << "tmpA[" << i << "]:" << tmpA[i] << endl;
        }
        cout << "tmpB.size()=" << tmpA.size() << endl ;
        for (int i = 0; i < sizeB; i++)
        {
            cout << "tmpB[" << i << "]:" << tmpB[i] << endl;
        }
        tmpD = tmpC;
        tmpC = tmpD;

    }
    //system("leaks Array");
}

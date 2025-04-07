#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// 2.4, 1.05, 2.5, 0.38, 3.0, 1.12,
// 2.5, 0.35, 3.6, 1.20, 2.5, 0.32
int main()
{

    int n;
    cout << "Select any one:\n"
         << "1. Organic\n"
         << "2. Semi-Detached\n"
         << "3. Embedded\n"
         << endl;

    cin >> n;
    cout << endl;
    float Project_Size = 0.9 + 0.7 + 0.9 + 2;
    float eaf = 0.563821;
    float a, b, c;

    if (n == 1)
    {

        a = 2.4;
        b = 1.05;
        c = 0.38;

        cout << "Project Type-Organic\n"
             << "a = 2.4 , "
             << "b = 1.05 , "
             << "c = 0.38 " << endl;
        cout << "Project size              :    " << Project_Size << " KLOC";

        float e = 2.44 * (pow(Project_Size, 1.05));
        cout << endl
             << "Effort                    :    " << e << " PM";
        float t = 2.5 * (pow(e, 0.38));
        cout << endl
             << "Tdev                      :    " << t << " Months";
        cout << endl
             << "EAF                       :    " << eaf;
        float eafc = eaf * e;
        cout << endl
             << "Effort correcting         :    " << eafc;
        float tc = 2.5 * pow(eafc, 0.38);
        cout << endl
             << "Time correcting           :    " << tc;
        float dev = eafc / tc;
        cout << endl
             << "# of developers           :    " << dev << endl;
        ;
    }
    else if (n == 2)
    {

        a = 3.0;
        b = 1.12;
        c = 0.35;

        cout << "Project Type-Semi-Detached\n"
             << ""
             << "a = 3.0"
             << " , "
             << "b = 1.12"
             << " , "
             << "c = 0.35" << endl;
        cout << "Project size              :    " << Project_Size << " KLOC";
        float e = a * (pow(Project_Size, c));
        cout << endl
             << "Effort                    :    " << e << " PM";
        float t = 2.5 * (pow(e, c));
        cout << endl
             << "Tdev                      :    " << t << " Months";
        cout << endl
             << "EAF                       :    " << eaf;
        float eafc = eaf * e;
        cout << endl
             << "Effort correcting         :    " << eafc;
        float tc = 2.5 * pow(eafc, c);
        cout << endl
             << "Time correcting           :    " << tc;
        float dev = eafc / tc;
        cout << endl
             << "# of developers           :    " << dev << endl;
    }
    else
    {
        a = 3.6;
        b = 1.20;
        c = 0.32;

        cout << "Project Type-Embedded\n"
             << "a = 3.6"
             << " , "
             << "b = 1.20"
             << " , "
             << "c = 0.32" << endl;
        cout << "Project size              :    " << Project_Size << " KLOC";
        float e = a * (pow(Project_Size, b));
        cout << endl
             << "Effort                    :    " << e << " PM";
        float t = 2.5 * (pow(e, c));
        cout << endl
             << "Tdev                      :    " << t << " Months";
        cout << endl
             << "EAF                       :    " << eaf;
        float eafc = eaf * e;
        cout << endl
             << "Effort correcting         :    " << eafc;
        float tc = 2.5 * pow(eafc, c);
        cout << endl
             << "Time correcting           :    " << tc;
        float dev = eafc / tc;
        cout << endl
             << "# of developers           :    " << dev<<endl;
    }

    return 0;
}
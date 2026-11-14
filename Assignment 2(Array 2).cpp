 #include <iostream> 
 using namespace std;
 class matrix
 {
     int a[5][5], b[5][5], c[5][5], d[5][5], e[5][5], f[5][5];
     int p, q, i, j, k, n, m;

 public:
     void get();
     void add();
     void sub();
     void trans();
     void mul();
 };
 void matrix::get()
 {
     cout << "\nEnter Number of Row & Column :\t";
     cin >> n >> m;
     cout << "\nEnter the first Matrix:\n";
     for (i = 0; i < n; i++)
     {
         for (j = 0; j < m; j++)
             cin >> a[i][j];
     }
     cout << "\nEnter Number of Row & Column :\t";
     cin >> p >> q;
     cout << "\nEnter the Second Matrix:\n";
     for (i = 0; i < p; i++)
     {
         for (j = 0; j < q; j++)
             cin >> b[i][j];
     }
 }
 void matrix::add()
 {
     cout << "\nThe addition of two matrix is :\n";
     for (i = 0; i < n; i++)
     {
         for (j = 0; j < m; j++)
         {
             c[i][j] = a[i][j] + b[i][j];
             cout << c[i][j] << "\t";
         }
         cout << "\n";
     }
 }
 void matrix::sub()
 {
     cout << "\nThe Subtraction of two matrix is :\n";
     for (i = 0; i < n; i++)
     {
         for (j = 0; j < m; j++)
         {
             d[i][j] = a[i][j] - b[i][j];
             cout << d[i][j] << "\t";
         }
         cout << "\n";
     }
 }
 void matrix::trans()
 {
     cout << "\nThe Transpose of first matrix is :\n";
     for (i = 0; i < n; i++)
     {
         for (j = 0; j < m; j++)
         {
             e[i][j] = a[j][i];
             cout << e[i][j] << "\t";
         }
         cout << "\n";
     }
 }
 void matrix::mul()
 {
     cout << "\nThe Matrix Multiplication is : \n";
     if (m == p)
     {
         for (i = 0; i < n; i++)
         {
             for (j = 0; j < q; j++)
             {
                 c[i][j] = 0;
                 for (k = 0; k < p; k++)
                 {
                     c[i][j] = c[i][j] + a[i][k] * b[k][j];
                 }
                 cout << c[i][j] << "\t";
             }
             cout << "\n";
         }
     }
     else
         cout << "\n Matrix Multiplication not possible";
 }
int main()
 {
     matrix m;
     m.get();
     m.add();
     m.sub();
     m.trans();
     m.mul();
     return 0;
 }
//Output:
/*Enter Number of Row & Column :  2
2

Enter the first Matrix:
12
23
45
67

Enter Number of Row & Column :  2
2

Enter the Second Matrix:
78
90
67
56

The addition of two matrix is :
90      113
112     123

The Subtraction of two matrix is :
-66     -67
-22     11

The Transpose of first matrix is :
12      45
23      67

The Matrix Multiplication is : 
2477    2368
7999    7802*/
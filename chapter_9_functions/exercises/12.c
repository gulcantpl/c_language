double inner_product(int n, int m, double a[n][m], double b[n][m])
{
    double sum = 0.0;

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            
            
            sum += a[i][j] * b[i][j];
            
        }
    }

    return sum;
}
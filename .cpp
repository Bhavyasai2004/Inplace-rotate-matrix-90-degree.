#include <bits/stdc++.h> 
void inplaceRotate(vector<vector<int>> &inputArray)
{
    // Write your code here.
    int i,j;
    int c=0;
    int n=inputArray.size();
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            
                int t = inputArray[i][j];
                inputArray[i][j] = inputArray[j][i];
                inputArray[j][i] = t;
                //c++;
            
        }

    }

    for(i=0;i<n/2;i++)
    {
      for (j = 0; j < n; j++) {
          int t=inputArray[i][j];
        inputArray[i][j] = inputArray[n - i - 1][j];
        inputArray[n-i-1][j] = t;

      }
    }
    
    
}

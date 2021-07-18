#include<iostream>
#include<vector>
using namespace std;
int kadene(vector<int>ans,int C)
{
    int max_sum=INT_MIN;
    int curr_sum=0;
    for(int i=0;i<C;i++)
    {
        curr_sum+=ans[i];
        if(curr_sum>max_sum)
        max_sum=curr_sum;
        if(curr_sum<0)
        curr_sum=0;
    }
    return max_sum;
}

int maximumSumRectangle(int R, int C, vector<vector<int>>mat)
{
        
    int maxi=INT_MIN;
    for(int i=0;i<R;i++)
    {
        vector<int>ans(C);
        for(int j=i;j<R;j++)
        {
            for(int col=0;col<C;col++)
            {
                ans[col]+=mat[j][col];
            }
            maxi=max(maxi,kadene(ans,C));
        }
    }
    return maxi;
}

int main()
{
    int row,col;
    cout<<"Enter rows: ";
    cin>>row;
    cout<<"Enter columns: ";
    cin>>col;
    
    vector<vector<int>>v(row,vector<int>(col));
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++){
    cout<<"Enter element: "<<i<<j<<endl;
    cin>>v[i][j];
    }

    //display
    cout<<"\n\tGiven 2D matrix is : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        {
            cout<<v[i][j]<<"  ";
        }
    cout<<endl;
    }
    
    cout<<"Maximum Sum of the matrix is : "<<maximumSumRectangle(row,col,v);

    return 0;
}
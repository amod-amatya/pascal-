#include<iostream>
#include<vector>

using namespace std;

vector<vector<unsigned>> pascal_triangle(unsigned depth) 
{

    vector<vector<unsigned>> pascal(depth, vector<unsigned>(depth, 1));

	for (unsigned i=0; i<depth; i++)
	{
		for (unsigned j=0; j<i; j++)
		{
			pascal[j].pop_back();	
		}
	}
	
	for(unsigned i=0; i<depth; i++)
	{
 		for(unsigned j=1; j<i; j++) 
 		{
 			pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
	 	}
	}
	return pascal;
}

int main()
{
	unsigned depth;
	cout << "Enter the number of rows: ";
	cin >> depth;
	vector<vector<unsigned>> pascal = pascal_triangle(depth);

	for (unsigned i=0; i<pascal.size(); i++)
    {
    	for (unsigned j=0; j<pascal[i].size(); j++)
    	{
    		cout<< pascal[i][j]<<" ";
    	}
    	cout<<endl;
    }
return 0;
}
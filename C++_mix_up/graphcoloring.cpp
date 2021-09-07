#include<bits/stdc++.h>
using namespace std;
//DEFINING THE NUMBER OF VERTICES
# define V 4


void printSolution(int color[]); 


bool isSafe (int v, bool graph[V][V], int color[], int c) 
{ 
	for (int i = 0; i < V; i++) 
		if (graph[v][i] && c == color[i]) 
			return false; 
	return true; 
} 


bool graphColoringUtil(bool graph[V][V], int m, int color[], int v) 
{ 
// If all vertices are assigned a color then  return true 
	if (v == V) 
		return true; 

	/* Consider this vertex v and try different colors */
	for (int c = 1; c <= m; c++) 
	{ 
		/* Check if assignment of color c to v is fine*/
		if (isSafe(v, graph, color, c)) 
		{ 
		color[v] = c; 

	
		if (graphColoringUtil (graph, m, color, v+1) == true) 
			return true; 

		
		color[v] = 0; 
		} 
	} 

	/* If no color can be assigned to this vertex then return false */
	return false; 
} 

// Backtracking. 

bool graphColoring(bool graph[V][V], int m) 
{ 
	// Initialize all color values as 0
	int color[V]; 
	for (int i = 0; i < V; i++) 
	color[i] = 0; 

	// Call graphColoringUtil for vertex 0 
	if (graphColoringUtil(graph, m, color, 0) == false) 
	{ 
	printf("Solution does not exist"); 
	return false; 
	} 

	// Print the solution 
	printSolution(color); 
	return true; 
} 

// print solution 
void printSolution(int color[]) 
{ 
	printf("Solution Exists:"
			" Following are the assigned colors \n"); 
	for (int i = 0; i < V; i++) 
	printf(" %d ", color[i]); 
	printf("\n"); 
} 

// driver program to test above function 
int main() 
{ 
	
int n;
n=V;
bool graph[V][V];
cout<<"Enter the adjacency matrix";
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cin>>graph[i][j];
	}
}

/*for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<graph[i][j]<<" ";
	}
	cout<<endl;
}*/
int m;
cout<<"Enter the max number of colours you have!!";
cin>>m;

	graphColoring (graph, m); 
	return 0; 
}

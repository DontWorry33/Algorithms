//Depth-First Search 

//In BFS we exhaust all adjacent vertices before moving farther down the path
//In DFS we keep travelling down a path until we reach the end before discovering the other adjacent vertices 

//pass in graph G = (V,E)
//Each node will have four attributes, discovery time v.d, finishing time v.f, color v.c and parent v.p
//Algorithm makes recursive calls to DFS-Vist(G,v)

tree DFS(G,u){
	for v in G.V{
		v.c = white;
		v.p = NULL;
	}
	time = 0;

	for u in G.V{
		if u.c == white{
			DFS-Vist(G,u);
		}
	}
}

DFS-Vist(G,v){
	time++;
	u.d = time;
	u.color = gray;
	for v in G.Adj[u]{
		if v.color == white{
			v.p = u;
			DFS-Vist(G,u);
		}
	}	
	u.c = black;
	time++;
	u.f = time;
}

/*lines 11 to 13 sets all vertices' colors to white (undiscovered) and parent to nil,
for loop in line 17 starts at the source node, it will be initially white then it runs 
through the main recursive algorithm, DFS-Visit. The invariant for DFS-Visit(G,v), v.c is 
white, time increments and becomes discovered. Find the next vertex down the path, keep going 
until it reaches a vertex with no out-going edges, set color to black, increment time and update
the finishing time. Traverse back to the parent, if it has no other adjacent vertices then it is 
finished, and we continue this recursively until all vertices are finished.*/


//Breadth-First Search

//Pass in a graph G = (V,E)
//Going to use a queue Q and adjacency list Adj[u]

tree BFS(G,s){
	for v in G.V{
		v.color = white;
		s.color = gray;
	}
	s.distance = 0;
	queue Q;
	Q.enqueue(s);
	while Q.notEmpty{ //will run at most |V|
		u = Q.dequeue(); 
		for v in G.Adj[u]{ //exhausts all vertices adjacent to u and will run at most |V| - 1
			if v.color == white{
				v.color = gray;
				v.distance = u.distance + 1;
				Q.enqueue(v);
			}
		} 
	}
}

/*Basically we start from node s with distance 0. All adjacent vertices to s will have distance 1.
Adjacent vertices of those will have 2 and so on. At step k we discover all vertices of distance k+1.*/
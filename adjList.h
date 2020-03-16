#pragma once

//Verticies in a Array
typedef struct vertex {
	int index; //Value of vertex
	struct edge* node; //List head
	//struct vertex* discoveryTime; //Time to discorver vertex
	//struct vertex* finishingTime; //Time that we finish on the vertex
} V;

//List of verticies
typedef struct graph {
	struct vertex* source; //First vertext in vertex_list
	int num_verticies; //Number of verteices in the graph
} G;

//Edges (nodes) in a list
typedef struct edge {
	int weight; //Information in the edge
	struct vertex* data;
	struct edge* next; //Pointer to next edge, next = 0 -> tail
	struct edge* prev; //Pointer to prev edge , prev = 0 -> head
} E;

G* createGraph(int n); 

E* createEdge(V* data, int weight);

V* createVertex(i, graph);

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "adjList.h"

//Create graph
G* createGraph(int n) {

	G* graph = (G*)malloc(sizeof(G));

	if (graph != NULL) {
		graph->num_verticies = n;
		int i = 1;

		for (i;  i <= n; i++) {
			createVertex(i, graph);
		}
		return graph;
	}
	return NULL;
}

//Create edge 
E* createEdge(V* data, int weight) {
	E* edge = (E*)malloc(sizeof(E));

	if (edge != NULL) {
		edge->data = data;
		edge->weight = weight;
		edge->next = NULL;
		edge->prev = NULL;

		return edge;
	}
	return NULL;
}

//Create vertex
V* createVertex(int i, G* graph) {
	V* vertex = (V*)malloc(sizeof(V));

	if (vertex != NULL) {
		vertex->index = i;
		vertex->node = NULL; //Create a head

		if (i == 1) {
			graph->source = vertex;
		}
		return vertex;
	}
	return NULL;
}

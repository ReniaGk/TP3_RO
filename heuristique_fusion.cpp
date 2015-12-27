#include "heuristique_fusion.h"


heuristique_fusion::heuristique_fusion(const Data & d) : WorkingSolution(d) {
	
	// Tir� du fichier algorithms.cpp (le fichier a donc �t� supprim�)
	clear();
	for (auto & node : nodes())
	{
		if (node.customer->id() != data().depot())
		{
			open_specific_route(node);
		}
	}

	// Cr�ation de la tourn�e Dummy : on a une tourn�e par client
}

heuristique_fusion::~heuristique_fusion() {

}

void heuristique_fusion::construction_par_fusion() {
	
	RouteInfo * cur_route = first_;
	while (is_feasible()) {
		// Se servir de la fonction do merge
	}
	

}


// pour la fusion, se servir de la fonction append de working solutions
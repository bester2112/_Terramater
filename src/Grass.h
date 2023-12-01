#ifndef GRASS_H
#define GRASS_H

#include "Vertex.h"
#include "GrassType.h"

#include "vector"

 /**
  * @brief Represents an ingame cube described by its cube type.
  */
class Grass {
public:
	GrassType grassType;

	Grass();
	Grass(GrassType grassType);
	~Grass();

	/**
	 * @brief Gets the vertices of the standard cube.
	 *
	 * @param vertices Vector in which the vertices will be stored.
	 */
	void getVertices(std::vector<Vertex> &vertices);

	/**
	 * @brief Gets the indices of the standard cube.
	 *
	 * @param indices Vector in which the indices will be stored.
	 */
	void getIndices(std::vector <uint32_t> &indices);

private:
};

#endif // !GUIHUD_H

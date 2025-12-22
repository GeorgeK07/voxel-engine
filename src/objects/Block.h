// #ifndef BLOCK_H
// #define BLOCK_H

// #include <glm/glm.hpp>
// #include <unordered_map>
// #include <vector>
// #include <utility> // for std::pair

// enum BlockType {
//     Default,
//     Grass,
//     Sand,
//     Dirt,
//     Water,
//     Stone,
//     Wood,
//     NumTypes,
// };

// class BlockMap {
//     static std::unordered_map<int, std::vector<std::pair<int, int>>> textureCoordMap;
// public:
//     BlockMap();

//     static const std::unordered_map<int, std::vector<std::pair<int, int>>>& getTextureCoordMap() {
//         return textureCoordMap;
//     }
// };

// class Block {
//     static void addColCubeFace(glm::vec3 p1, glm::vec3 p2, glm::vec3 p3, glm::vec3 p4, glm::vec3 col, float brightness,
//                         float * vertices, unsigned int * indices, int *vCount, int *iCount);

// public:
//     static constexpr int BLOCK_RENDER_SIZE = 2;
//     bool isActive = false;
//     Block(){};
//     ~Block(){};
//     BlockType blockType =  BlockType::Default;

//     static void creatColourCube(glm::vec3 pos, glm::vec3 size, glm::vec3 colour,
//                                 float *vertices, unsigned int *indices, int *vCount, int *iCount);
// };

// #endif // BLOCK_H
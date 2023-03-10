#pragma once

// Did my best to set the vertices in clockwise order

namespace Shapes
{
    // the verticers here are in CLOCKWISE order
    const std::vector<Vertex> TRIANGLE = {
            {{0.0f, -0.5f, 0.9f}, {0.0f, 0.0f, 0.0f}},
            {{0.5f, 0.5f, 0.2f}, {0.0f, 1.0f, 0.0f}},
            {{-0.5f, 0.5f, 0.0f}, {0.0f, 0.0f, 1.0f}}
    };

    // Even though a square in rendering is made up of 2 triangles and such has 6 vertices,
    // we only need to write the unique vertices once per "real" vertex (the 4 corners of the rectangle)
    // The vertices here are in CLOCKWISE order
    const std::vector<Vertex> RECTANGLE = {
            {{-0.5f, -0.5f, 0.3f}, {1.0f, 0.0f, 0.0f}, {1.0f, 0.0f}}, // TOP LEFT
            {{0.5f, -0.5f, 0.6f}, {0.0f, 1.0f, 0.0f}, {0.0f, 0.0f}}, // TOP RIGHT
            {{0.5f, 0.5f, 0.3f}, {0.0f, 0.0f, 1.0f}, {0.0f, 1.0f}}, // BOTTOM RIGHT
            {{-0.5f, 0.5f, 0.5f}, {1.0f, 1.0f, 1.0f}, {1.0f, 1.0f}} // BOTTOM LEFT
    };
    
    const std::vector<Vertex> cube = {
        // front
        {{-0.5f, -0.5f, 0.0f}, {1.0f, 0.0f, 0.0f}, {1.0f, 0.0f}},
        {{0.5f, -0.5f, 0.0f}, {0.0f, 1.0f, 0.0f}, {0.0f, 0.0f}},
        {{0.5f, 0.5f, 0.0f}, {0.0f, 0.0f, 1.0f}, {0.0f, 1.0f}},
        {{-0.5f, 0.5f, 0.0f}, {1.0f, 1.0f, 1.0f}, {1.0f, 1.0f}},

        // Back
        {{-0.5f, 0.5f, 1.0f}, {1.0f, 1.0f, 1.0f}, {1.0f, 1.0f}},
        {{0.5f, 0.5f, 1.0f}, {0.0f, 0.0f, 1.0f}, {0.0f, 1.0f}},
        {{0.5f, -0.5f, 1.0f}, {0.0f, 1.0f, 0.0f}, {0.0f, 0.0f}},
        {{-0.5f, -0.5f, 1.0f}, {1.0f, 0.0f, 0.0f}, {1.0f, 0.0f}},

        // Top
        {{-0.5f, -0.5f, 1.0f}, {1.0f, 0.0f, 0.0f}, {1.0f, 0.0f}},
        {{0.5f, -0.5f, 1.0f}, {0.0f, 1.0f, 0.0f}, {0.0f, 0.0f}},
        {{0.5f, -0.5f, 0.0f}, {0.0f, 0.0f, 1.0f}, {0.0f, 1.0f}},
        {{-0.5f, -0.5f, 0.0f}, {1.0f, 1.0f, 1.0f}, {1.0f, 1.0f}},

        // Bottom
        {{-0.5f, 0.5f, 0.0f}, {1.0f, 1.0f, 1.0f}, {1.0f, 1.0f}},
        {{0.5f, 0.5f, 0.0f}, {1.0f, 1.0f, 1.0f}, {0.0f, 1.0f}},
        {{0.5f, 0.5f, 1.0f}, {1.0f, 1.0f, 1.0f}, {0.0f, 0.0f}},
        {{-0.5f, 0.5f, 1.0f}, {1.0f, 1.0f, 1.0f}, {1.0f, 0.0f}},

        // Right
        {{0.5f, -0.5f, 0.0f}, {1.0f, 1.0f, 1.0f}, {1.0f, 1.0f}},
        {{0.5f, -0.5f, 1.0f}, {1.0f, 1.0f, 1.0f}, {1.0f, 0.0f}},
        {{0.5f, 0.5f, 1.0f}, {1.0f, 1.0f, 1.0f}, {0.0f, 0.0f}},
        {{0.5f, 0.5f, 0.0f}, {1.0f, 1.0f, 1.0f}, {0.0f, 1.0f}},

        // Left
        {{-0.5f, 0.5f, 0.0f}, {1.0f, 1.0f, 1.0f}, {0.0f, 1.0f}},
        {{-0.5f, 0.5f, 1.0f}, {1.0f, 1.0f, 1.0f}, {0.0f, 0.0f}},
        {{-0.5f, -0.5f, 1.0f}, {1.0f, 1.0f, 1.0f}, {1.0f, 0.0f}},
        {{-0.5f, -0.5f, 0.0f}, {1.0f, 1.0f, 1.0f}, {1.0f, 1.0f}},
    };
    const std::vector<uint16_t> RECTANGLE_INDICES = {
            0, 1, 2, 2, 3, 0
    };

    const std::vector<uint16_t> cube_indices = {
        0, 1, 2,
        2, 3, 0,
        4, 5, 6,
        6, 7, 4,
        8, 9, 10,
        10, 11, 8,
        12, 13, 14,
        14, 15, 12,
        16, 17, 18,
        18, 19, 16,
        20, 21, 22,
        22, 23, 20 
        

    };
}




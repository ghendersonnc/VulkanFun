#pragma once

namespace Shapes
{
    // the verticers here are in CLOCKWISE order
    const std::vector<Vertex> TRIANGLE = {
            {{0.0f, -0.5f}, {1.0f, 0.0f, 0.0f}},
            {{0.5f, 0.5f}, {0.0f, 1.0f, 0.0f}},
            {{-0.5f, 0.5f}, {0.0f, 0.0f, 1.0f}}
    };

    // Even though a square in rendering is made up of 2 triangles and such has 6 vertices,
    // we only need to write the unique vertices once per "real" vertex (the 4 corners of the rectangle)
    // The vertices here are in CLOCKWISE order
    const std::vector<Vertex> RECTANGLE = {
            {{-0.5f, -0.5f}, {1.0f, 0.0f, 0.0f}}, // TOP LEFT
            {{0.5f, -0.5f}, {0.0f, 1.0f, 0.0f}}, // TOP RIGHT
            {{0.5f, 0.5f}, {0.0f, 0.0f, 1.0f}}, // BOTTOM RIGHT
            {{-0.5f, 0.5f}, {1.0f, 1.0f, 1.0f}} // BOTTOM LEFT
    };

    const std::vector<uint16_t> RECTANGLE_INDICES = {
            0, 1, 2, 2, 3, 0
    };
}




#include "../src/main.h"
#include <assert.h>

void testGetTriangleType() {
    assert(getTriangleType(3, 4, 5) == 0);
}

int main() {
    assert(addNumber(5, 2) == 7);
    assert(hahaha(5, 2) == 14);
    testGetTriangleType();
    return 0;
}

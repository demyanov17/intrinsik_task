#include <iostream>
#include <emmintrin.h>

int main()
{
    // Define two arrays of double-precision floating-point values
    double a[] = {1.0, 2.0, 3.0, 4.0};
    double b[] = {0.0, 2.0, 1.0, 4.0};

    // Load the values into SIMD registers
    __m128d xmm_a = _mm_loadu_pd(a);
    __m128d xmm_b = _mm_loadu_pd(b);

    // Perform bitwise AND operation using _mm_and_pd
    __m128d result = _mm_and_pd(xmm_a, xmm_b);

    // Store the result back into an array
    double output[2];
    _mm_storeu_pd(output, result);

    // Print the result
    std::cout << "Result: " << output[0] << " " << output[1] << std::endl;

    return 0;
}

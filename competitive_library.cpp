#include <iostream>
#include <random>
#include <algorithm>
#include <cmath>

size_t sqrt (size_t num)
{
    int i=1;
    while (i*i <= num) i++;
    return i-1;
}

_NODISCARD constexpr int gcd (const int a, const int b) const noexcept
{
    int temp;
    while (b)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;  
}

_NODISCARD constexpr size_t countBits (size_t x) const noexcept
{
    x = x - ((x >> 1) & 0x55555555);
    x = (x & 0x33333333) + ((x >> 2) & 0x33333333);
    x = x + (x >> 4);
    x &= 0xF0F0F0F;
    return (x * 0x01010101) >> 24;
}

_NODISCARD size_t nextPowerof2 (unsigned int num) const noexcept(noexcept(num << 1))
{
    if (num == 0)
    {
        return 1;
    }
    else if ((n & (num-1)) == 0)
    {
        return n;
    }
    while ((num & (num-1)) > 1)
    {
        num = (num & (num-1));
    }
    return num << 1;
}

// gets you a random integer (signed/ unsigned) number between [floor, ceil)
template <class T>
_NODISCARD constexpr T generate_random (const T floor, const T ceil) const
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<T> dist(floor, ceil-1);
    T random_number_generated {dist(mt)};
    return random_number_generated;
}

template <class _It>
_NODISCARD std::size_t hashArray (const _It begin, const _It end) const
{
    std::size_t seed = 0;
    for (_It iter {begin}; iter != end; iter++)
    {
        seed ^= (*iter) + 0x9e3779b9 + (seed<<6) + (seed>>2);
    }
    return seed;
}

_NODISCARD constexpr size_t backtrackAP (const size_t n) const noexcept
{
    double num = (sqrt(1.0 + 8.0 * n) - 1.0) / 2.0;
    return static_cast<size_t>(num);
}
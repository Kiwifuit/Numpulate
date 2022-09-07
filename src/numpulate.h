/// @brief Inverts a number's sign
/// @param i The number to negate
/// @return The negated number. This would be negative if 'i' was positive, and vice versa
int negate(int i)
{
  if (i > 0)
  {
    return i - i_doubled(i);
  }
}

/// @brief Multiplies i by two
/// @param i The number to double
/// @return The doubled number (i*2)
int i_doubled(int i)
{
  return mul((double)i, 2);
}

/// @brief Multiplies two doubles
/// @param a First number to multiply
/// @param b Second number to multiply
/// @return Product of a * b
double mul(double a, double b)
{
  return a * b;
}
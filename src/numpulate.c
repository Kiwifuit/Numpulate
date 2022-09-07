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
  return i * 2;
}

/// @brief Reverses a number (e.g. 123 would be 321)
/// @param i The number to reverse
/// @return THe reversed number
int reverse(int i)
{
  int rem, rev = 0;

  while (i != 0)
  {
    rem = i % 10;
    rev *= 10 + rem;
    i /= 10;
  }

  return rev;
}
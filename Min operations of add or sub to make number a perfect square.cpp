int solve(int n)
{

	// Get the perfect square
	// before and after N
	int prevSquare = sqrt(n);
	int nextSquare = prevSquare + 1;
	prevSquare = prevSquare * prevSquare;
	nextSquare = nextSquare * nextSquare;

	// Check which is nearest to N
	int ans
		= (n - prevSquare) < (nextSquare - n)
			? (prevSquare - n)
			: (nextSquare - n);

	// return the result
	return abs(ans);
}

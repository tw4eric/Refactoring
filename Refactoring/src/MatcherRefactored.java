
public class MatcherRefactored {
	public MatcherRefactored() {}
	public boolean match(int[] expected, int[] actual,
			int clipLimit, int delta)
	{
		boolean areSampleLengthsDifferent = (actual.length != expected.length);
		clipTooLargeValues(actual, clipLimit);
		
		return areSampleLengthsDifferent ? 
				false :
				isEachEntryWithinDeltaLimits(expected, actual, delta);
	}
	
	private boolean isEachEntryWithinDeltaLimits(int[] expected, int[] actual,
			int delta) {
		for (int i = 0; i < actual.length; i++)
			if (Math.abs(expected[i] - actual[i]) > delta)
				return false;

		return true;
	}
	
	private void clipTooLargeValues(int[] actual, int clipLimit) {
		for (int i = 0; i < actual.length; i++)
			if (actual[i] > clipLimit)
				actual[i] = clipLimit;
	}
}
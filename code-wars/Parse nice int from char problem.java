public class CharProblem {
	public static int howOld(final String herOld) {

		return Integer.parseInt(herOld.split(" ")[0]);

	}
}

// BEST
// public class CharProblem {
//   public static int howOld(final String herOld) {
  
//   return Character.getNumericValue(herOld.charAt(0));
//   }
// }
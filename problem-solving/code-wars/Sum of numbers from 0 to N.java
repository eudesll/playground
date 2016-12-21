public class SequenceSum{

  public static String showSequence(int value){
    
    if (value < 0) {
      return value + "<0";
    } else if (value == 0) {
      return "0=0";
    }
    
    long sum = 0;
    String result = "";
    
    for (int i = 0; i <= value; i++) {
      sum += i;
      
      result += "" + i;
      
      if (i < value) {
        result += "+";
      } else {
        result += " = " + sum;
      }
    }
    
    return result;
  }

  /*public static void main(String args[]){
    int param=Integer.ParseInt(args[0]);
    SequenceSum.showSequence(param);
  }*/
}

// BEST
// public class SequenceSum {
//   public static String showSequence(int value) {
//     if (value < 0)
//       return String.format("%d<0", value);
//     else if (value == 0)
//       return "0=0";
//     String expr = IntStream.rangeClosed(0, value).mapToObj(Integer::toString)
//       .collect(Collectors.joining("+"));
//     long sum = (long)value * (value + 1) / 2;
//     return String.format("%s = %d", expr, sum);
//   }
// }
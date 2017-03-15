## Java 8 Interview Questions

* What are the new features introduced in JAVA 8?

> There are dozens of features added to Java 8, the most significant ones are mentioned below −
* Lambda expression − Adds functional processing capability to Java.
* Method references − Referencing functions by their names instead of invoking them directly. Using functions as parameter.
* Default method − Interface to have default method implementation.
* New tools − New compiler tools and utilities are added like 'jdeps' to figure out dependencies.
* Stream API − New stream API to facilitate pipeline processing.
* Date Time API − Improved date time API.
* Optional − Emphasis on best practices to handle null values properly.
* Nashorn, JavaScript Engine − A Java-based engine to execute JavaScript code.

>Along with these new featuers, lots of feature enhancements are done under-the-hood, at both compiler and JVM level.

* How will you sort a list of string using Java 8 lambda expression?

> ``` java
//sort using java 8
private void sortUsingJava8(List<String> names){
  Collections.sort(names, (s1, s2) -> s1.compareTo(s2));
}
```

* What are the characteristics of a Java 8 lambda expression?

> A lambda expression is characterized by the following syntax -
`parameter −> expression body`
Following are the important characteristics of a lambda expression −
* Optional type declaration − No need to declare the type of a parameter. The compiler can inference the same from the value of the parameter.
* Optional parenthesis around parameter − No need to declare a single parameter in parenthesis. For multiple parameters, parentheses are required.
* Optional curly braces − No need to use curly braces in expression body if the body contains a single statement.
* Optional return keyword − The compiler automatically returns the value if the body has a single expression to return the value. Curly braces are required to indicate that expression returns a value.

* Why lambda expression is to be used?

> Lambda expressions are used primarily to define inline implementation of a functional interface, i.e., an interface with a single method only. In the above example, we've used various types of lambda expressions to define the operation method of MathOperation interface. Then we have defined the implementation of sayMessage of GreetingService.

>Lambda expression eliminates the need of anonymous class and gives a very simple yet powerful functional programming capability to Java.

* What kind of variable you can access in an lambda expression??

> Using lambda expression, you can refer to final variable or effectively final variable (which is assigned only once). Lambda expression throws a compilation error, if a variable is assigned a value the second time.

* What are method references?

> Method references help to point to methods by their names. A method reference is described using :: (double colon) symbol. A method reference can be used to point the following types of methods 
* Static methods
* Instance methods
* Constructors using new operator (TreeSet::new)

* Explain the System.out::println expression.

> System.out::println method is a static method reference to println method of out object of System class.

* What are functional interfaces?

> Functional interfaces have a single functionality to exhibit. For example, a Comparable interface with a single method 'compareTo' is used for comparison purpose. Java 8 has defined a lot of functional interfaces to be used extensively in lambda expressions.

* What are default methods?

> With java 8, an interface can have default implementation of a function in interfaces.

* What are static default methods?

> An interface can also have static helper methods from Java 8 onwards.
``` java
public interface vehicle {
   default void print(){
      System.out.println("I am a vehicle!");
   }
 
   static void blowHorn(){
      System.out.println("Blowing horn!!!");
   }
}
```

* How will you call a default method of an interface in a class?

> Using super keyword along with interface name.
``` java
interface Vehicle {
   default void print(){
      System.out.println("I am a vehicle!");
   }
}
class Car implements Vehicle {
   public void print(){
      Vehicle.super.print();                  
   }
}
```

* How will you call a static method of an interface in a class?

> Using name of the interface.
``` java
interface Vehicle {
   static void blowHorn(){
      System.out.println("Blowing horn!!!");
   }
}
class Car implements Vehicle {
   public void print(){
      Vehicle.blowHorn();                  
   }
}
```

* What is streams in Java 8?

> Stream represents a sequence of objects from a source, which supports aggregate operations.

* What is stream pipelining in Java 8?

> Most of the stream operations return stream itself so that their result can be pipelined. These operations are called intermediate operations and their function is to take input, process them, and return output to the target. collect() method is a terminal operation which is normally present at the end of the pipelining operation to mark the end of the stream.

* What is the difference between Collections and Stream in Java8 ?

> Stream operations do the iterations internally over the source elements provided, in contrast to Collections where explicit iteration is required.

* What is the purpose of forEach method of stream in java 8?

> Stream has provided a new method 'forEach' to iterate each element of the stream.

* How will you print 10 random numbers using forEach of java 8?

> The following code segment shows how to print 10 random numbers using forEach.
``` java
Random random = new Random();
random.ints().limit(10).forEach(System.out::println);
```

* What is the purpose of map method of stream in java 8?

> The 'map' method is used to map each element to its corresponding result.

* How will you print unique squares of numbers in java 8?

> The following code segment prints unique squares of numbers using map.
``` java
List<Integer> numbers = Arrays.asList(3, 2, 2, 3, 7, 3, 5);
//get list of unique squares
List<Integer> squaresList = numbers.stream().map( i -> i*i).distinct().collect(Collectors.toList());
```

* What is the purpose of filter method of stream in java 8?

> The 'filter' method is used to eliminate elements based on a criteria.

* How will you print count of empty strings in java 8?

> The following code segment prints a count of empty strings using filter.
``` java
List<String>strings = Arrays.asList("abc", "", "bc", "efg", "abcd","", "jkl");
//get count of empty string
int count = strings.stream().filter(string −> string.isEmpty()).count();
```

* What is the purpose of limit method of stream in java 8?

> The 'limit' method is used to reduce the size of the stream.

* How will you print 10 random numbers in java 8?

> The following code segment shows how to print 10 random numbers.
``` java
Random random = new Random();
random.ints().limit(10).forEach(System.out::println);
```

* What is the purpose of sorted method of stream in java 8?

> The 'sorted' method is used to sort the stream.

* How will you print 10 random numbers in a sorted order in java 8?

> The following code segment shows how to print 10 random numbers in a sorted order.
``` java
Random random = new Random();
random.ints().limit(10).sorted().forEach(System.out::println);
```

* What is Parallel Processing in Java 8?

> parallelStream is the alternative of stream for parallel processing. Take a look at the following code segment that prints a count of empty strings using parallelStream.
``` java
List<String> strings = Arrays.asList("abc", "", "bc", "efg", "abcd","", "jkl");
//get count of empty string
int count = strings.parallelStream().filter(string −> string.isEmpty()).count();
//It is very easy to switch between sequential and parallel streams.
```

* What are collectors in Java 8?

> Collectors are used to combine the result of processing on the elements of a stream. Collectors can be used to return a list or a string.
``` java
List<String>strings = Arrays.asList("abc", "", "bc", "efg", "abcd","", "jkl");
List<String> filtered = strings.stream().filter(string -> !string.isEmpty()).collect(Collectors.toList());
System.out.println("Filtered List: " + filtered);
String mergedString = strings.stream().filter(string -> !string.isEmpty()).collect(Collectors.joining(", "));
System.out.println("Merged String: " + mergedString);
```

* What are Statistics collectors in Java 8?

> With Java 8, statistics collectors are introduced to calculate all statistics when stream processing is being done.

* How will you get the highest number present in a list using Java 8?

> Following code will print the highest number present in a list.
``` java
List<Integer> numbers = Arrays.asList(3, 2, 2, 3, 7, 3, 5);
IntSummaryStatistics stats = integers.stream().mapToInt((x) −> x).summaryStatistics();
System.out.println("Highest number in List : " + stats.getMax());
```

* How will you get the lowest number present in a list using Java 8?

> How will you get the lowest number present in a list using Java 8?
``` java
List<Integer> numbers = Arrays.asList(3, 2, 2, 3, 7, 3, 5);
IntSummaryStatistics stats = integers.stream().mapToInt((x) −> x).summaryStatistics();
System.out.println("Lowest number in List : " + stats.getMin());
```

* How will you get the sum of all numbers present in a list using Java 8?

> Following code will print the sum of all numbers present in a list.
``` java
List<Integer> numbers = Arrays.asList(3, 2, 2, 3, 7, 3, 5);
IntSummaryStatistics stats = integers.stream().mapToInt((x) −> x).summaryStatistics();
System.out.println("Sum of all numbers : " + stats.getSum());
```

* How will you get the average of all numbers present in a list using Java 8?

> Following code will print the average of all numbers present in a list.
``` java
List<Integer> numbers = Arrays.asList(3, 2, 2, 3, 7, 3, 5);
IntSummaryStatistics stats = integers.stream().mapToInt((x) −> x).summaryStatistics();
System.out.println("Average of all numbers : " + stats.getAverage());
```

* What is Optional in Java8?

> Optional is a container object which is used to contain not-null objects. Optional object is used to represent null with absent value. This class has various utility methods to facilitate code to handle values as 'available' or 'not available' instead of checking null values. It is introduced in Java 8 and is similar to what Optional is in Guava.

* What is Nashorn in Java8?

> With Java 8, Nashorn, a much improved javascript engine is introduced, to replace the existing Rhino. Nashorn provides 2 to 10 times better performance, as it directly compiles the code in memory and passes the bytecode to JVM. Nashorn uses invokedynamics feature, introduced in Java 7 to improve performance.

* What is jjs in JAVA8?

> For Nashorn engine, JAVA 8 introduces a new command line tool, jjs, to execute javascript codes at console.

* Can you execute javascript code from java 8 code base?

> Yes! Using ScriptEngineManager, JavaScript code can be called and interpreted in Java.

* What is local datetime API in JAVA8?

> Local − Simplified date-time API with no complexity of timezone handling.

* What is zoned datetime API in JAVA8?

> Zoned − Specialized date-time API to deal with various timezones.

* What is chromounits in java8?

> java.time.temporal.ChronoUnit enum is added in Java 8 to replace the integer values used in old API to represent day, month, etc.

* How will you get the current date using local datetime api of java8?

>Following code gets the current date using local datetime api −
``` java
//Get the current date
LocalDate today = LocalDate.now();
System.out.println("Current date: " + today);
```

* How will you add 1 week to current date using local datetime api of java8?

>Following code adds 1 week to current date using local datetime api −
``` java
//add 1 week to the current date
LocalDate today = LocalDate.now();
LocalDate nextWeek = today.plus(1, ChronoUnit.WEEKS);
System.out.println("Next week: " + nextWeek);
```

* How will you add 1 month to current date using local datetime api of java8?

> Following code adds 1 month to current date using local datetime api:
``` java
//add 1 month to the current date
LocalDate today = LocalDate.now();
LocalDate nextMonth = today.plus(1, ChronoUnit.MONTHS);
System.out.println("Next month: " + nextMonth);
```

* How will you add 1 year to current date using local datetime api of java8?

>Following code adds 1 year to current date using local datetime api −
``` java
//add 1 year to the current date
LocalDate today = LocalDate.now();
LocalDate nextYear = today.plus(1, ChronoUnit.YEARS);
System.out.println("Next year: " + nextYear);
```

* How will you add 10 years to current date using local datetime api of java8?

> Following code adds 10 years to current date using local datetime api −
``` java
//add 10 years to the current date
LocalDate today = LocalDate.now();
LocalDate nextDecade = today.plus(1, ChronoUnit.DECADES);
System.out.println("Date after ten year: " + nextDecade);
```

* How will you get next tuesday using java8?

> Following code gets next tuesday using java8 −
``` java
//get the next tuesday
LocalDate today = LocalDate.now();
LocalDate nextTuesday = today.with(TemporalAdjusters.next(DayOfWeek.TUESDAY));
System.out.println("Next Tuesday on : " + nextTuesday);
```

* How will you get second saturday of next month using java8?

> Following code gets second saturday of next month using java8 −
``` java
//get the second saturday of next month
LocalDate firstInYear = LocalDate.of(date1.getYear(),date1.getMonth(), 1);
LocalDate secondSaturday = firstInYear.with(TemporalAdjusters.nextOrSame(DayOfWeek.SATURDAY)).with(TemporalAdjusters.next(DayOfWeek.SATURDAY));
System.out.println("Second Saturday on : " + secondSaturday);
```

* How will you get the instant of current date in terms of milliseconds using java8?

> Following code gets the instant of current date in terms of milliseconds −
``` java
//Get the instant of current date in terms of milliseconds
Instant now = currentDate.toInstant();
```

* How will you get the instant of local date time using time in of milliseconds using java8?

> Following code gets the instant of local date time using time in of milliseconds −
``` java
Instant now = currentDate.toInstant();
ZoneId currentZone = ZoneId.systemDefault();
LocalDateTime localDateTime = LocalDateTime.ofInstant(now, currentZone);
System.out.println("Local date: " + localDateTime);
```

* How will you get the instant of zoned date time using time in of milliseconds using java8?

> Following code gets the instant of zoned date time using time in of milliseconds −
``` java
Instant now = currentDate.toInstant();
ZoneId currentZone = ZoneId.systemDefault();
ZonedDateTime zonedDateTime = ZonedDateTime.ofInstant(now, currentZone);
System.out.println("Zoned date: " + zonedDateTime);
```

* Which class implements a decoder for decoding byte data using the Base64 encoding scheme in Java8?

>static class Base64.Decoder − This class implements a decoder for decoding byte data using the Base64 encoding scheme as specified in RFC 4648 and RFC 2045.

* Which class implements an encoder for encoding byte data using the Base64 encoding scheme in Java8?

> static class Base64.Encoder − This class implements an encoder for encoding byte data using the Base64 encoding scheme as specified in RFC 4648 and RFC 2045.

* How will you create a Base64 decoder?

> getDecoder() method of Base64 class returns a Base64.Decoder that decodes using the Basic type base64 encoding scheme.

* How will you create a Base64 encoder?

> getEncoder() method of Base64 class returns a Base64.Encoder that encodes using the Basic type base64 encoding scheme.

* How will you create a Base64 decoder that decodes using the MIME type base64 encoding scheme?

> getMimeDecoder() method of Base64 class returns a Base64.Decoder that decodes using the MIME type base64 decoding scheme.

* How will you create a Base64 encoder that encodes using the MIME type base64 encoding scheme?

> getMimeEncoder() method of Base64 class returns a Base64.Encoder that encodes using the MIME type base64 encoding scheme.

* How will you create a Base64 decoder that decodes using the URL and Filename safe type base64 encoding scheme?

> getUrlDecoder() method of Base64 class returns a Base64.Decoder that decodes using the URL and Filename safe type base64 encoding scheme.

* How will you create a Base64 encoder that encodes using the URL and Filename safe type base64 encoding scheme?

> getUrlEncoder() method of Base64 class returns a Base64.Encoder that encodes using the URL and Filename safe type base64 encoding scheme.
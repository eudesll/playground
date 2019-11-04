# 02 MongoDB Query Language + Atlas

## Lab 2.1 How Many Comedies?
**Problem**:
1. If you have not already loaded the video.movieDetails collection, please review the lesson "Loading Data into Your Sandbox Cluster" for a tutorial. Then, use the script, loadMovieDetailsDataset.js, provided in the handouts for the lesson, "Connecting to an Atlas Cluster from the Mongo Shell" to load the movieDetails collection.
2. Use Compass to connect to your sandbox cluster.
3. In Compass, view the video.movieDetails collection and apply the filter {genres: "Comedy"}.

How many documents in video.movieDetails match the filter {genres: "Comedy"}?

**Answer**: 
```js
749
db.movieDetails.count({"genres": "Comedy"})
```

## Lab 2.2 How Many Inserted?
**Problem**:

If the collection video.myMovies is currently empty, how many documents would be inserted by the following call to insertMany().

```js
db.myMovies.insertMany(
  [
    {
      "_id" : "tt0084726",
      "title" : "Star Trek II: The Wrath of Khan",
      "year" : 1982,
      "type" : "movie"
    },
    {
      "_id" : "tt0796366",
      "title" : "Star Trek",
      "year" : 2009,
      "type" : "movie"
    },
    {
      "_id" : "tt0084726",
      "title" : "Star Trek II: The Wrath of Khan",
      "year" : 1982,
      "type" : "movie"
    },
    {
      "_id" : "tt1408101",
      "title" : "Star Trek Into Darkness",
      "year" : 2013,
      "type" : "movie"
    },
    {
      "_id" : "tt0117731",
      "title" : "Star Trek: First Contact",
      "year" : 1996,
      "type" : "movie"
    }
  ],
  {
    ordered: false
  }
);
```

**Answer**: 4

## Lab 2.3 Queries on Scalar Fields
**Problem**:

Explore the movieDetails collection that you loaded into your Atlas sandbox cluster and then issue a query to answer the following question. How many movies in the movieDetails collection are rated PG and have exactly 10 award nominations?

You will find the count() method useful in answering this question using the mongo shell.

**Answer**: 
```js
3
db.movieDetails.count({"rated": "PG", "awards.nominations": 10})
```

## Lab 2.4 Queries on Array Fields, Part 1
**Problem**:

Explore the movieDetails collection that you loaded into your Atlas sandbox cluster and then issue a query to answer the following question. How many movies in the movieDetails collection list "Family" among its genres?

You will find the count() method useful in answering this question using the mongo shell.

**Answer**: 
```js
db.movieDetails.count({"genres": "Family"})
```

## Lab 2.5 Queries on Array Fields, Part 2
**Problem**:

Explore the movieDetails collection that you loaded into your Atlas sandbox cluster and then issue a query to answer the following question. How many movies in the movieDetails collection list "Western" second among its genres?

You will find the count() method useful in answering this question using the mongo shell.

**Answer**: 
```js
db.movieDetails.count({"genres.1": "Western"})
```

## Lab 2.6 Update Operators
**Problem**:

To work on this lab, you need to connect to the sandbox cluster in which you have imported the video.movieDetails collection.

Suppose you wish to update the value of the plot field for one document in our movieDetails collection to correct a typo. Which of the following update operators and modifiers would you need to use to do this?

**Answer**: ["$set"]
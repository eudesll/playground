# 01 Introduction

## Lab 1.5 Scavenger Hunt, Part 1
**Problem**: How many movies in the video collection were directed by Patty Jenkins. Stated more precisely, how many documents in the video.movies collection have a value of "Patty Jenkins" for the director field?

**Answer**: 
```js
db.getCollection('movies').count({"director": "Patty Jenkins"})
```

## Lab 1.6 Scavenger Hunt, Part 2
**Problem**: How many documents in the citibike.trips collection have a tripduration that is greater than or equal to 60 and less than 65?

**Answer**: 
```js
db.getCollection('trips').count({"tripduration": {"$gte": 60, "$lt": 65}})
```
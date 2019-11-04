# 01 Introduction

## Lab 1.1: Install Compass and Connect
**Problem**: If you have not yet downloaded Compass, please follow these instructions. Then answer the question below.

1. Please download Compass from the MongoDB Download Center .
2. Install Compass on your computer from the download.

Please, make sure you are using latest (Stable) version of Compass and upgrade if necessary. Please ensure you don't download "Community Edition Stable" version.

3. Launch Compass.

When Compass opens you will see a page titled "Connect to Host".

![lab11](./images/lab11.png)

4. Use the following information to complete this form, but do not click "Connect" yet. Hostname is cluster0-shard-00-00-jxeqq.mongodb.net. Username is m001-student. Password is m001-mongodb-basics.

5. Click "Add to Favorites" so that you can easily connect to our class MongoDB deployment after closing and restarting Compass at some point in the future.

6. Now, click "Connect" and load the databases in the M001 class MongoDB deployment.

**Question**: Which of the following field names appear in documents in the movies collection of the video database. Check all that apply.

**Answer**:
```js
["_id", "cast", "director", "genre", "plot"]
```

## Lab 1.2: Determine the Value Type, Part 1
**Problem**: What is the value type of the ts field for documents in the 100YWeatherSmall.data collection?

**Answer**: 
```js
"date"
```

## Lab 1.3: Determine the Value Type, Part 2
**Problem**: What is the value type of the airTemperature field for documents in the 100YWeatherSmall.data collection?

**Answer**: 
```js
"document"
```

## Lab 1.4: Determine the Value Type, Part 3
**Problem**: What is the value type of the year field for documents in the video.movies collection?

**Answer**: 
```js
"int32"
```

## Lab 1.5 Scavenger Hunt, Part 1
**Problem**: How many movies in the video collection were directed by Patty Jenkins. Stated more precisely, how many documents in the video.movies collection have a value of "Patty Jenkins" for the director field?

**Answer**: 
```js
6
db.getCollection('movies').count({"director": "Patty Jenkins"})
```

## Lab 1.6 Scavenger Hunt, Part 2
**Problem**: How many documents in the citibike.trips collection have a tripduration that is greater than or equal to 60 and less than 65?

**Answer**: 
```js
754
db.getCollection('trips').count({"tripduration": {"$gte": 60, "$lt": 65}})
```
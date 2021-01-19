# 02 MongoDB Indexes

## Lab 2.1: Using Indexes to Sort
**Problem**:
In this lab you're going to determine which queries are able to successfully use a given index for both filtering and sorting.

Given the following index:
{ "first_name": 1, "address.state": -1, "address.city": -1, "ssn": 1 }

Which of the following queries are able to use it for both filtering and sorting?

**Answer**:

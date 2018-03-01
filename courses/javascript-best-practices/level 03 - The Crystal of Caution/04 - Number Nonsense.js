// 01 - Number Nonsense I
var birdFeeder = {
  totalFeed: 4,
  getFeed: function(feedRequested) {
    var returnedFeed = 0;
    if (this.totalFeed >= feedRequested) {
      returnedFeed = feedRequested;
      this.totalFeed -= feedRequested;
    } else {
      returnedFeed = this.totalFeed;
      this.totalFeed = 0;
    }
    
    return parseFloat(returnedFeed.toFixed(1));
  },
  fillFeed: function(additionalFeed) {
    this.totalFeed += additionalFeed;
  }          
};

// 02 - Number Nonsense II
parseInt(lambString, 10)

// 03 - Number Nonsense III
parseFloat(lambString)

// 04 - Number Nonsense IV
2 + 36

// 05 - Number Nonsense V
'typeof' + 'isNaN'
// 01 - Lost In The Brush
4

// 02 - Look No Further
short-circuiting

// 03 - Still Lost
true

// 04 - Contents In Your Pocket
var pocketStuff = ['Dragon Tooth', 'Adventure Diary', 'Silver Tiger Coin'];
var pocketContents = pocketStuff || [];

// 05 - The One Who Learns
var pocketStuff = ['Dragon Tooth', 'Adventure Diary', 'Silver Tiger Coin'];
var cluesToThePast = pocketStuff || [];
getMyIdentity(cluesToThePast);

function getMyIdentity(memories) {
  var identity = (memories.indexOf('Adventure Diary') >= 0) ? 'The One Who Learns' : undefined;
  return identity || 'unknown';
}

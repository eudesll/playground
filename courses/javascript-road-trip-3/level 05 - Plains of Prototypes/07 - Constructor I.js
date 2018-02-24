var Fencepost = function(x, y, postNum) {
	this.x = x;
  this.y = y;
  this.postNum = postNum;
  this.connectionsTo = [];
  
  this.sendRopeTo = function(connectedPost) {
  	this.connectionsTo.push(connectedPost);
  };
};

function Fencepost(x, y, postNum) {
  this.x = x;
  this.y = y;
  this.postNum = postNum;
  this.connectionsTo = [];
}

Fencepost.prototype.sendRopeTo = function(connectedPost) {
  this.connectionsTo.push(connectedPost);
};

Fencepost.prototype.removeRope = function(removeTo) {
  var temp = [];
  for (var i = 0; i < this.connectionsTo.length; i++) {
    if (this.connectionsTo[i].postNum != removeTo) {
      temp.push(this.connectionsTo[i]);
    }
  }
  this.connectionsTo = temp;
};

Fencepost.prototype.movePost = function(x, y) {
  this.x = x;
  this.y = y;
};
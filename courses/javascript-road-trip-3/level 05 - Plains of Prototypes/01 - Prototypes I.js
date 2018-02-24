Array.prototype.countCattle = function(kind) {
  var numKind = 0;
  for (i in this) {
  	if (this[i]["type"] == kind) numKind++;
  }
  
  return numKind;
};

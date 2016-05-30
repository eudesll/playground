var BowlingGame = function() {
	this.rolls = [];
	this.currentRoll = 0;
};

BowlingGame.prototype.roll = function(pins) {
	this.rolls[this.currentRoll++] = pins;
};

BowlingGame.prototype.score = function() {
	var score = 0;
	var frameIndex = 0;
	var self = this;

	function sumOfBallsInFrame() {
		return self.rolls[frameIndex] + self.rolls[frameIndex + 1];
	}

	function spareBonus() {
		return self.rolls[frameIndex + 2];
	}

	function strikeBonus() {
		return self.rolls[frameIndex + 1] + self.rolls[frameIndex + 2];
	}

	function isStrike() {
		return self.rolls[frameIndex] === 10;
	}

	function isSpare() {
		return self.rolls[frameIndex] + self.rolls[frameIndex + 1] === 10;
	}

	for (var frame = 0; frame < 10; frame++) {
		if (isStrike()) {
			score += 10 + strikeBonus();
			frameIndex++;
		} else if (isSpare()) {
			score += 10 + spareBonus();
			frameIndex += 2;
		} else {
			score += sumOfBallsInFrame();
			frameIndex += 2;
		}
	}
	return score;
};

function bowlingScore(rolls) {
    var bowling = new BowlingGame();
    bowling.rolls = rolls;
    return bowling.score();
}

// BEST
// var bowlingScore = function(rolls) {

//   var sum = function(numbers) {
//     return numbers.reduce( function (a,b) { return a+b })
//   }
//   var isSpare = function(rolls) {
//     return 10 === sum(rolls.slice(0, 2))
//   }
//   var isStrike = function(rolls) {
//     return 10 === rolls[0]
//   }

//   var calcScore = function(rolls, frame) {
//     if(frame === 10)
//        return sum(rolls)
//     else if (isStrike(rolls))
//         return sum(rolls.slice(0, 3)) + calcScore(rolls.slice(1), frame + 1)
//     else if (isSpare(rolls))
//         return sum(rolls.slice(0, 3)) + calcScore(rolls.slice(2), frame + 1)
//     else
//        return sum(rolls.slice(0, 2)) + calcScore(rolls.slice(2), frame + 1)
//   }
//   return calcScore(rolls,1)
// }
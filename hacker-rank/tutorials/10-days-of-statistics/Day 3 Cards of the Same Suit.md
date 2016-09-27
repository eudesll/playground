# Day 3 - Cards of the Same Suit

### Objective 

In this challenge, we're getting started with combinations and permutations. Check out the Tutorial tab for learning materials! 

### Task 

You draw 2 cards from a standard 52-card deck without replacing them. What is the probability that both cards are of the same suit?

### Answer

On the first draw, you have 52 options. On the second you have 51 options. This is 2652 combinations, althought we will leave it unmultiplied as 52*51.
Now, our goal is to draw two cards of the same suit. For our first card, we can surely pick any card of the 52-card deck. We only need the second card to match it.
We have 52 options for the first card. Once that first card is drawn, we are left with 51 total cards. However, only 12 of these will be valid. (13 cards per suit in a deck, but we've already drawn one). Therefore, there are 52*12 possible combinations that fulfill our requirement.
52\*12 are valid out of 52*51 total possibilities. The 52 cancel, leaving 12/51.
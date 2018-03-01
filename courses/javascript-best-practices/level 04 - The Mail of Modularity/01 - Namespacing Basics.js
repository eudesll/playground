// 01 - Grouping and Protecting
'namespace'

// 02 - Prove Your Worth
'1) overwrite, 2) globally, 3) run-time'

// 03 - Enter the Caves
var CLARITY_CAVES = {
  stalactites: 4235,
  stalagmites: 3924,
  bats: 345,
  treasureChests: 3,
  openChest: function() {
    this.treasureChests--;
    alert('DA DADADA DAAAAAAA!');
  }
};

// 04 - Access is Granted
// <!DOCTYPE>
// <html>
//   <body>
//     <h1>Caves of Clarity</h1>
//     <script type="text/javascript" src="cavesofclarity.js"></script>
//     <button onclick="CAVESOFCLARITY.openChest();">Open the Secret Treasure!</button>
//   </body>
// </html>

// 05 - Privacy or Piracy?
false

// 06 - Treasure Chests
var CAVESOFCLARITY = {
  stalactites: 4235,
  stalagmites: 3924,
  bats: 345,
  SECRET: {
    treasureChests: 3,
    openChest: function() {
      this.treasureChests--;
      alert('DA DADADA DAAAAAAA!');
    }
  }
};

// 07 - Secrets 
// <!DOCTYPE>
// <html>
//   <body>
//     <h1>Caves of Clarity</h1>
//     <script type="text/javascript" src="cavesofclarity.js"></script>
//     <button onclick="CAVESOFCLARITY.SECRET.openChest();">Open the Secret Treasure!</button>
//   </body>
// </html>

// 08 - Unknowing 
agnostic
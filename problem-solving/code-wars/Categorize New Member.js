function openOrSenior(data){
	var roles = [];

	data.forEach(function(entry) {
		if (entry[0] >= 55 && entry[1] > 7) {
			roles.push('Senior');
		} else {
			roles.push('Open');
		}
	});

	return roles;
}

// BEST
// function openOrSenior(data){
//   function determineMembership(member){
//     return (member[0] >= 55 && member[1] > 7) ? 'Senior' : 'Open';
//   }
//   return data.map(determineMembership);
// }
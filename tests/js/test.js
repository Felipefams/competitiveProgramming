var names = ["Rafael", "Thiago", "Gabriel", "Camilo", "Vitorio", "Luciano"];

var posCamilo = names.indexOf('Camilo');

console.log(names);
if(posCamilo != -1){
	names.splice(posCamilo, 1);
}
console.log(names);

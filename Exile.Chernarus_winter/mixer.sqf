_concreteMixers = 
[
	[[9644.57, 13509, 86.4616],  35] // athira
];  

{
	_concreteMixer = "Exile_ConcreteMixer" createVehicle (_x select 0);
	_concreteMixer setDir (_x select 1);
	_concreteMixer setPosASL (_x select 0);
    _concreteMixer allowDamage false;
    _concreteMixer enableSimulationGlobal true;
}
forEach _concreteMixers;
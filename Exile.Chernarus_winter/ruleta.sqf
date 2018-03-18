_objects =                      
[        
     ["Land_WoodenTable_large_F", [6329.09,7785.71,305.557],5.33298, false],
    //["Exile_Sign_RussianRoulette", [6317.35,7794.25,211.942], 0, false],
    //["Land_HumanSkull_F", [14621.056, 16821.572, 18.476805], 2.0025947, false],
    //["Land_WheelCart_F", [14621.334,16821.477, 18.355867], 4.9935374, false],
     ["Land_Camping_Light_F", [6329.19,7785.65,306.058], 0,true]
    //["Land_SportGround_fence_F", [14625.692, 16818.945, 18.791378], 0.79693103, false], 
    //["Land_SportGround_fence_F", [14633.911, 16816.904, 17.9177], 5.4953084, false], 
    //["Land_CargoBox_V1_F", [14619.726, 16823.613, 18.75972], 5.4931207, false],
];

{
    private ["_object"];

    _object = (_x select 0) createVehicle [0,0,0];
    _object setDir (deg (_x select 2));
    _object setPosWorld (_x select 1);
    _object allowDamage false;
    _object enableSimulation (_x select 3);
    _object enableSimulationGlobal (_x select 3);; // :)
}
forEach _objects;

ExileRouletteChairs = [];

ExileRouletteChairPositions =     
[   
    [[6329.26,7787.17,305.111], 0.498833],
    [[6330.5,7786.41,305.115], 0.590921],
    [[6330.57,7784.66,305.131], 2.15635],
    [[6328.85,7784.29,305.128], 3.5496],
    [[6327.77,7784.93,305.129], 3.75993],
    [[6327.7,7786.74,305.118], 5.34647]
];

{
    private ["_chair"];

    _chair = "Land_ChairWood_F" createVehicle [0, 0, 0];
    _chair setDir (deg (_x select 1));
    _chair setPosWorld (_x select 0);
    _chair allowDamage false;
    _chair enableSimulationGlobal true;

    ExileRouletteChairs pushBack _chair;
}
forEach ExileRouletteChairPositions;
class Paper : Inventory_Base {
    canBeSplit = 1;
    varQuantityInit = 1.0;
    varQuantityMin = 0.0;
    varQuantityMax = 10.0;
    varQuantityDestroyOnMin = 1;
};

class Matchbox : Inventory_Base {
    stackedUnit = "units";
    canBeSplit = 0;
    quantityBar = 0;
    varQuantityInit = 20.0;
    varQuantityMin = 0.0;
    varQuantityMax = 20.0;
};

class PersonalRadio : Transmitter_Base {
    weight = 500;
    range = 50000;
    
    class EnergyManager {
        energyUsagePerSecond = 0.001;
    };
};

class Pot: Bottle_Base
{
    varTemperatureMin=-10;               // -100
};

class FryingPan: Inventory_Base
{
    varTemperatureMin=-10;         // -100
};

class Heatpack: Inventory_Base
{
    varTemperatureMin= 26;
    varTemperatureMax= 90;
};
class MeleeDamage; 

class MeleeFist: MeleeDamage
{
    class DamageApplied
    {
        type="Melee";
        class Health
        {
            damage=2;
            armorDamage=0.1;
        };
        class Blood
        {
            damage=0;
        };
        class Shock
        {
            damage=5;
        };
    };
};

class MeleeFist_Heavy: MeleeFist
{
    hitAnimation=1;
    class DamageApplied
    {
        type="Melee";
        class Health
        {
            damage=5;
            armorDamage=0.1;
        };
        class Blood
        {
            damage=0;
        };
        class Shock
        {
            damage=15;
        };
    };
};

class MeleeBrassKnuckles: MeleeDamage
{
    class DamageApplied
    {
        type="Melee";
        class Health
        {
            damage=5;
        };
        class Blood
        {
            damage=0;
        };
        class Shock
        {
            damage=15;
        };
    };
};

class MeleeBrassKnuckles_Heavy: MeleeBrassKnuckles
{
    class DamageApplied
    {
        type="Melee";
        class Health
        {
            damage=10;
        };
        class Blood
        {
            damage=0;
        };
        class Shock
        {
            damage=20;
        };
    };
};

class MeleeSpear: MeleeDamage
{
	class DamageApplied
	{
		type="Melee";
		bleedThreshold=1;
		class Health
		{
		damage=10;
		};
		class Blood
		{
		damage=50;
		};
		class Shock
		{
		damage=15;
		};
	};
};

class MeleeSpear_Heavy: MeleeSpear
{
	class DamageApplied
	{
		type="Melee";
		class Health
		{
		damage=15;
		};
		class Blood
		{
		damage=50;
		};
		class Shock
		{
		damage=20;
		};
	};
};

class MeleeBluntStick: MeleeDamage
{
	class DamageApplied
	{
	    type="Melee";
	    class Health
	    {
		damage=8;
		};
		class Blood
		{
		damage=0;
		};
		class Shock
		{
		damage=10;
		};
	};
};

class MeleeBluntStick_Heavy: MeleeBluntStick
{
	class DamageApplied
	{
		type="Melee";
		class Health
		{
		damage=12;
		};
		class Blood
		{
		damage=0;
		};
		class Shock
		{
		damage=15;
		};
	};
};

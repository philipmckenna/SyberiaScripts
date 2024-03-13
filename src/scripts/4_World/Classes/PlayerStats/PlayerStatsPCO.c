modded class PlayerStatsPCO_current
{
	override void Init()
	{
		super.Init();
		UpdateStat(EPlayerStats_v115.ENERGY,  		new PlayerStat<float>	(0,		PlayerConstants.SL_ENERGY_MAX,	1100,	"Energy",	EPSstatsFlags.EMPTY) );
		UpdateStat(EPlayerStats_v115.WATER,  		new PlayerStat<float>	(0,		PlayerConstants.SL_WATER_MAX,	1100,	"Water",	EPSstatsFlags.EMPTY) );
	}
	
	void UpdateStat(int id, PlayerStatBase stat)
	{
		m_PlayerStats.Set(id, stat);
		stat.Init(id);
	}
};
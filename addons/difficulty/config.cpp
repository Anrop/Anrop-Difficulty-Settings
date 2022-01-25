class CfgPatches {
  class anrop_difficulty {
    name = "Anrop Difficulty";
    units[] = {};
    weapons[] = {};
    requiredVersion = 1.0;
    requiredAddons[] = {"a3_data_f"};
    addonRootClass = "a3_data_f";
    author = "Anrop";
    url = "https://www.anrop.se";
  };
};

class CfgAILevelPresets
{
  class Custom
  {
    displayName = "Anrop";
    precisionAI = 0.45;
    skillAI = 0.8;
  };
};

class CfgDifficultyPresets
{
  defaultPreset = "Custom";

  class Custom
  {
    displayName = "Anrop";
    description = "Difficulty used by Anrop";
    optionDescription = "Difficulty used by Anrop";
    levelAI = "Custom";

    class Options
    {
      autoReport = 0;
      cameraShake = 1;
      commands = 0;
      deathMessages = 0;
      detectedMines = 0;
      enemyTags = 0;
      friendlyTags = 0;
      groupIndicators = 0;
      mapContent = 0;
      mapContentEnemy = 0;
      mapContentFriendly = 0;
      mapContentMines = 0;
      mapContentPing = 0;
      multipleSaves = 0;
      reducedDamage = 0;
      scoreTable = 0;
      squadRadar = 0;
      staminaBar = 0;
      stanceIndicator = 1;
      tacticalPing = 0;
      thirdPersonView = 0;
      visionAid = 0;
      vonID = 1;
      waypoints = 0;
      weaponCrosshair = 0;
      weaponInfo = 1;
    };
  };
};

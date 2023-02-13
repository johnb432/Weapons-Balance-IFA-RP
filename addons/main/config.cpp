#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "RP_WW2_Assets_c_Vehicles_Tanks_c_PzKpfwIV_H",
            "RP_WW2_Assets_c_Vehicles_Tanks_c_PzKpfwV",
            "RP_WW2_Assets_c_Vehicles_Tanks_c_PzKpfwVI_B",
            "RP_WW2_Assets_c_Vehicles_Tanks_c_PzKpfwVI_E",
            "RP_WW2_Assets_c_Vehicles_Tanks_c_SU85",
            "RP_WW2_Assets_c_Vehicles_Tanks_c_T34_76",
            "RP_WW2_Assets_c_Vehicles_Tanks_c_T34_85",
            "RP_WW2_Assets_c_Vehicles_Tanks_c_JS2_43",
            "RP_WW2_Assets_c_Vehicles_Tanks_c_M4A3_75",
            "RP_WW2_Assets_c_Vehicles_Tanks_c_M3_Stuart",
            "RP_WW2_Assets_c_Vehicles_Tanks_c_M4_Sherman"
        };
        author = "johnb43";
        authors[] = {"johnb43"};
        url = "https://github.com/johnb432/Weapons-Balance-IFA-RP";
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class All;
    class AllVehicles: All {
        class NewTurret {
            class ViewGunner;
            class HitPoints {
                class HitTurret;
                class HitGun;
            };
            class Turrets;
            class ViewOptics;
        };
        class ViewPilot;
        class ViewCargo;
        class ViewOptics;
        class CargoTurret: NewTurret {
            class ViewGunner: ViewCargo {};
        };
    };
    class Land: AllVehicles {};
    class LandVehicle: Land {
        class CommanderOptics: NewTurret {
            class ViewOptics: ViewOptics {};
            class ViewGunner: ViewCargo {};
        };
    };
    class Tank: LandVehicle {
        class HitPoints;
        class ViewPilot: ViewPilot {};
        class ViewOptics: ViewOptics {};
        class Turrets {
            class MainTurret: NewTurret {
                class HitPoints;
                class Turrets {
                    class CommanderOptics: NewTurret {};
                };
            };
        };
    };
    class Tank_F: Tank {
        class HitPoints: HitPoints {
            class HitHull;
            class HitEngine;
            class HitLTrack;
            class HitRTrack;
        };
        class Turrets {
            class MainTurret: NewTurret {
                class HitPoints {
                    class HitTurret;
                    class HitGun;
                };
                class Turrets {
                    class CommanderOptics: CommanderOptics {
                        class ViewGunner: ViewCargo {};
                    };
                };
            };
        };
    };
    class LIB_Tank_base: Tank_F {
        class HitPoints: HitPoints {
            class HitHull: Hithull {};
        };
        class ViewOptics: ViewOptics {};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class HitPoints: HitPoints {
                    class HitTurret: HitTurret {};
                    class HitGun: HitGun {};
                };
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        class ViewGunner: ViewGunner {};
                    };
                    class Loader_place: NewTurret {
                        class ViewOptics: ViewOptics {};
                    };
                };
            };
        };
        class Animationsources;
    };

    #include "vehicles\CfgPzKpfwIV_H.hpp"
    #include "vehicles\CfgPzKpfwV.hpp"
    #include "vehicles\CfgPzKpfwVI_B.hpp"
    #include "vehicles\CfgPzKpfwVI_E.hpp"
    #include "vehicles\CfgStuG_III_G.hpp"

    #include "vehicles\CfgSU85.hpp"
    #include "vehicles\CfgT34_76.hpp"
    #include "vehicles\CfgT34_85.hpp"
    #include "vehicles\CfgJS2_43.hpp"

    #include "vehicles\CfgM4A3_75.hpp"
    #include "vehicles\CfgM3.hpp"
};

class LIB_T34_76_base: LIB_Tank_base {
    class DriverOpticsIn {
        delete DVE_Wide;
    };

    delete DriverOpticsIn;

    class Turrets: Turrets {
        class kurs_MG_turret: NewTurret {
            class OpticsIn {
                class Main {
                    useModelOptics = 1;
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_T34_MG_Optic.p3d";
                    gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
                    initAngleX = 0;
                    minAngleX = -100;
                    maxAngleX = 100;
                    initAngleY = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initFov = 0.194;
                    minFov = 0.194;
                    maxFov = 0.194;
                    memoryPointGunnerOptics = "gunnerview_kursMG";
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };

                delete Far;
            };
        };

        class MainTurret: MainTurret {
            class OpticsIn {
                class Near { // View port
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_T34_commander_optic.p3d";
                    opticsDisplayName = "";
                };
                class 3: Near { // Gun sight
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optics.p3d";
                };
                class 4: Near { // Zoomed in gun sight
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optics.p3d";
                    opticsDisplayName = "$STR_OpticsIn_Near_2_5x";
                };

                delete 1;
                delete 2;
            };

            class Turrets: Turrets {
                delete CommanderOptics;

                class Loader_place: Loader_place {
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_T34_commander_optic.p3d";

                    class OpticsIn {
                        delete Near;
                    };

                    delete OpticsIn;
                };
            };
        };
    };
};

class LIB_T34_76: LIB_T34_76_base {
    class Turrets: Turrets {
        class MainTurret: MainTurret {};
    };
};
class LIB_OT34_76: LIB_T34_76 {
    class Turrets: Turrets {
        class MainTurret: MainTurret {
            class OpticsIn {
                class Near { // View port
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_T34_commander_optic.p3d";
                    initFov = 0.4;
                    minFov = 0.4;
                    maxFov = 0.4;
                    visionMode[] = {"Normal"};
                    opticsDisablePeripherialVision = 1;
                };
                class Narrow: Near { // Gun sight
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optics.p3d";
                };
                class Far: Near { // Zoomed in gun sight
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optics.p3d";
                    initFov = 0.16;
                    minFov = 0.16;
                    maxFov = 0.16;
                };
            };
        };
    };
};

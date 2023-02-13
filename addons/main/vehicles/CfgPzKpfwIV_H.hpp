class LIB_PzKpfwIV_H_base: LIB_Tank_base {
    class DriverOpticsIn {
        delete DVE_Wide;
    };

    delete DriverOpticsIn;

    class Turrets: Turrets {
        class kurs_MG_turret: MainTurret {
            class OpticsIn {
                class Main {
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optika_MG.p3d";
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
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Pz4_commander_optic.p3d";
                    opticsDisplayName = "";
                };
                class 1: Near { // Gun sight
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optics.p3d";
                };
                class 2: Near { // Zoomed in gun sight
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optics.p3d";
                };
            };

            class Turrets: Turrets {
                class CommanderOptics: CommanderOptics {
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Pz4_commander_optic.p3d";
                    maxTurn = 360;
                    minTurn = -360;

                    class OpticsIn {
                        delete Narrow;
                        delete Far;
                        delete Near;
                    };

                    delete OpticsIn;
                };

                class Loader_place: Loader_place {
                    class OpticsIn {
                        delete mid;
                        delete Far;
                        delete Near;
                    };

                    delete OpticsIn;
                };
            };
        };
    };
};

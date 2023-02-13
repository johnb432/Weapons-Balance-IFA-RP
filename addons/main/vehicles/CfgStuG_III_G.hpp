class LIB_StuG_III_G_base: LIB_Tank_base {
    class DriverOpticsIn {
        delete DVE_Wide;
    };

    delete DriverOpticsIn;

    class Turrets: Turrets {
        class MainTurret: MainTurret {
            class OpticsIn {
                class Near { // View port
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.4;
                    minFov = 0.4;
                    maxFov = 0.4;
                    visionMode[] = {"Normal"};
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Pz4_commander_optic.p3d";
                    gunnerOpticsEffect[] = {};
                };
                class 1: Near { // Gun sight
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optika_StuG.p3d";
                    initFov = 0.08;
                    minFov = 0.08;
                    maxFov = 0.08;
                    opticsDisablePeripherialVision = 1;
                };
                class 2: Near { // Binoculars
                    gunnerOpticsModel = "\A3\weapons_f\reticle\optics_binoculars";
                    initFov = 0.04;
                    minFov = 0.04;
                    maxFov = 0.04;
                    opticsDisablePeripherialVision = 1;
                };

                delete Narrow;
                delete Peri;
                delete Wide;
            };

            class Turrets: Turrets {
                class CommanderOptics: CommanderOptics {
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Pz4_commander_optic.p3d";
                    maxTurn = 360;
                    minTurn = -360;
                };
            };
        };
    };
};

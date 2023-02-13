class LIB_PzKpfwVI_B_base: LIB_Tank_base {
    class DriverOpticsIn {
        delete DVE_Wide;
    };

    delete DriverOpticsIn;

    class Turrets: Turrets {
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
                class 3: Near { // Zoomed in gun sight
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optics.p3d";
                };

                delete Far;
            };

            class Turrets: Turrets {
                class CommanderOptics: CommanderOptics {
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Tiger_Commander_Optic.p3d";
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
                        delete Far;
                        delete Near;
                    };

                    delete OpticsIn;
                };
            };
        };
    };
};

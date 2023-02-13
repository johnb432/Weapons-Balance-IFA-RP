class LIB_SU85_base: LIB_Tank_base {
    class DriverOpticsIn {
        delete DVE_Wide;
    };

    delete DriverOpticsIn;

    class Turrets: Turrets {
        class MainTurret: MainTurret {
            class OpticsIn {
                class Near { // View port
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_T34_commander_optic.p3d";
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
                    class OpticsIn {
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

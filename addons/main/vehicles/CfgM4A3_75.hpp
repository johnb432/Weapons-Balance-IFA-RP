class LIB_M4A3_75_base: LIB_Tank_base {
    class DriverOpticsIn {
        delete DVE_Wide;
    };

    delete DriverOpticsIn;

    class Turrets: Turrets {
        class kurs_MG_turret: MainTurret {
            class OpticsIn {
                class Wide;
                class Far: Wide { // Gun sight
                    useModelOptics = 1;
                };

                delete Main;
            };
        };

        class MainTurret: MainTurret {
            class OpticsIn {
                class Wide;
                class Narrow: Wide {
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_M4A3_75_Reticle.p3d";
                    initFov = 0.133;
                    maxFov = 0.133;
                    minFov = 0.133;
                };

                delete 2;
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

class LIB_M4A3_75: LIB_M4A3_75_base {};
class LIB_M4A3_75_Flame: LIB_M4A3_75 {
    class Turrets: Turrets {
        class MainTurret: MainTurret {
            class OpticsIn {
                class Wide {
                    initFov = 0.4;
                    minFov = 0.4;
                    maxFov = 0.4;
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_M4A3_75_Driver_Optic.p3d";
                    opticsDisablePeripherialVision = 1;
                };
                class Narrow: Wide {
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_M4A3_75_Reticle.p3d";
                    initFov = 0.133;
                    minFov = 0.133;
                    maxFov = 0.133;
                };
            };
        };
    };
};

class LIB_M4A3_105mm: LIB_M4A3_75 {
    class Turrets: Turrets {
        class kurs_MG_turret: MainTurret {
            class OpticsIn {
                class Wide;
                class Far: Wide { // Gun sight
                    cameraDir = "";
                    gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optika_MG.p3d";
                    memoryPointGunnerOptics = "gunnerview_kursMG";
                    useModelOptics = 1;
                };
            };
        };
        class MainTurret: MainTurret {
            class OpticsIn {
                class Wide {
                    initFov = 0.4;
                    minFov = 0.4;
                    maxFov = 0.4;
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_M4A3_75_Driver_Optic.p3d";
                    opticsDisablePeripherialVision = 1;
                };
                class Narrow: Wide {
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_M4A3_75_Reticle.p3d";
                    initFov = 0.133;
                    minFov = 0.133;
                    maxFov = 0.133;
                };
            };
        };
    };
};

class RP_LIB_M4A3_75: LIB_M4A3_75_base {};
class LIB_M4A3_76: RP_LIB_M4A3_75 {};
class LIB_M4A4_FIREFLY: LIB_M4A3_76 {
    class Turrets: Turrets {
        class MainTurret: MainTurret {
            class OpticsIn {
                class Wide {
                    initFov = 0.4;
                    minFov = 0.4;
                    maxFov = 0.4;
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_M4A3_75_Driver_Optic.p3d";
                    opticsDisablePeripherialVision = 1;
                };
                class Narrow: Wide {
                    gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\WW2_No43x3_Sight.p3d";
                    initFov = 0.133;
                    minFov = 0.133;
                    maxFov = 0.133;
                };
            };
        };
    };
};

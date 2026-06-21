// addr: 0x01367750
// name: FUN_01367750
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_01367750(undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  FUN_01355220(&local_10,param_1);
  param_1 = 0;
  FUN_01353420(local_10,local_c,local_8,local_4,&param_1,0);
  FUN_013669d0(&local_10,local_10,local_c,local_8,local_4);
  return param_1;
}


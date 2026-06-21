// addr: 0x01401b20
// name: FUN_01401b20
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool FUN_01401b20(void *param_1,int *param_2)

{
  bool bVar1;
  int local_c;
  int local_8;
  void *local_4;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  bVar1 = Deserializer_readInteger(param_1,param_2);
  if (bVar1) {
    bVar1 = Deserializer_readInteger(param_1,param_2 + 1);
    if (bVar1) {
      local_c = 0;
      bVar1 = Deserializer_readInteger(param_1,&local_c);
      if (bVar1) {
        *(bool *)(param_2 + 2) = local_c != 0;
        local_8 = 0;
        bVar1 = Deserializer_readInteger(param_1,&local_8);
        if (bVar1) {
          *(bool *)(param_2 + 3) = local_8 != 0;
          bVar1 = Deserializer_readString(param_1,param_2 + 4);
          if (bVar1) {
            local_4 = param_1;
            bVar1 = Deserializer_readIntegerVector(&local_4,param_2 + 0xb);
            return bVar1;
          }
        }
      }
    }
  }
  return false;
}


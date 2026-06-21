// addr: 0x0138b110
// name: FUN_0138b110
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_0138b110(int param_1)

{
  undefined4 key_;
  
                    /* Gets a value derived from the object field at +0x40 and stores/maps this
                       object in a game int map keyed by that value. */
  key_ = FUN_0135ff50(*(undefined4 *)(param_1 + 0x40));
  Game_IntMap_setValue(key_,param_1);
  return key_;
}


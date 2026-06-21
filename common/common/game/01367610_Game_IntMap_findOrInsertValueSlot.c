// addr: 0x01367610
// name: Game_IntMap_findOrInsertValueSlot
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall Game_IntMap_findOrInsertValueSlot(void *param_1,uint *param_2)

{
  uint *extraout_EAX;
  uint uVar1;
  uint uVar2;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
                    /* Returns the value slot for an integer-keyed tree entry, inserting a node
                       first when lower_bound reaches end. Evidence: lower-bound helper, insert
                       helper, and return of node+0xc payload. */
  FUN_01354f70(&local_14,param_2);
  uVar2 = local_14;
  local_8 = *(uint *)((int)param_1 + 8);
  if ((local_14 == 0) || (local_14 != (int)param_1 + 4U)) {
    FUN_00d83c2d();
  }
  uVar1 = local_10;
  if (local_10 == local_8) {
    local_14 = *param_2;
    local_10 = 0;
    Game_IntMap_findOrInsertValueSlot_impl(param_1,&local_c,&local_14);
    uVar2 = *extraout_EAX;
    uVar1 = extraout_EAX[1];
  }
  if (uVar2 == 0) {
    FUN_00d83c2d();
  }
  if (uVar1 == *(uint *)(uVar2 + 4)) {
    FUN_00d83c2d();
  }
  return uVar1 + 0xc;
}


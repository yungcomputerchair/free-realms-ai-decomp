// addr: 0x01410740
// name: FUN_01410740
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_01410740(int param_1)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  
                    /* Gets a play element's game zone collection and returns a checked zone
                       pointer; exact method name is unclear. */
  pvVar2 = Game_getZoneCollection(*(void **)(param_1 + 4));
  uVar3 = *(uint *)((int)pvVar2 + 4);
  if (*(uint *)((int)pvVar2 + 8) < uVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    uVar1 = *(uint *)((int)pvVar2 + 8);
    if (uVar1 < *(uint *)((int)pvVar2 + 4)) {
      FUN_00d83c2d();
    }
    if (uVar3 == uVar1) break;
    if (*(uint *)((int)pvVar2 + 8) <= uVar3) {
      FUN_00d83c2d();
    }
    PlayElement_getGame();
    if (*(uint *)((int)pvVar2 + 8) <= uVar3) {
      FUN_00d83c2d();
    }
    uVar3 = uVar3 + 4;
  }
  return 1;
}


// addr: 0x0138e690
// name: FUN_0138e690
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_0138e690(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  
                    /* Iterates a vector of polymorphic objects and calls virtual method +0x68 on
                       each with the supplied argument, returning false on the first object that
                       rejects it and true if all accept. Exact class is not identifiable from this
                       context. */
  puVar1 = *(undefined4 **)(param_2 + 8);
  if (puVar1 < *(undefined4 **)(param_2 + 4)) {
    FUN_00d83c2d();
  }
  puVar3 = *(undefined4 **)(param_2 + 4);
  if (*(undefined4 **)(param_2 + 8) < puVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_2 == 0) {
      FUN_00d83c2d();
    }
    if (puVar3 == puVar1) {
      return 1;
    }
    if (param_2 == 0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(param_2 + 8) <= puVar3) {
      FUN_00d83c2d();
    }
    cVar2 = (**(code **)(*(int *)*puVar3 + 0x68))(param_1);
    if (cVar2 == '\0') break;
    if (*(undefined4 **)(param_2 + 8) <= puVar3) {
      FUN_00d83c2d();
    }
    puVar3 = puVar3 + 1;
  }
  return 0;
}


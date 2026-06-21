// addr: 0x013673e0
// name: FUN_013673e0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_013673e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  piVar1 = *(int **)(param_1 + 0x10c);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (param_1 == -0x108) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) break;
    if (param_1 == -0x108) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)(param_1 + 0x10c)) {
      FUN_00d83c2d();
    }
    uVar3 = piVar2[6];
    if (uVar3 < (uint)piVar2[5]) {
      FUN_00d83c2d();
    }
    uVar4 = piVar2[5];
    if ((uint)piVar2[6] < uVar4) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (piVar2 == (int *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if (uVar4 == uVar3) break;
      if (piVar2 == (int *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if ((uint)piVar2[6] <= uVar4) {
        FUN_00d83c2d();
      }
      if (*(int *)(uVar4 + 4) != 0) {
        if ((uint)piVar2[6] <= uVar4) {
          FUN_00d83c2d();
        }
        if (*(undefined4 **)(uVar4 + 4) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(uVar4 + 4))(1);
        }
      }
      if ((uint)piVar2[6] <= uVar4) {
        FUN_00d83c2d();
      }
      uVar4 = uVar4 + 8;
    }
    FUN_0134a830();
  }
  FUN_01362000(*(undefined4 *)(*(int *)(param_1 + 0x10c) + 4));
  *(int *)(*(int *)(param_1 + 0x10c) + 4) = *(int *)(param_1 + 0x10c);
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(int *)(*(int *)(param_1 + 0x10c) + 8) = *(int *)(param_1 + 0x10c);
  return;
}


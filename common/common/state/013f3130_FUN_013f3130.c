// addr: 0x013f3130
// name: FUN_013f3130
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_013f3130(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 local_8 [8];
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  if ((*(void **)(param_1 + 0x18) != (void *)0x0) &&
     (uVar5 = StateMachine_getSerializeFlags(*(void **)(param_1 + 0x18)), uVar5 == param_2)) {
    return *(undefined4 *)(param_1 + 0x18);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 < *(undefined4 **)(param_1 + 0xc)) {
    FUN_00d83c2d();
  }
  puVar7 = *(undefined4 **)(param_1 + 0xc);
  if (*(undefined4 **)(param_1 + 0x10) < puVar7) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_1 == -8) {
      FUN_00d83c2d();
    }
    if (puVar7 == puVar1) break;
    if (param_1 == -8) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(param_1 + 0x10) <= puVar7) {
      FUN_00d83c2d();
    }
    uVar5 = StateMachine_getSerializeFlags((void *)*puVar7);
    if (uVar5 == param_2) {
      if (*(undefined4 **)(param_1 + 0x10) <= puVar7) {
        FUN_00d83c2d();
      }
      return *puVar7;
    }
    if (*(undefined4 **)(param_1 + 0x10) <= puVar7) {
      FUN_00d83c2d();
    }
    puVar7 = puVar7 + 1;
  }
  piVar6 = (int *)FUN_013f2ab0(local_8,&param_2);
  iVar2 = *piVar6;
  iVar3 = piVar6[1];
  iVar4 = *(int *)(param_1 + 0x10c);
  if ((iVar2 == 0) || (iVar2 != param_1 + 0x108)) {
    FUN_00d83c2d();
  }
  if (iVar3 != iVar4) {
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (iVar3 == *(int *)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    return *(undefined4 *)(iVar3 + 0x10);
  }
  return 0;
}


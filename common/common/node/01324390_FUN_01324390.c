// addr: 0x01324390
// name: FUN_01324390
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_01324390(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_8;
  int local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  FUN_013144f0(&local_8,&param_2);
  iVar1 = *(int *)(param_1 + 0x68);
  if (param_1 + 100 != local_8) {
    FUN_00d83c2d();
  }
  if (iVar1 != local_4) {
    if (local_8 == 0) {
      FUN_00d83c2d();
    }
    if (local_4 == *(int *)(local_8 + 4)) {
      FUN_00d83c2d();
    }
    if (*(int *)(local_4 + 0x10) != 0) {
      if (local_4 == *(int *)(local_8 + 4)) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(local_4 + 0x10) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(local_4 + 0x10))(1);
      }
      FUN_012b3d70(&local_8,local_8,local_4);
    }
    return 1;
  }
  return 0;
}


// addr: 0x00658b1f
// name: ObjectHierarchy_resolveChildPath
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall ObjectHierarchy_resolveChildPath(int param_1,void *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  uint local_8;
  
                    /* Resolves a sequence of ids through nested virtual child lookups; empty
                       sequences dispatch directly to the root object, while any failed intermediate
                       lookup returns null. */
  iVar1 = StdVector_size(param_2);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*(int *)(param_1 + 0xe8) + 0x1c))(param_3);
  }
  else {
    iVar1 = *(int *)(param_1 + 0xe8);
    puVar3 = (undefined4 *)StdVectorDword_at_005db353(param_2,0);
    piVar4 = (int *)(**(code **)(iVar1 + 0x1c))(*puVar3);
    FUN_0064fb0b(local_c);
    uVar2 = FUN_004cd10a();
    if (piVar4 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(*piVar4 + 8))(uVar2,0);
    }
    if (iVar1 == 0) {
LAB_00658c05:
      uVar2 = 0;
    }
    else {
      local_8 = 1;
      uVar5 = StdVector_size(param_2);
      if (1 < uVar5) {
        do {
          iVar1 = *(int *)(iVar1 + 0x70);
          puVar3 = (undefined4 *)StdVectorDword_at_005db353(param_2,local_8);
          piVar4 = (int *)(**(code **)(iVar1 + 0x1c))(*puVar3);
          FUN_0064fb0b(local_10);
          uVar2 = FUN_004cd10a();
          if (piVar4 == (int *)0x0) {
            iVar1 = 0;
          }
          else {
            iVar1 = (**(code **)(*piVar4 + 8))(uVar2,0);
          }
          if (iVar1 == 0) goto LAB_00658c05;
          local_8 = local_8 + 1;
          uVar5 = StdVector_size(param_2);
        } while (local_8 < uVar5);
      }
      uVar2 = (**(code **)(*(int *)(iVar1 + 0x70) + 0x1c))(param_3);
    }
  }
  return uVar2;
}


// addr: 0x0042b2c9
// name: FUN_0042b2c9
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_0042b2c9(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_4;
  
                    /* Lazily resolves/creates and caches an object at this+0x44 using a resource
                       stored at this+0x48, replacing any previous cached object with
                       reference-counted release/addref calls. The exact UI class or resource type
                       is not evident. */
  if (((*(int *)(param_1 + 0x44) == 0) && (**(int **)(param_1 + 0x48) != 0)) &&
     (local_4 = param_1, piVar1 = (int *)thunk_FUN_00409711(), piVar1 != (int *)0x0)) {
    FUN_00406320(&local_4);
    uVar2 = FUN_004cd10a();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x6c))((undefined4 *)(param_1 + 0x48),1);
    piVar3 = (int *)0x0;
    if (piVar1 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar1 + 8))(uVar2,0);
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))();
    }
    if (*(int **)(param_1 + 0x44) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x44) + 0x10))(0);
    }
    *(int **)(param_1 + 0x44) = piVar3;
    if (piVar3 != (int *)0x0) {
      FUN_004d83cb();
      FUN_0042b0af();
    }
  }
  return *(undefined4 *)(param_1 + 0x44);
}


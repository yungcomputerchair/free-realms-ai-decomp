// addr: 0x0078f4e0
// name: AnimationResource_getOrCreateKeySet
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall AnimationResource_getOrCreateKeySet(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
                    /* Returns a refcounted key/resource object based on a mode field: caches one
                       for modes 1/3, creates fresh for mode 2 variant, otherwise returns null. */
  iVar1 = *(int *)(*(int *)(param_1 + 0x38) + 0x50);
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      uVar2 = FUN_007c8f90();
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
    }
    piVar3 = (int *)(*(int *)(param_1 + 0x3c) + 4);
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    return *(undefined4 *)(param_1 + 0x3c);
  }
  if (iVar1 != 2) {
    if (iVar1 != 3) {
      return 0;
    }
    if (*(int *)(param_1 + 0x3c) == 0) {
      uVar2 = FUN_007c8f90();
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
    }
    piVar3 = (int *)(*(int *)(param_1 + 0x3c) + 4);
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    return *(undefined4 *)(param_1 + 0x3c);
  }
  if (*(int *)(param_1 + 0x44) == 2) {
    uVar2 = FUN_007c8f90();
    return uVar2;
  }
  uVar2 = FUN_0078f4b0();
  return uVar2;
}


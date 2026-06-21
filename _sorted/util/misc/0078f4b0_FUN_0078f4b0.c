// addr: 0x0078f4b0
// name: FUN_0078f4b0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_0078f4b0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
                    /* Lazy-creates a playlist iterator/resource at offset 0x3c, increments its
                       reference count, and returns it. No class evidence, so left unnamed. */
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar1 = FUN_007c8f90();
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
  }
  piVar2 = (int *)(*(int *)(param_1 + 0x3c) + 4);
  LOCK();
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 0x3c);
}


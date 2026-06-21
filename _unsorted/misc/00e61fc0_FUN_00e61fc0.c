// addr: 0x00e61fc0
// name: FUN_00e61fc0
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00e61fc0(undefined4 *param_1)

{
  *param_1 = T4GlobalProfiler::vftable;
  FUN_00e61600();
  if ((void *)param_1[1] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  *param_1 = T4MemoryProfiler::vftable;
  return;
}


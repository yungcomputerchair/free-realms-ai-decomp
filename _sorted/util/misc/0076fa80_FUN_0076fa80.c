// addr: 0x0076fa80
// name: FUN_0076fa80
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_0076fa80(int param_1)

{
  void *this;
  
                    /* If a nested runtime object and handle are present, invokes FUN_010a4850 on
                       the handle using state from offsets 0x130 and 0x4b8. No class evidence, so
                       left unnamed. */
  if (**(int **)(param_1 + 0x130) == 0) {
    this = (void *)0x0;
  }
  else {
    this = *(void **)(**(int **)(param_1 + 0x130) + 0x84);
  }
  if ((*(void **)(param_1 + 0x4b8) != (void *)0x0) && (this != (void *)0x0)) {
    MaterialParameterMap_applyOverrides(this,*(void **)(param_1 + 0x4b8));
  }
  return;
}


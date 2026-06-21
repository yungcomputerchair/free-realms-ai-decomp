// addr: 0x0153aadb
// name: FUN_0153aadb
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_0153aadb(void)

{
  void *_Memory;
  LONG *Target;
  
  Target = (LONG *)&DAT_01cbee20;
  do {
    _Memory = (void *)InterlockedExchange(Target,0);
    if (_Memory != (void *)0x0) {
      FUN_00d91fcc(*(undefined4 *)((int)_Memory + 8));
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    Target = Target + 1;
  } while ((int)Target < 0x1cbef18);
  return;
}


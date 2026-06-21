// addr: 0x00d00380
// name: FUN_00d00380
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00d00380(undefined4 *param_1)

{
  undefined4 *_Memory;
  int iVar1;
  int *piVar2;
  
                    /* Destroys a bucketed table by walking bucket pages, marking and freeing any
                       allocated entries, clearing slots, freeing the page, and releasing the
                       underlying resource. No class evidence, so left unnamed. */
  piVar2 = param_1 + 2;
  iVar1 = 0x80;
  while (*piVar2 == 0) {
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) {
      FUN_006be300(*param_1);
      *param_1 = 0;
      return;
    }
  }
  iVar1 = 0;
  do {
    if (*(int *)(*piVar2 + iVar1) != 0) {
      _Memory = *(undefined4 **)(*piVar2 + iVar1);
      if (_Memory != (undefined4 *)0x0) {
        *_Memory = 0xffffffff;
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(undefined4 *)(iVar1 + *piVar2) = 0;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x800);
                    /* WARNING: Subroutine does not return */
  _free((void *)*piVar2);
}


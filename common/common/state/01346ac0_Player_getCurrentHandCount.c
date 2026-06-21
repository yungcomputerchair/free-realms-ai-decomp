// addr: 0x01346ac0
// name: Player_getCurrentHandCount
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int Player_getCurrentHandCount(void) */

int Player_getCurrentHandCount(void)

{
  int *piVar1;
  int iVar2;
  void *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Queries a manager for a vector/list and returns the number of 32-bit entries.
                       Nearby draw-up helper compares this count to 8, suggesting a current
                       hand/card count. */
  puStack_8 = &LAB_0167d058;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = 0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  piVar1 = (int *)FUN_0139d7c0(DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  (**(code **)(*piVar1 + 0x34))(&local_1c);
  if (local_1c == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = local_18 - (int)local_1c >> 2;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (local_1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_1c);
  }
  ExceptionList = local_10;
  return iVar2;
}


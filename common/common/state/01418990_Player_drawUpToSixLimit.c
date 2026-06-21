// addr: 0x01418990
// name: Player_drawUpToSixLimit
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Player_drawUpToSixLimit(void * this) */

bool __fastcall Player_drawUpToSixLimit(void *this)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  void *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Queries a list/vector count and, when fewer than 6 entries are present, calls
                       this->vtable[0x78] with the deficit. Likely fills/draws toward a six-item
                       limit, but no strings identify the field. */
  puStack_8 = &LAB_016933f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = 0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  piVar2 = (int *)FUN_0139d7c0(DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  (**(code **)(*piVar2 + 0x34))(&local_1c);
  if (local_1c == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = local_18 - (int)local_1c >> 2;
  }
  if (6 - iVar3 < 1) {
    puStack_8 = (undefined1 *)0xffffffff;
    if (local_1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_1c);
    }
    bVar1 = false;
  }
  else {
    (**(code **)(*(int *)this + 0x78))(6 - iVar3);
    puStack_8 = (undefined1 *)0xffffffff;
    if (local_1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_1c);
    }
    bVar1 = true;
  }
  ExceptionList = local_10;
  return bVar1;
}


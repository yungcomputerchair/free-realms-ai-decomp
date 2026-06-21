// addr: 0x012d9380
// name: StringRangeTree_findOrEmpty
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StringRangeTree_findOrEmpty(void * this, void * result, void * key) */

void * __thiscall StringRangeTree_findOrEmpty(void *this,void *result,void *key)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int local_24;
  int local_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Looks up a string/range entry in a checked tree and returns the entry string;
                       if absent it constructs and clears an empty local string range. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01670c81;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  FUN_012d7180(&local_24,&key);
  iVar1 = *(int *)((int)this + 0x28);
  if ((int)this + 0x24 != local_24) {
    FUN_00d83c2d(uVar3);
  }
  if (iVar1 == local_20) {
    key = (void *)0x0;
    piVar4 = (int *)FUN_012d7180(local_1c,&key);
    iVar1 = *piVar4;
    local_20 = *(int *)((int)this + 0x28);
    iVar2 = piVar4[1];
    if ((int)this + 0x24 != iVar1) {
      FUN_00d83c2d(uVar3);
    }
    if (local_20 == iVar2) {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_4 = 1;
      FUN_01246d00(local_1c);
      local_4 = local_4 & 0xffffff00;
      StdVector_StdStringRange_clear(local_1c);
    }
    else {
      if (iVar1 == 0) {
        FUN_00d83c2d(uVar3);
      }
      if (iVar2 == *(int *)(iVar1 + 4)) {
        FUN_00d83c2d();
      }
      FUN_01246d00(iVar2 + 0x10);
    }
  }
  else {
    if (local_24 == 0) {
      FUN_00d83c2d(uVar3);
    }
    if (local_20 == *(int *)(local_24 + 4)) {
      FUN_00d83c2d(uVar3);
    }
    FUN_01246d00(local_20 + 0x10);
  }
  ExceptionList = local_c;
  return result;
}


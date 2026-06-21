// addr: 0x012d8da0
// name: PropertyMap_copyStringValueOrDefault
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 PropertyMap_copyStringValueOrDefault(void * this, void * outValue,
   void * key) */

void * __thiscall PropertyMap_copyStringValueOrDefault(void *this,void *outValue,void *key)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Looks up a string value in a property map/tree by key, falls back to key 0
                       when the requested key is absent, and copies the found string into the output
                       string. Evidence is the lower-bound helper, RB-tree end checks, fallback
                       param_3=0, and final string-copy/destructor call on the node payload. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01670af1;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  piVar5 = (int *)FUN_012d70a0(local_1c,&key);
  iVar1 = *piVar5;
  iVar2 = piVar5[1];
  iVar3 = *(int *)((int)this + 0x1c);
  if ((int)this + 0x18 != iVar1) {
    FUN_00d83c2d(uVar4);
  }
  if (iVar3 == iVar2) {
    key = (void *)0x0;
    piVar5 = (int *)FUN_012d70a0(local_1c,&key);
    iVar1 = *piVar5;
    iVar2 = piVar5[1];
    iVar3 = *(int *)((int)this + 0x1c);
    if ((int)this + 0x18 != iVar1) {
      FUN_00d83c2d(uVar4);
    }
    if (iVar3 == iVar2) {
      local_18 = (void *)0x0;
      local_14 = 0;
      local_10 = 0;
      local_4 = 1;
      FUN_012c7fe0(local_1c);
      local_4 = local_4 & 0xffffff00;
      if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_18);
      }
    }
    else {
      if (iVar1 == 0) {
        FUN_00d83c2d(uVar4);
      }
      if (iVar2 == *(int *)(iVar1 + 4)) {
        FUN_00d83c2d();
      }
      FUN_012c7fe0(iVar2 + 0x10);
    }
  }
  else {
    if (iVar1 == 0) {
      FUN_00d83c2d(uVar4);
    }
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d(uVar4);
    }
    FUN_012c7fe0(iVar2 + 0x10);
  }
  ExceptionList = local_c;
  return outValue;
}


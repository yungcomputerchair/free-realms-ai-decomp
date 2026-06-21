// addr: 0x012dadc0
// name: PropertyTree21_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyTree21_ctor(int tree) */

int __fastcall PropertyTree21_ctor(int tree)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an empty tree by allocating/constructing a header node through
                       FUN_012d6cc0, marking sentinel flag +0x21, self-linking it, and setting size
                       to zero. It is the constructor counterpart of 012dad50. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01670f98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_012d6cc0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(int *)(tree + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(int *)(*(int *)(tree + 4) + 4) = *(int *)(tree + 4);
  *(undefined4 *)*(undefined4 *)(tree + 4) = *(undefined4 *)(tree + 4);
  *(int *)(*(int *)(tree + 4) + 8) = *(int *)(tree + 4);
  *(undefined4 *)(tree + 8) = 0;
  ExceptionList = local_c;
  return tree;
}


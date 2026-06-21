// addr: 0x012bbc20
// name: PropertyTree15_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyTree15_ctor(int tree) */

int __fastcall PropertyTree15_ctor(int tree)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a tree by constructing a header node through FUN_012badd0,
                       marking its sentinel flag at +0x15, self-linking parent/left/right, and
                       clearing the size. This is the standard empty red-black tree setup. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166db78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_012badd0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(int *)(tree + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(tree + 4) + 4) = *(int *)(tree + 4);
  *(undefined4 *)*(undefined4 *)(tree + 4) = *(undefined4 *)(tree + 4);
  *(int *)(*(int *)(tree + 4) + 8) = *(int *)(tree + 4);
  *(undefined4 *)(tree + 8) = 0;
  ExceptionList = local_c;
  return tree;
}


// addr: 0x0137f280
// name: PropertyTree15B_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyTree15B_ctor(int tree) */

int __fastcall PropertyTree15B_ctor(int tree)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an empty tree with a header node from FUN_0137b6d0, marks sentinel
                       byte +0x15, self-links parent/left/right, and clears the size. This is the
                       constructor counterpart to 0137f1a0. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01682268;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0137b6d0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(int *)(tree + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(tree + 4) + 4) = *(int *)(tree + 4);
  *(undefined4 *)*(undefined4 *)(tree + 4) = *(undefined4 *)(tree + 4);
  *(int *)(*(int *)(tree + 4) + 8) = *(int *)(tree + 4);
  *(undefined4 *)(tree + 8) = 0;
  ExceptionList = local_c;
  return tree;
}


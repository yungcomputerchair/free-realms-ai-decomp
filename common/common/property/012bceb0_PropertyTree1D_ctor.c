// addr: 0x012bceb0
// name: PropertyTree1D_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyTree1D_ctor(int tree) */

int __fastcall PropertyTree1D_ctor(int tree)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an empty tree with a header node from FUN_012babb0, marks sentinel
                       byte +0x1d, self-links the header, and clears the element count. This is
                       another red-black tree template instantiation with a different node layout.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166de48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_012babb0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(int *)(tree + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(tree + 4) + 4) = *(int *)(tree + 4);
  *(undefined4 *)*(undefined4 *)(tree + 4) = *(undefined4 *)(tree + 4);
  *(int *)(*(int *)(tree + 4) + 8) = *(int *)(tree + 4);
  *(undefined4 *)(tree + 8) = 0;
  ExceptionList = local_c;
  return tree;
}


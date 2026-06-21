// addr: 0x012b84c0
// name: PropertyTree25Alt_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyTree25Alt_ctor(int tree) */

int __fastcall PropertyTree25Alt_ctor(int tree)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a tree container sentinel using FUN_012b1ca0, marks the node as
                       the end sentinel at +0x25, self-links it, and sets element count to zero.
                       This is the same container-constructor pattern as 012b7850 with a different
                       node constructor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166d798;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_012b1ca0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(int *)(tree + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x25) = 1;
  *(int *)(*(int *)(tree + 4) + 4) = *(int *)(tree + 4);
  *(undefined4 *)*(undefined4 *)(tree + 4) = *(undefined4 *)(tree + 4);
  *(int *)(*(int *)(tree + 4) + 8) = *(int *)(tree + 4);
  *(undefined4 *)(tree + 8) = 0;
  ExceptionList = local_c;
  return tree;
}


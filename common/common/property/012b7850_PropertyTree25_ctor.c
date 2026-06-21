// addr: 0x012b7850
// name: PropertyTree25_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyTree25_ctor(int tree) */

int __fastcall PropertyTree25_ctor(int tree)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a tree container by allocating its header/sentinel node, marking
                       the sentinel byte at offset 0x25, linking parent/left/right back to itself,
                       and clearing the size. The called allocator/constructor FUN_012b1d60 supplies
                       the header node. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166d618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_012b1d60(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(int *)(tree + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x25) = 1;
  *(int *)(*(int *)(tree + 4) + 4) = *(int *)(tree + 4);
  *(undefined4 *)*(undefined4 *)(tree + 4) = *(undefined4 *)(tree + 4);
  *(int *)(*(int *)(tree + 4) + 8) = *(int *)(tree + 4);
  *(undefined4 *)(tree + 8) = 0;
  ExceptionList = local_c;
  return tree;
}


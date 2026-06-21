// addr: 0x01487610
// name: RbTree_initHeader_01487610
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RbTree_initHeader_01487610(void * tree) */

void * __fastcall RbTree_initHeader_01487610(void *tree)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes another STL-like red-black tree header/sentinel. It allocates a
                       0x18-byte node, marks it as the header, self-links parent/left/right, and
                       zeroes the count. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a1408;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_014864f0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(int *)((int)tree + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)((int)tree + 4) + 4) = *(int *)((int)tree + 4);
  *(undefined4 *)*(undefined4 *)((int)tree + 4) = *(undefined4 *)((int)tree + 4);
  *(int *)(*(int *)((int)tree + 4) + 8) = *(int *)((int)tree + 4);
  *(undefined4 *)((int)tree + 8) = 0;
  ExceptionList = local_c;
  return tree;
}


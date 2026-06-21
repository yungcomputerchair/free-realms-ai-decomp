// addr: 0x01445590
// name: RbTree_initHeader
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RbTree_initHeader(void * tree) */

void * __fastcall RbTree_initHeader(void *tree)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes an STL-like red-black tree header/sentinel. It allocates a
                       0x18-byte node, marks it as the header, points parent/left/right links back
                       to itself, and zeroes the element count at tree+8. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016995e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_01443bf0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(int *)((int)tree + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)((int)tree + 4) + 4) = *(int *)((int)tree + 4);
  *(undefined4 *)*(undefined4 *)((int)tree + 4) = *(undefined4 *)((int)tree + 4);
  *(int *)(*(int *)((int)tree + 4) + 8) = *(int *)((int)tree + 4);
  *(undefined4 *)((int)tree + 8) = 0;
  ExceptionList = local_c;
  return tree;
}


// addr: 0x00f987e0
// name: StdRbTree_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdRbTree_ctor(void * self) */

void * __fastcall StdRbTree_ctor(void *self)

{
  int iVar1;
  
                    /* Allocates and initializes a red-black-tree header/sentinel node, marks it
                       nil, and points parent/left/right back to itself. Initializes tree size to
                       zero. */
  iVar1 = FUN_00f94770();
  *(int *)((int)self + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x45) = 1;
  *(int *)(*(int *)((int)self + 4) + 4) = *(int *)((int)self + 4);
  *(undefined4 *)*(undefined4 *)((int)self + 4) = *(undefined4 *)((int)self + 4);
  *(int *)(*(int *)((int)self + 4) + 8) = *(int *)((int)self + 4);
  *(undefined4 *)((int)self + 8) = 0;
  return self;
}


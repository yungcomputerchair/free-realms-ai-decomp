// addr: 0x01352c40
// name: RbTreeNode25_allocHeader
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * RbTreeNode25_allocHeader(void) */

void * RbTreeNode25_allocHeader(void)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Allocates and initializes a 0x28-byte red-black-tree header/sentinel node for
                       the layout with flag bytes at 0x24/0x25. The decompiler dropped the return,
                       but callers use the allocated pointer. */
  local_8 = 0xffffffff;
  puStack_c = &LAB_0167d710;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = Mem_Alloc(0x28);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 9) = 1;
  *(undefined1 *)((int)puVar1 + 0x25) = 0;
  ExceptionList = local_10;
  return puVar1;
}


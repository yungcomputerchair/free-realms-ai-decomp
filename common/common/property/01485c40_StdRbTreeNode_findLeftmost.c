// addr: 0x01485c40
// name: StdRbTreeNode_findLeftmost
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdRbTreeNode_findLeftmost(int * node) */

void __cdecl StdRbTreeNode_findLeftmost(int *node)

{
  char cVar1;
  int *piVar2;
  
                    /* Walks down left-child links until a sentinel/nil node is found. The void
                       decompile likely lost the cursor return value used by caller 014868c0. */
  piVar2 = (int *)*node;
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}


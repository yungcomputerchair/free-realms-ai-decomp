// addr: 0x012b58e0
// name: PropertyTree_destroyNodesAndStorage
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyTree_destroyNodesAndStorage(void * tree) */

void __fastcall PropertyTree_destroyNodesAndStorage(void *tree)

{
  void *local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys nodes reachable from the tree root through FUN_012b4650, then frees
                       the tree header/sentinel allocation at offset +4. Evidence is the call using
                       **(this+4) and the tree header followed by _free(*(this+4)). */
  puStack_8 = &LAB_0166d138;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  local_14[0] = tree;
  FUN_012b4650(local_14,tree,**(undefined4 **)((int)tree + 4),tree,*(undefined4 **)((int)tree + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)tree + 4));
}


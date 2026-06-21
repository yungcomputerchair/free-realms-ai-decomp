// addr: 0x0135b420
// name: RbTree15_dtorFreeHeader_A
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RbTree15_dtorFreeHeader_A(void * tree) */

void __fastcall RbTree15_dtorFreeHeader_A(void *tree)

{
  undefined1 local_8 [8];
  
                    /* Destroys a red-black tree by clearing nodes through 01358e90 and then freeing
                       the header pointer at tree+4. The node layout appears to use the 0x15
                       sentinel-byte family. */
  FUN_01358e90(local_8,tree,**(undefined4 **)((int)tree + 4),tree,*(undefined4 **)((int)tree + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)tree + 4));
}


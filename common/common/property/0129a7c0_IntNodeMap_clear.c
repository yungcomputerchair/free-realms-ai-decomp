// addr: 0x0129a7c0
// name: IntNodeMap_clear
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void IntNodeMap_clear(int map) */

void __fastcall IntNodeMap_clear(int map)

{
                    /* Clears a tree/map container by destroying all nodes below the header, then
                       resets header links and size to empty. Evidence is the call to a recursive
                       node destroy helper on header->parent followed by header left/right/self
                       reset and size zero. */
  StdRbTreeNode32_eraseRightChain(*(void **)(*(int *)(map + 4) + 4));
  *(int *)(*(int *)(map + 4) + 4) = *(int *)(map + 4);
  *(undefined4 *)(map + 8) = 0;
  *(undefined4 *)*(undefined4 *)(map + 4) = *(undefined4 *)(map + 4);
  *(int *)(*(int *)(map + 4) + 8) = *(int *)(map + 4);
  return;
}


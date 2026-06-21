// addr: 0x013991b0
// name: FUN_013991b0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x013991e1) */
/* Setting prototype: void destroyObjectPairVector(int object_) */

void __fastcall destroyObjectPairVector(int object_)

{
  void *pvVar1;
  void *unaff_EDI;
  void *tree;
  void *in_stack_00000004;
  
                    /* Destroys each 8-byte element in the vector at object+0x108..0x10c using
                       helper 0051ca73. */
  tree = *(void **)(object_ + 0x108);
  if (*(void **)(object_ + 0x10c) < tree) {
    FUN_00d83c2d();
  }
  while( true ) {
    pvVar1 = *(void **)(object_ + 0x10c);
    if (pvVar1 < *(void **)(object_ + 0x108)) {
      FUN_00d83c2d();
    }
    if (tree == pvVar1) break;
    if (*(void **)(object_ + 0x10c) <= tree) {
      FUN_00d83c2d();
    }
    StdRbTree_insertValueMaybeRebalance(in_stack_00000004,tree,unaff_EDI);
    if (*(void **)(object_ + 0x10c) <= tree) {
      FUN_00d83c2d();
    }
    tree = (void *)((int)tree + 8);
  }
  return;
}


// addr: 0x0136bd40
// name: Game_IntKeyTree_findIterator
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * Game_IntKeyTree_findIterator(undefined4 * outPair, undefined4
   tree_) */

undefined4 * Game_IntKeyTree_findIterator(undefined4 *outPair,undefined4 tree_)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_c [12];
  
                    /* Wraps FUN_013696d0 and copies the resulting two-word iterator/range pair to
                       the caller. */
  puVar2 = (undefined4 *)FUN_013696d0(local_c,tree_);
  uVar1 = *puVar2;
  outPair[1] = puVar2[1];
  *outPair = uVar1;
  return outPair;
}


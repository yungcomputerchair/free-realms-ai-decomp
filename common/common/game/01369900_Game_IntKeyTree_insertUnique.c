// addr: 0x01369900
// name: Game_IntKeyTree_insertUnique
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_IntKeyTree_insertUnique(int tree_, undefined4 * outIt, int * key) */

void __thiscall Game_IntKeyTree_insertUnique(void *this,int tree_,undefined4 *outIt,int *key)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_8 [2];
  
                    /* Performs a lower_bound-style walk over an integer-keyed rb-tree,
                       inserts/fetches a node through FUN_01368b20, and returns an iterator pair
                       with success flag set. */
  puVar3 = *(undefined4 **)((int)this + 4);
  local_8[0] = CONCAT31(local_8[0]._1_3_,1);
  if (*(char *)((int)puVar3[1] + 0x25) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      local_8[0] = CONCAT31(local_8[0]._1_3_,(int)*outIt < (int)puVar3[3]);
      if ((int)*outIt < (int)puVar3[3]) {
        puVar2 = (undefined4 *)*puVar3;
      }
      else {
        puVar2 = (undefined4 *)puVar3[2];
      }
    } while (*(char *)((int)puVar2 + 0x25) == '\0');
  }
  puVar3 = (undefined4 *)FUN_01368b20(local_8,local_8[0],puVar3,outIt);
  uVar1 = puVar3[1];
  *(undefined4 *)tree_ = *puVar3;
  *(undefined4 *)(tree_ + 4) = uVar1;
  *(undefined1 *)(tree_ + 8) = 1;
  return;
}


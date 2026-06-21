// addr: 0x006abb27
// name: StdTree_lowerBound_IntKey_Node21_006abb27
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdTree_lowerBound_IntKey_Node21_006abb27(void * tree, int * key) */

void * __thiscall StdTree_lowerBound_IntKey_Node21_006abb27(void *this,void *tree,int *key)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
                    /* Finds the first tree node whose integer key is not less than the supplied
                       key, returning the candidate/header node. */
  puVar2 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((int)puVar2[3] < *(int *)tree) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}


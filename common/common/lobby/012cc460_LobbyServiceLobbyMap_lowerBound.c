// addr: 0x012cc460
// name: LobbyServiceLobbyMap_lowerBound
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyServiceLobbyMap_lowerBound(void * tree, void * outIter, int * key)
    */

void __thiscall LobbyServiceLobbyMap_lowerBound(void *this,void *tree,void *outIter,int *key)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  void *local_10;
  undefined4 *local_c;
  void *local_8;
  undefined4 *local_4;
  
                    /* Performs a lower_bound search in a red-black tree keyed by lobby id and
                       returns an iterator pair. The node sentinel flag is at offset 0x15. */
  local_c = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)local_c[1] + 0x15) == '\0') {
    puVar2 = (undefined4 *)local_c[1];
    do {
      if ((int)puVar2[3] < *(int *)outIter) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        local_c = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  local_10 = this;
  if ((local_c == *(undefined4 **)((int)this + 4)) || (*(int *)outIter < (int)local_c[3])) {
    local_8 = this;
    local_4 = *(undefined4 **)((int)this + 4);
    ppvVar4 = &local_8;
  }
  else {
    ppvVar4 = &local_10;
  }
  pvVar1 = ppvVar4[1];
  *(void **)tree = *ppvVar4;
  *(void **)((int)tree + 4) = pvVar1;
  return;
}


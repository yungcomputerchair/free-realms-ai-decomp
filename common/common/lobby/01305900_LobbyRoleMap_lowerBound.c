// addr: 0x01305900
// name: LobbyRoleMap_lowerBound
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyRoleMap_lowerBound(void * tree, void * outIter, int * roleId) */

void __thiscall LobbyRoleMap_lowerBound(void *this,void *tree,void *outIter,int *roleId)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  void *local_10;
  undefined4 *local_c;
  void *local_8;
  undefined4 *local_4;
  
                    /* Lower_bound helper for the lobby role map. It searches by role id and returns
                       the matching or insertion-position iterator. */
  local_c = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)local_c[1] + 0x21) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
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


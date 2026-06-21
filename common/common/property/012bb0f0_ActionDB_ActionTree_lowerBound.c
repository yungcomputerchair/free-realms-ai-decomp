// addr: 0x012bb0f0
// name: ActionDB_ActionTree_lowerBound
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActionDB_ActionTree_lowerBound(void * this, void * outPair, int * key) */

void __thiscall ActionDB_ActionTree_lowerBound(void *this,void *outPair,int *key)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  void *local_10;
  undefined4 *local_c;
  void *local_8;
  undefined4 *local_4;
  
                    /* Finds the lower_bound position for an integer key in the ActionDB ordered
                       tree. Evidence is the STL-style tree traversal comparing node key dword 3
                       with *key, and callers include ActionDB_registerAction. */
  local_c = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)local_c[1] + 0x15) == '\0') {
    puVar2 = (undefined4 *)local_c[1];
    do {
      if ((int)puVar2[3] < *key) {
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
  if ((local_c == *(undefined4 **)((int)this + 4)) || (*key < (int)local_c[3])) {
    local_8 = this;
    local_4 = *(undefined4 **)((int)this + 4);
    ppvVar4 = &local_8;
  }
  else {
    ppvVar4 = &local_10;
  }
  pvVar1 = ppvVar4[1];
  *(void **)outPair = *ppvVar4;
  *(void **)((int)outPair + 4) = pvVar1;
  return;
}


// addr: 0x012a2830
// name: MessageDB_IntTextMap_lowerBound
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MessageDB_IntTextMap_lowerBound(void * map, void * outIterator, int *
   key) */

void __thiscall MessageDB_IntTextMap_lowerBound(void *this,void *map,void *outIterator,int *key)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  void *local_10;
  undefined4 *local_c;
  void *local_8;
  undefined4 *local_4;
  
                    /* Finds the lower_bound iterator for an integer key in the message-text map and
                       writes the map/iterator pair to the output. Callers compare the returned
                       iterator to map end before updating cache entries. */
  local_c = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)local_c[1] + 0x2d) == '\0') {
    puVar2 = (undefined4 *)local_c[1];
    do {
      if ((int)puVar2[3] < *(int *)outIterator) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        local_c = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x2d) == '\0');
  }
  local_10 = this;
  if ((local_c == *(undefined4 **)((int)this + 4)) || (*(int *)outIterator < (int)local_c[3])) {
    local_8 = this;
    local_4 = *(undefined4 **)((int)this + 4);
    ppvVar4 = &local_8;
  }
  else {
    ppvVar4 = &local_10;
  }
  pvVar1 = ppvVar4[1];
  *(void **)map = *ppvVar4;
  *(void **)((int)map + 4) = pvVar1;
  return;
}


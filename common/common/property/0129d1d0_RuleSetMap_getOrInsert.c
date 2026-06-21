// addr: 0x0129d1d0
// name: RuleSetMap_getOrInsert
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RuleSetMap_getOrInsert(void * map, int * key) */

void * __thiscall RuleSetMap_getOrInsert(void *this,void *map,int *key)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *unaff_EDI;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8 [8];
  
                    /* std::map<int,RuleSetRecord>::operator[]-style helper. It lower-bounds an
                       integer key, inserts a default two-word record through FUN_0129cdb0 when
                       missing, and returns the mapped storage. */
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((int)puVar1[3] < *(int *)map) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 == *(undefined4 **)((int)this + 4)) || (*(int *)map < (int)puVar3[3])) {
    local_10 = *(undefined4 *)map;
    local_c = 0;
    puVar3 = RuleSetMap_insertOrFindIntKey(this,local_8,this,puVar3,&local_10,unaff_EDI);
    this = (void *)*puVar3;
    puVar3 = (undefined4 *)puVar3[1];
  }
  if (this == (void *)0x0) {
    FUN_00d83c2d();
  }
  if (puVar3 == *(undefined4 **)((int)this + 4)) {
    FUN_00d83c2d();
  }
  return puVar3 + 4;
}


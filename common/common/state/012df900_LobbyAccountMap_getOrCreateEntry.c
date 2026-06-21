// addr: 0x012df900
// name: LobbyAccountMap_getOrCreateEntry
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyAccountMap_getOrCreateEntry(void * map, int * accountId) */

void * __thiscall LobbyAccountMap_getOrCreateEntry(void *this,void *map,int *accountId)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8 [8];
  
                    /* Finds or inserts an account-id keyed node with default value 0 and returns
                       the value slot. Used by lobby account initialization. */
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
    puVar3 = (undefined4 *)FUN_012df600(local_8,this,puVar3,&local_10);
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


// addr: 0x00684490
// name: Game_findObjectByShortId
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Game_findObjectByShortId(void * this, uint id, bool useLookup) */

void * __thiscall Game_findObjectByShortId(void *this,uint id,bool useLookup)

{
  char cVar1;
  int *piVar2;
  short *psVar3;
  void *pvVar4;
  int iVar5;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
                    /* Finds an object with a matching short id either by scanning a collection or
                       by asking a virtual lookup service. */
  if (useLookup) {
    pvVar4 = (void *)0x0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    cVar1 = (**(code **)(*(int *)this + 0x2dc))(local_1c,&local_c,id);
    if (cVar1 != '\0') {
      pvVar4 = (void *)ObjectHierarchy_resolveChildPath(local_1c,local_c);
    }
    StdVector_clearStorage(local_1c);
  }
  else {
    local_8 = (**(code **)(*(int *)((int)this + 0xe8) + 0x18))();
    iVar5 = 0;
    if (0 < local_8) {
      do {
        piVar2 = (int *)(**(code **)(*(int *)((int)this + 0xe8) + 0x1c))(iVar5);
        if (piVar2 != (int *)0x0) {
          psVar3 = (short *)(**(code **)(*piVar2 + 0x74))(&stack0x0000000a);
          if (*psVar3 == (short)id) {
            return piVar2;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_8);
    }
    pvVar4 = (void *)0x0;
  }
  return pvVar4;
}


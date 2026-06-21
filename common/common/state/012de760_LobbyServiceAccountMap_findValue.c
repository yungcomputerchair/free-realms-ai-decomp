// addr: 0x012de760
// name: LobbyServiceAccountMap_findValue
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyServiceAccountMap_findValue(void * map, int key_) */

void * __fastcall LobbyServiceAccountMap_findValue(void *map,int key_)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int *extraout_EAX;
  int *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Looks up a key in LobbyServiceAccountMap and returns the value at node+0x10
                       or null if absent. Evidence is identified lowerBound callee and account/lobby
                       callers. */
  LobbyServiceAccountMap_lowerBound(map,local_8,&stack0x00000004,unaff_EDI);
  pvVar1 = (void *)*extraout_EAX;
  iVar2 = extraout_EAX[1];
  iVar3 = *(int *)((int)map + 4);
  if ((pvVar1 == (void *)0x0) || (pvVar1 != map)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (pvVar1 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)((int)pvVar1 + 4)) {
      FUN_00d83c2d();
    }
    return *(void **)(iVar2 + 0x10);
  }
  return (void *)0x0;
}


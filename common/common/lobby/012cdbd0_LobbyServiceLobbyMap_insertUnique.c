// addr: 0x012cdbd0
// name: LobbyServiceLobbyMap_insertUnique
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyServiceLobbyMap_insertUnique(void * tree, void * outResult, void *
   keyValue) */

void __thiscall
LobbyServiceLobbyMap_insertUnique(void *this,void *tree,void *outResult,void *keyValue)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  void *local_8;
  undefined4 *local_4;
  
                    /* Implements unique insertion into the LobbyService lobby-id red-black tree: it
                       searches by key and either returns the existing iterator with false or
                       inserts a new node and reports success. Called by LobbyService registration
                       code. */
  puVar3 = *(undefined4 **)((int)this + 4);
  bVar4 = true;
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      bVar4 = *(int *)outResult < (int)puVar3[3];
      if (bVar4) {
        puVar2 = (undefined4 *)*puVar3;
      }
      else {
        puVar2 = (undefined4 *)puVar3[2];
      }
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  local_8 = this;
  local_4 = puVar3;
  if (bVar4) {
    if (puVar3 == (undefined4 *)**(int **)((int)this + 4)) {
      bVar4 = true;
      goto LAB_012cdc2c;
    }
    FUN_012cb500();
  }
  if (*(int *)outResult <= (int)local_4[3]) {
    *(void **)tree = local_8;
    *(undefined4 **)((int)tree + 4) = local_4;
    *(undefined1 *)((int)tree + 8) = 0;
    return;
  }
LAB_012cdc2c:
  puVar3 = (undefined4 *)FUN_012ccea0(&local_8,bVar4,puVar3,outResult);
  uVar1 = puVar3[1];
  *(undefined4 *)tree = *puVar3;
  *(undefined4 *)((int)tree + 4) = uVar1;
  *(undefined1 *)((int)tree + 8) = 1;
  return;
}


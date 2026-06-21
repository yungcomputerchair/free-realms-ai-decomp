// addr: 0x0090a890
// name: PlayerTitleDataMap_deserialize
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayerTitleDataMap_deserialize(void * this, void * reader) */

void __thiscall PlayerTitleDataMap_deserialize(void *this,void *reader)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
                    /* Clears a PlayerTitleData map, reads counted 16-byte title records, inserts
                       them into the 32-bucket map, then reads a trailing selected/current title id.
                       Called by BasePlayerTitlePacket_handler and SelfObject_ParseFromBlob. */
  iVar2 = *(int *)((int)this + 0xc);
  while (iVar2 != 0) {
    FUN_008bff10(iVar2);
    iVar2 = *(int *)((int)this + 0xc);
  }
  piVar1 = *(int **)((int)reader + 8) + 1;
  if (*(int **)((int)reader + 0xc) < piVar1) {
    iVar2 = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(int **)((int)reader + 8) = *(int **)((int)reader + 0xc);
  }
  else {
    iVar2 = **(int **)((int)reader + 8);
    *(int **)((int)reader + 8) = piVar1;
  }
  if (0 < iVar2) {
    do {
      uStack_10 = 0;
      uStack_c = 0;
      uStack_8 = 0;
      uStack_4 = 0;
      FUN_008e8640(reader);
      FUN_008fc6f0(&uStack_10,&uStack_10);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x98) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
    FUN_00b49a50();
    return;
  }
  *(undefined4 *)((int)this + 0x98) = **(undefined4 **)((int)reader + 8);
  *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  FUN_00b49a50();
  return;
}


// addr: 0x012aac20
// name: DeckDB_loadDeckFromStorage
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall DeckDB_loadDeckFromStorage(void *param_1,void *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *deck_name;
  void *pvStack_18;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Loads a deck from backing storage if present: checks existence, reads
                       serialized bytes into a packet/raw buffer, deserializes the deck, caches it
                       in the DeckDB map, and returns the deck pointer. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166c628;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = (**(code **)(**(int **)((int)param_1 + 0xc) + 0x10))
                    (param_2,DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  if (cVar1 != '\0') {
    PacketBuffer_init(&stack0xffffffdc);
    puStack_8 = (undefined1 *)0x0;
    deck_name = param_2;
    (**(code **)(**(int **)((int)param_1 + 0xc) + 0x14))(param_2,&stack0xffffffdc);
    uVar2 = DeckDB_deserializeDeckComponent(&stack0xffffffd4);
    puVar3 = (undefined4 *)DeckDB_getOrCreateDeckSlotByName(param_1,param_2,deck_name);
    *puVar3 = uVar2;
    RawBuffer_free(&stack0xffffffd4);
    ExceptionList = pvStack_18;
    return uVar2;
  }
  ExceptionList = pvStack_10;
  return 0;
}


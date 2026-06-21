// addr: 0x014e4020
// name: DeckDB_importDecksFromList
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DeckDB_importDecksFromList(void * deckList) */

bool __fastcall DeckDB_importDecksFromList(void *deckList)

{
  undefined4 *puVar1;
  int *this;
  bool bVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  bool local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Adds each deck in a list to DeckDB if missing, after copying property data,
                       then emits a completion command with opcode 0xc3. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016afa6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar3 = (void *)FUN_012aab80(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  FixedRecordVector_compactStringRecords(pvVar3);
  puVar1 = *(undefined4 **)((int)deckList + 0xc);
  if (puVar1 < *(undefined4 **)((int)deckList + 8)) {
    FUN_00d83c2d();
  }
  puVar6 = *(undefined4 **)((int)deckList + 8);
  local_11 = true;
  if (*(undefined4 **)((int)deckList + 0xc) < puVar6) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (deckList == (void *)0xfffffffc) {
      FUN_00d83c2d();
    }
    if (puVar6 == puVar1) break;
    if (deckList == (void *)0xfffffffc) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)deckList + 0xc) <= puVar6) {
      FUN_00d83c2d();
    }
    this = (int *)*puVar6;
    pvVar3 = Deck_getPropertyList(this);
    pvVar4 = (void *)FUN_012aab80();
    FixedRecordVector_removeRecordByString(pvVar4,pvVar3);
    pvVar3 = (void *)(**(code **)(*this + 0x74))();
    pvVar4 = (void *)FUN_012aab80();
    bVar2 = DeckDB_addDeckIfMissing(pvVar4,pvVar3);
    local_11 = (bool)(local_11 & bVar2);
    if (*(undefined4 **)((int)deckList + 0xc) <= puVar6) {
      FUN_00d83c2d();
    }
    puVar6 = puVar6 + 1;
  }
  pvVar3 = Mem_Alloc(0x14);
  uStack_4 = 0;
  if (pvVar3 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_012f9eb0();
  }
  uStack_4 = 0xffffffff;
  FUN_012f8c70(0xc3);
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(uVar5);
  ExceptionList = local_c;
  return local_11;
}


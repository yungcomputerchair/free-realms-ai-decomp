// addr: 0x014e4150
// name: DeckCommand_PopulateOnlineDeckData_serialize
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeckCommand_PopulateOnlineDeckData_serialize(void * this, void *
   serializer) */

void __thiscall DeckCommand_PopulateOnlineDeckData_serialize(void *this,void *serializer)

{
  int *piVar1;
  bool bVar2;
  uint value;
  int *unaff_EBX;
  int *piVar3;
  int *piVar4;
  
                    /* Serializes/debug-prints DeckCommand_PopulateOnlineDeckData, including base
                       DeckCommand data, deck count, and each optional deck entry. */
  (**(code **)(*(int *)this + 8))(serializer);
  DebugStream_writeCString(serializer,"Starting DeckCommand_PopulateOnlineDeckData\n");
  DeckCommand_serialize(this,serializer);
  DebugStream_writeCString(serializer,"NumberOfDecks: ");
  if (*(int *)((int)this + 8) == 0) {
    value = 0;
  }
  else {
    value = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
  }
  Serializer_appendInteger(serializer,value);
  piVar1 = *(int **)((int)this + 0xc);
  if (piVar1 < *(int **)((int)this + 8)) {
    FUN_00d83c2d();
  }
  piVar3 = *(int **)((int)this + 8);
  piVar4 = this;
  if (*(int **)((int)this + 0xc) < piVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if ((this == (void *)0xfffffffc) || ((int *)((int)this + 4) != piVar4 + 1)) {
      FUN_00d83c2d();
    }
    if (piVar3 == piVar1) break;
    if (this == (void *)0xfffffffc) {
      FUN_00d83c2d();
    }
    if (*(int **)((int)this + 0xc) <= piVar3) {
      FUN_00d83c2d();
    }
    piVar4 = (int *)*piVar3;
    if (piVar4 == (int *)0x0) {
      Serializer_appendInteger(serializer,1);
    }
    else {
      bVar2 = Serializer_appendInteger(serializer,0);
      if (bVar2) {
        (**(code **)(*piVar4 + 0x28))(serializer);
      }
    }
    if (*(int **)((int)this + 0xc) <= piVar3) {
      FUN_00d83c2d();
    }
    piVar3 = piVar3 + 1;
    piVar4 = unaff_EBX;
  }
  DebugStream_writeCString(serializer,"Ending DeckCommand_PopulateOnlineDeckData\n");
  (**(code **)(*piVar4 + 0xc))(serializer);
  return;
}


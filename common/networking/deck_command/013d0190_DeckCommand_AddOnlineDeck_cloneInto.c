// addr: 0x013d0190
// name: DeckCommand_AddOnlineDeck_cloneInto
// subsystem: common/networking/deck_command
// source (binary assert): common/networking/deck_command/DeckCommandAddOnlineDeck.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeckCommand_AddOnlineDeck_cloneInto(void * this, void * target) */

void __thiscall DeckCommand_AddOnlineDeck_cloneInto(void *this,void *target)

{
  void *target_00;
  void *_Dst;
  
                    /* Copies a DeckCommand_AddOnlineDeck into an already allocated target object:
                       validates target RTTI, invokes DeckCommand cloneInto, then duplicates the
                       payload buffer length and bytes. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &DeckCommand_AddOnlineDeck::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\deck_command\\DeckCommandAddOnlineDeck.cpp",0x41);
  }
  DeckCommand_cloneInto(target_00);
  *(undefined4 *)((int)target_00 + 4) = *(undefined4 *)((int)this + 4);
  _Dst = Mem_Alloc(*(uint *)((int)this + 4));
  *(void **)((int)target_00 + 8) = _Dst;
  _memcpy(_Dst,*(void **)((int)this + 8),*(size_t *)((int)this + 4));
  return;
}


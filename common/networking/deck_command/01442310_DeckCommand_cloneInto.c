// addr: 0x01442310
// name: DeckCommand_cloneInto
// subsystem: common/networking/deck_command
// source (binary assert): common/networking/deck_command/DeckCommand.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeckCommand_cloneInto(void * target) */

void DeckCommand_cloneInto(void *target)

{
  void *this;
  
                    /* Base DeckCommand clone helper: checks that the supplied object is a
                       DeckCommand and delegates to the NetworkCommand clone/copy helper. */
  this = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                              &DeckCommand::RTTI_Type_Descriptor,0);
  if (this == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\deck_command\\DeckCommand.cpp",0x1f);
  }
  NetworkCommand_cloneBaseFields(this);
  return;
}


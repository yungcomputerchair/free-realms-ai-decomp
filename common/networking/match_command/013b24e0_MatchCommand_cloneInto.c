// addr: 0x013b24e0
// name: MatchCommand_cloneInto
// subsystem: common/networking/match_command
// source (binary assert): common/networking/match_command/MatchCommand.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_cloneInto(void * this, void * target) */

void __thiscall MatchCommand_cloneInto(void *this,void *target)

{
  void *thisObj;
  void *unaff_EDI;
  
                    /* Copies MatchCommand base state into an RTTI-checked MatchCommand target. It
                       casts the target from NetworkCommand to MatchCommand, asserts 'clone' on
                       failure, then copies the field at +8. */
  thisObj = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &MatchCommand::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\match_command\\MatchCommand.cpp",0x30);
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  *(undefined4 *)((int)thisObj + 8) = *(undefined4 *)((int)this + 8);
  return;
}


// addr: 0x013b39f0
// name: MatchCommand_SetReady_cloneInto
// subsystem: common/networking/match_command
// source (binary assert): common/networking/match_command/MatchCommandSetReady.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SetReady_cloneInto(void * this, void * target) */

void __thiscall MatchCommand_SetReady_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Copies a SetReady match command into an RTTI-checked target. It invokes
                       MatchCommand_cloneInto and copies the ready byte at +0xc. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &MatchCommand_SetReady::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\match_command\\MatchCommandSetReady.cpp",0x3c);
  }
  MatchCommand_cloneInto(this,target_00);
  *(undefined1 *)((int)target_00 + 0xc) = *(undefined1 *)((int)this + 0xc);
  return;
}


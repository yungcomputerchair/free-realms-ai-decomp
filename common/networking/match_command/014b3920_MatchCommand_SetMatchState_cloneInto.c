// addr: 0x014b3920
// name: MatchCommand_SetMatchState_cloneInto
// subsystem: common/networking/match_command
// source (binary assert): common/networking/match_command/MatchCommandSetMatchState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SetMatchState_cloneInto(void * this, void * target) */

void __thiscall MatchCommand_SetMatchState_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Copies a SetMatchState match command into an RTTI-checked target, including
                       its dword state field at +0xc. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &MatchCommand_SetMatchState::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\match_command\\MatchCommandSetMatchState.cpp",0x4a
                );
  }
  MatchCommand_cloneInto(this,target_00);
  *(undefined4 *)((int)target_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  return;
}


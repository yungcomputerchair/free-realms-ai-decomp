// addr: 0x014b4030
// name: MatchCommand_SetBulkMatchState_cloneInto
// subsystem: common/networking/match_command
// source (binary assert): common/networking/match_command/MatchCommandSetBulkMatchState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SetBulkMatchState_cloneInto(void * this, void * target) */

void __thiscall MatchCommand_SetBulkMatchState_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Copies a SetBulkMatchState match command into an RTTI-checked target after
                       the MatchCommand base. The derived data appears to be two container members
                       at +0xc and +0x1c handled by helper FUN_005f1e5c. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &MatchCommand_SetBulkMatchState::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\match_command\\MatchCommandSetBulkMatchState.cpp",
                 0x45);
  }
  MatchCommand_cloneInto(this,target_00);
  FUN_005f1e5c((int)this + 0xc);
  FUN_005f1e5c((int)this + 0x1c);
  return;
}


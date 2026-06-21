// addr: 0x014b5390
// name: MatchCommand_InitiateChallenge_cloneInto
// subsystem: common/networking/match_command
// source (binary assert): common/networking/match_command/MatchCommandInitiateChallenge.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_InitiateChallenge_cloneInto(void * this, void * target) */

void __thiscall MatchCommand_InitiateChallenge_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Copies an InitiateChallenge match command into an RTTI-checked target,
                       copying three dword fields at +0xc, +0x10, and +0x14 after the base command
                       state. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &MatchCommand_InitiateChallenge::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\match_command\\MatchCommandInitiateChallenge.cpp",
                 0x44);
  }
  MatchCommand_cloneInto(this,target_00);
  *(undefined4 *)((int)target_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)target_00 + 0x10) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)target_00 + 0x14) = *(undefined4 *)((int)this + 0x14);
  return;
}


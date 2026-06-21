// addr: 0x014b3490
// name: MatchCommand_SetTimer_cloneInto
// subsystem: common/networking/match_command
// source (binary assert): common/networking/match_command/MatchCommandSetTimer.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SetTimer_cloneInto(void * this, void * target) */

void __thiscall MatchCommand_SetTimer_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Copies a SetTimer match command into an RTTI-checked target. It copies base
                       MatchCommand state and the timer dword at +0xc. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &MatchCommand_SetTimer::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\match_command\\MatchCommandSetTimer.cpp",0x36);
  }
  MatchCommand_cloneInto(this,target_00);
  *(undefined4 *)((int)target_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  return;
}


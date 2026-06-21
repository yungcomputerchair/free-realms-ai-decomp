// addr: 0x014b4b30
// name: MatchCommand_SelectStartPosition_cloneInto
// subsystem: common/networking/match_command
// source (binary assert): common/networking/match_command/MatchCommandSelectStartPosition.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SelectStartPosition_cloneInto(void * this, void * target) */

void __thiscall MatchCommand_SelectStartPosition_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Copies a SelectStartPosition match command into an RTTI-checked target. It
                       copies the base MatchCommand state, a container/member at +0x10, and the
                       dword at +0xc. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &MatchCommand_SelectStartPosition::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\match_command\\MatchCommandSelectStartPosition.cpp",0x59);
  }
  MatchCommand_cloneInto(this,target_00);
  FUN_005f1e5c((int)this + 0x10);
  *(undefined4 *)((int)target_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  return;
}


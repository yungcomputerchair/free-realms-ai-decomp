// addr: 0x014b43e0
// name: MatchCommand_SetBid_cloneInto
// subsystem: common/networking/match_command
// source (binary assert): common/networking/match_command/MatchCommandSetBid.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SetBid_cloneInto(void * this, void * target) */

void __thiscall MatchCommand_SetBid_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Copies a SetBid match command into an RTTI-checked target. It delegates
                       base-field copying to MatchCommand_cloneInto and copies the bid dword at
                       +0xc. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &MatchCommand_SetBid::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\match_command\\MatchCommandSetBid.cpp",0x3e);
  }
  MatchCommand_cloneInto(this,target_00);
  *(undefined4 *)((int)target_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  return;
}


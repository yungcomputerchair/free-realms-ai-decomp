// addr: 0x014b2f30
// name: MatchCommand_SetDeckArchetype_cloneInto
// subsystem: common/networking/match_command
// source (binary assert): common/networking/match_command/MatchCommandSetDeckArchetype.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SetDeckArchetype_cloneInto(void * this, void * target) */

void __thiscall MatchCommand_SetDeckArchetype_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Copies a SetDeckArchetype match command into an RTTI-checked target,
                       including the dword field at +0xc after the base MatchCommand state. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &MatchCommand_SetDeckArchetype::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\match_command\\MatchCommandSetDeckArchetype.cpp",
                 0x2b);
  }
  MatchCommand_cloneInto(this,target_00);
  *(undefined4 *)((int)target_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  return;
}


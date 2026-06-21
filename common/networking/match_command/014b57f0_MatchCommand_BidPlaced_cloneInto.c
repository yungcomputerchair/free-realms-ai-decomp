// addr: 0x014b57f0
// name: MatchCommand_BidPlaced_cloneInto
// subsystem: common/networking/match_command
// source (binary assert): common/networking/match_command/MatchCommandBidPlaced.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_BidPlaced_cloneInto(void * this, void * target) */

void __thiscall MatchCommand_BidPlaced_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Copies a BidPlaced match command into an RTTI-checked target. No derived
                       fields are visible beyond the MatchCommand base state. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &MatchCommand_BidPlaced::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\match_command\\MatchCommandBidPlaced.cpp",0x2f);
  }
  MatchCommand_cloneInto(this,target_00);
  return;
}


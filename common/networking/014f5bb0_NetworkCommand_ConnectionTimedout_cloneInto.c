// addr: 0x014f5bb0
// name: NetworkCommand_ConnectionTimedout_cloneInto
// subsystem: common/networking
// source (binary assert): common/networking/NetworkCommandConnectionTimedout.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_ConnectionTimedout_cloneInto(void * allocator) */

void NetworkCommand_ConnectionTimedout_cloneInto(void *allocator)

{
  void *this;
  
                    /* Allocates/clones an empty NetworkCommand_ConnectionTimedout object. Evidence:
                       RTTI names NetworkCommand_ConnectionTimedout and assert string is clone in
                       NetworkCommandConnectionTimedout.cpp. */
  this = (void *)FUN_00d8d382(allocator,0,&NetworkCommand::RTTI_Type_Descriptor,
                              &NetworkCommand_ConnectionTimedout::RTTI_Type_Descriptor,0);
  if (this == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\NetworkCommandConnectionTimedout.cpp",0x26);
  }
  NetworkCommand_cloneBaseFields(this);
  return;
}


// addr: 0x014f1cf0
// name: NetworkCommand_QueryDisconnect_cloneInto
// subsystem: common/networking
// source (binary assert): common/networking/NetworkCommandQueryDisconnect.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_QueryDisconnect_cloneInto(void * allocator) */

void NetworkCommand_QueryDisconnect_cloneInto(void *allocator)

{
  void *this;
  
                    /* Allocates/clones an empty NetworkCommand_QueryDisconnect object. Evidence:
                       RTTI names NetworkCommand_QueryDisconnect and assert string is clone in
                       NetworkCommandQueryDisconnect.cpp. */
  this = (void *)FUN_00d8d382(allocator,0,&NetworkCommand::RTTI_Type_Descriptor,
                              &NetworkCommand_QueryDisconnect::RTTI_Type_Descriptor,0);
  if (this == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\NetworkCommandQueryDisconnect.cpp",0x26);
  }
  NetworkCommand_cloneBaseFields(this);
  return;
}


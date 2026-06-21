// addr: 0x013ee200
// name: NetworkCommand_RequestData_cloneInto
// subsystem: common/networking
// source (binary assert): common/networking/NetworkCommandRequestData.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_RequestData_cloneInto(void * this, void * allocator) */

void __thiscall NetworkCommand_RequestData_cloneInto(void *this,void *allocator)

{
  void *this_00;
  
                    /* Allocates/clones a NetworkCommand_RequestData and copies its 32-bit field.
                       Evidence: RTTI names NetworkCommand_RequestData and the assert string is
                       clone in NetworkCommandRequestData.cpp. */
  this_00 = (void *)FUN_00d8d382(allocator,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &NetworkCommand_RequestData::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\NetworkCommandRequestData.cpp",0x2e);
  }
  NetworkCommand_cloneBaseFields(this_00);
  *(undefined4 *)((int)this_00 + 4) = *(undefined4 *)((int)this + 4);
  return;
}


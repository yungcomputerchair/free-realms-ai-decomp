// addr: 0x014f1880
// name: NetworkCommand_SessionKick_cloneInto
// subsystem: common/networking
// source (binary assert): common/networking/NetworkCommandSessionKick.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_SessionKick_cloneInto(void * this, void * allocator) */

void __thiscall NetworkCommand_SessionKick_cloneInto(void *this,void *allocator)

{
  void *this_00;
  
                    /* Allocates/clones a NetworkCommand_SessionKick and copies its 32-bit field.
                       Evidence: RTTI names NetworkCommand_SessionKick and assert string is clone in
                       NetworkCommandSessionKick.cpp. */
  this_00 = (void *)FUN_00d8d382(allocator,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &NetworkCommand_SessionKick::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\NetworkCommandSessionKick.cpp",0x32);
  }
  NetworkCommand_cloneBaseFields(this_00);
  *(undefined4 *)((int)this_00 + 4) = *(undefined4 *)((int)this + 4);
  return;
}


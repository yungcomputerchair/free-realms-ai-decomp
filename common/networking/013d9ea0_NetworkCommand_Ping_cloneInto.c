// addr: 0x013d9ea0
// name: NetworkCommand_Ping_cloneInto
// subsystem: common/networking
// source (binary assert): common/networking/NetworkCommandPing.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_Ping_cloneInto(void * this, void * allocator) */

void __thiscall NetworkCommand_Ping_cloneInto(void *this,void *allocator)

{
  void *this_00;
  
                    /* Allocates/clones a NetworkCommand_Ping instance and copies its 32-bit payload
                       field. Evidence: RTTI cast/allocation uses
                       NetworkCommand_Ping::RTTI_Type_Descriptor and assert string is clone in
                       NetworkCommandPing.cpp. */
  this_00 = (void *)FUN_00d8d382(allocator,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &NetworkCommand_Ping::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\NetworkCommandPing.cpp",0x2d);
  }
  NetworkCommand_cloneBaseFields(this_00);
  *(undefined4 *)((int)this_00 + 4) = *(undefined4 *)((int)this + 4);
  return;
}


// addr: 0x014f20d0
// name: NetworkCommand_PendingSessionKick_cloneInto
// subsystem: common/networking
// source (binary assert): common/networking/NetworkCommandPendingSessionKick.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_PendingSessionKick_cloneInto(void * this, void *
   allocator) */

void __thiscall NetworkCommand_PendingSessionKick_cloneInto(void *this,void *allocator)

{
  void *this_00;
  
                    /* Allocates/clones a NetworkCommand_PendingSessionKick and copies two 32-bit
                       fields. Evidence: RTTI names NetworkCommand_PendingSessionKick and assert
                       string is clone in NetworkCommandPendingSessionKick.cpp. */
  this_00 = (void *)FUN_00d8d382(allocator,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &NetworkCommand_PendingSessionKick::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\NetworkCommandPendingSessionKick.cpp",0x42);
  }
  NetworkCommand_cloneBaseFields(this_00);
  *(undefined4 *)((int)this_00 + 4) = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this_00 + 8) = *(undefined4 *)((int)this + 8);
  return;
}


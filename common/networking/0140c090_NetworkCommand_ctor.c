// addr: 0x0140c090
// name: NetworkCommand_ctor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_ctor(void * this) */

void __fastcall NetworkCommand_ctor(void *this)

{
                    /* Base constructor that installs PersistentBase, PersistentComponent, then
                       NetworkCommand vtables. Evidence: vtable assignments are explicit and many
                       command constructors call it before setting derived vtables. */
  *(undefined ***)this = PersistentBase::vftable;
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = NetworkCommand::vftable;
  return;
}


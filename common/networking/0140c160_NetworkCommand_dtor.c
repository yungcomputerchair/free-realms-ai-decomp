// addr: 0x0140c160
// name: NetworkCommand_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_dtor(void * this) */

void __fastcall NetworkCommand_dtor(void *this)

{
                    /* Base destructor that unwinds NetworkCommand to PersistentComponent and
                       PersistentBase vtables. Evidence: explicit vtable assignments and broad use
                       from derived command destructors. */
  *(undefined ***)this = NetworkCommand::vftable;
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = PersistentBase::vftable;
  return;
}


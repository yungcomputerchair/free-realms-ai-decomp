// addr: 0x012ec810
// name: Utility_TokenBuilder_ctor
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Utility_TokenBuilder_ctor(void * this) */

void __fastcall Utility_TokenBuilder_ctor(void *this)

{
                    /* Constructs a Utility::TokenBuilder by installing its vtable and initializing
                       internal string/vector-like fields to empty SSO states. */
  *(undefined ***)this = Utility::TokenBuilder::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x48) = 0xf;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x34) = 0;
  return;
}


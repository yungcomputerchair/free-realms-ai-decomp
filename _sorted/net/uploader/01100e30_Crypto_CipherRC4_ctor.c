// addr: 0x01100e30
// name: Crypto_CipherRC4_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Crypto_CipherRC4_ctor(void * this) */

void * __fastcall Crypto_CipherRC4_ctor(void *this)

{
                    /* Constructs a Crypto::CipherRC4 object by installing its vtable and clearing
                       key/state fields. The vtable symbol directly identifies the class. */
  *(undefined ***)this = Crypto::CipherRC4::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  return this;
}


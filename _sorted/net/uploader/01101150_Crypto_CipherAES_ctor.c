// addr: 0x01101150
// name: Crypto_CipherAES_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Crypto_CipherAES_ctor(void * this) */

void * __fastcall Crypto_CipherAES_ctor(void *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Crypto::CipherAES object, clears state, allocates two AES key
                       schedule/context buffers, and installs the CipherAES vtable. */
  puStack_8 = &LAB_0164ea58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  *(undefined ***)this = Crypto::CipherAES::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  pvVar1 = Mem_Alloc(0xf4);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    FUN_01102cd0();
  }
  *(void **)((int)this + 4) = pvVar1;
  pvVar1 = Mem_Alloc(0xf4);
  if (pvVar1 != (void *)0x0) {
    FUN_01102cd0();
    *(void **)((int)this + 8) = pvVar1;
    ExceptionList = local_c;
    return this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  ExceptionList = local_c;
  return this;
}


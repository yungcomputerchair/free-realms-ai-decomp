// addr: 0x011000a0
// name: Crypto_CipherCCM_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Crypto_CipherCCM_ctor(void * this) */

void * __fastcall Crypto_CipherCCM_ctor(void *this)

{
  uint uVar1;
  void *_Dst;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Crypto::CipherCCM object, initializes embedded AES/array state,
                       allocates a zeroed 0x160-byte CCM context, and installs the CipherCCM vtable.
                        */
  puStack_8 = &LAB_0164e9c3;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)this = Crypto::CipherCCM::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = DAT_01cb9d90;
  *(undefined4 *)((int)this + 0x14) = DAT_01cb9d94;
  *(undefined4 *)((int)this + 0x18) = DAT_01cb9d90;
  *(undefined4 *)((int)this + 0x1c) = DAT_01cb9d94;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  FUN_010fee60(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)((int)this + 0xb0) = 0;
  _Dst = Mem_Alloc(0x160);
  *(void **)((int)this + 4) = _Dst;
  _memset(_Dst,0,0x160);
  ExceptionList = local_c;
  return this;
}


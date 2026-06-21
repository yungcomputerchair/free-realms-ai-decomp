// addr: 0x00a0fcd0
// name: ClientEffectTag_ctor
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientEffectTag_ctor(void * this) */

void * __fastcall ClientEffectTag_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ClientEffectTag object, calling a base/helper constructor then
                       installing ClientEffectTag::vftable and zeroing tag fields. The vtable symbol
                       gives the class name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ad658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EffectTag_sub_0103daa0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = ClientEffectTag::vftable;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined1 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  ExceptionList = local_c;
  return this;
}


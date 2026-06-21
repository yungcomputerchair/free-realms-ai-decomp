// addr: 0x00a10fa0
// name: ClientEffectTag_ctorWithId
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientEffectTag_ctorWithId(void * this, uint * id) */

void * __thiscall ClientEffectTag_ctorWithId(void *this,uint *id)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ClientEffectTag and stores the supplied id/key at offset +0x80.
                       Class name is authoritative from ClientEffectTag_ctor callee. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ada68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ClientEffectTag_ctor(this);
  *(uint *)((int)this + 0x80) = *id;
  ExceptionList = local_c;
  return this;
}


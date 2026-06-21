// addr: 0x00a3a140
// name: ProfileItem_ctorWithId
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ProfileItem_ctorWithId(void * this, uint * id) */

void * __thiscall ProfileItem_ctorWithId(void *this,uint *id)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ProfileItem using ProfileItem_ctor and stores the supplied
                       id/key at offset +0x50. Type is inferred from adjacent ProfileItem map code.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b2da8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ProfileItem_ctor(this);
  *(uint *)((int)this + 0x50) = *id;
  ExceptionList = local_c;
  return this;
}


// addr: 0x00aad200
// name: HousingPacketFixtureUpdate_ctor
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * HousingPacketFixtureUpdate_ctor(void * this, uint subop_, uint
   fixtureId_, uint flags_) */

void * __thiscall
HousingPacketFixtureUpdate_ctor(void *this,uint subop_,uint fixtureId_,uint flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a HousingPacketFixtureUpdate packet: calls the BaseHousingPacket
                       subop constructor, installs HousingPacketFixtureUpdate::vftable, stores
                       arguments, and initializes an embedded CharacterGuid array. The vtable symbol
                       gives the class name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015c3623;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BaseHousingPacket_ctor_subop(0x28);
  *(uint *)((int)this + 0xc) = subop_;
  *(undefined ***)this = HousingPacketFixtureUpdate::vftable;
  *(uint *)((int)this + 0x10) = fixtureId_;
  *(uint *)((int)this + 0x14) = flags_;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined ***)((int)this + 0x1c) =
       SoeUtil::Array<SoeUtil::StrongType<unsigned___int64,SoeUtilSignatureCharacterGuid,0>,0,1>::
       vftable;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  ExceptionList = local_c;
  return this;
}


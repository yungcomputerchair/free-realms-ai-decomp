// addr: 0x00ad0d20
// name: WelcomeInfo_ClaimCodeDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * WelcomeInfo_ClaimCodeDataSource_ctor(void * this, void * owner) */

void * __thiscall WelcomeInfo_ClaimCodeDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.Welcome.ClaimCodes data source and initializes its
                       Entry array member. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015c8966;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,"BaseClient.Welcome.ClaimCodes");
  *(undefined ***)this = WelcomeInfo::ClaimCodeDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = WelcomeInfo::ClaimCodeDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = WelcomeInfo::ClaimCodeDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined ***)((int)this + 600) =
       SoeUtil::Array<WelcomeInfo::ClaimCodeDataSource::Entry,0,1>::vftable;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  ExceptionList = local_c;
  return this;
}


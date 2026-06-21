// addr: 0x00a720f0
// name: SocialShareDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SocialShareDataSource_ctor(void * this, void * owner) */

void * __thiscall SocialShareDataSource_ctor(void *this,void *owner)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.SocialShare data source, initializes its
                       SocialShareData array, stores owner state, clears a flag, and runs a setup
                       helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ba2a6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_SocialShare_01815d03_1_01b50144);
  *(undefined ***)this = SocialShareDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = SocialShareDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = SocialShareDataSource::vftable;
  *(undefined ***)((int)this + 0x254) =
       SoeUtil::Array<SocialShareDataSource::SocialShareData,0,1>::vftable;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  local_4 = 1;
  *(void **)((int)this + 0x268) = owner;
  *(undefined1 *)((int)this + 0x264) = 0;
  FUN_00a71c60(uVar1);
  ExceptionList = local_c;
  return this;
}


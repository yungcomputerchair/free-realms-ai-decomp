// addr: 0x00ad0a70
// name: WelcomeInfo_WhatsNewDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * WelcomeInfo_WhatsNewDataSource_ctor(void * this, void * owner) */

void * __thiscall WelcomeInfo_WhatsNewDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the WelcomeInfo WhatsNew data source, initializes its Entry array,
                       stores the owner, and runs a default resource/setup helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015c8866;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,"WelcomeInfo");
  *(undefined ***)this = WelcomeInfo::WhatsNewDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = WelcomeInfo::WhatsNewDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = WelcomeInfo::WhatsNewDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined ***)((int)this + 600) =
       SoeUtil::Array<WelcomeInfo::WhatsNewDataSource::Entry,0,1>::vftable;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  local_4 = 1;
  FUN_00ad0100(&DAT_0175b400);
  ExceptionList = local_c;
  return this;
}


// addr: 0x00a856c0
// name: LocaleDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LocaleDataSource_ctor(void * this, void * owner) */

void * __thiscall LocaleDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.Locale data source, initializes an integer array
                       member, stores owner/default locale fields, and clears a flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015bcc06;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_Locale_01b520b8);
  *(undefined ***)this = LocaleDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = LocaleDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = LocaleDataSource::vftable;
  *(undefined ***)((int)this + 0x254) = SoeUtil::Array<int,0,1>::vftable;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(void **)((int)this + 0x264) = owner;
  *(undefined1 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x270) = DAT_01be7930;
  *(undefined4 *)((int)this + 0x274) = DAT_01be7934;
  ExceptionList = local_c;
  return this;
}


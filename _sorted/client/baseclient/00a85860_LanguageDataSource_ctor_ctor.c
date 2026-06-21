// addr: 0x00a85860
// name: LanguageDataSource_ctor_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LanguageDataSource_ctor_ctor(void * this, void * owner) */

void * __thiscall LanguageDataSource_ctor_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.Language data source by reusing LocaleDataSource
                       initialization and then installing LanguageDataSource vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015bcc78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LocaleDataSource_ctorWithName_ctor(this,owner);
  *(undefined ***)this = LanguageDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = LanguageDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = LanguageDataSource::vftable;
  ExceptionList = local_c;
  return this;
}


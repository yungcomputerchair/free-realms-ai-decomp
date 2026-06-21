// addr: 0x00ad0bc0
// name: WelcomeInfo_InfoDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * WelcomeInfo_InfoDataSource_ctor(void * this, void * owner) */

void * __thiscall WelcomeInfo_InfoDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.Welcome.Info data source, initializes an int array
                       member, sets a sentinel field, and initializes a Resources/ path string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015c88e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,"BaseClient.Welcome.Info");
  *(undefined ***)this = WelcomeInfo::InfoDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = WelcomeInfo::InfoDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = WelcomeInfo::InfoDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined ***)((int)this + 600) = SoeUtil::Array<int,0,1>::vftable;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  local_4 = 1;
  *(undefined4 *)((int)this + 0x268) = 0xffffffff;
  FUN_00acf550("Resources/");
  ExceptionList = local_c;
  return this;
}


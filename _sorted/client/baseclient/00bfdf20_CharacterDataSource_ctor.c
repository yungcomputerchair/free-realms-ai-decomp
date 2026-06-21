// addr: 0x00bfdf20
// name: CharacterDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CharacterDataSource_ctor(void * this, void * owner) */

void * __thiscall CharacterDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.PlayerInfo character data source, storing owner,
                       clearing a flag, and initializing multiple IString fields to empty. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015f306a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_PlayerInfo_01b67e70);
  *(void **)((int)this + 0x254) = owner;
  *(undefined ***)this = CharacterDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = CharacterDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = CharacterDataSource::vftable;
  *(undefined1 *)((int)this + 0x259) = 0;
  *(undefined ***)((int)this + 0x25c) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x260) = &DAT_01beb46c;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined ***)((int)this + 0x26c) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x270) = &DAT_01beb46c;
  *(undefined4 *)((int)this + 0x278) = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined ***)((int)this + 0x27c) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x280) = &DAT_01beb46c;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined ***)((int)this + 0x28c) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x290) = &DAT_01beb46c;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined ***)((int)this + 0x29c) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x2a0) = &DAT_01beb46c;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined ***)((int)this + 0x2ac) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x2b0) = &DAT_01beb46c;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined ***)((int)this + 700) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x2c0) = &DAT_01beb46c;
  *(undefined4 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  ExceptionList = local_c;
  return this;
}

